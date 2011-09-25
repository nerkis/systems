/*studentData is a program that allows a user to enter and manipulate
 * information about students (last name, ID number, letter grade)
 */

//include statments
#include <stdio.h>
#include <stdlib.h>
#include "studentData.h"

//global variables, keep track of each grade
int numA = 0;
int numB = 0;
int numC = 0;
int numD = 0;
int numF = 0;


int main(void){

int numStudents = 1;
struct student *s;

printf("STUDENT CONTROL PROGRAM\n\nThis program will:\n1. Create space for an array of n students\n2. Fill the array with user-provided student information\n3. Print all student information on the screen\n4. Count the number of As, Bs, Cs, Ds, and Fs\n5. Release the array space\n");

while (numStudents != 0)
{
	printf("\nEnter the array size or 0 if you want to exit:\n");

	//scan in number of students
	scanf("%d", &numStudents);
	flush_stdin();

	//allocate space for an array of student structs
	s = (struct student*)calloc(numStudents, sizeof(struct student));

	createStudents(s, numStudents);
	printStudInfo(s, numStudents);
	printGrades();

	//clears array from memory
	free(s);

	//clear values of grade counters
	resetGrades();	
}

return 0;
} 


void flush_stdin() {
	char c;
	
	while((c = getchar()) != '\n');
}

/* for each student, createStudents asks the user 
 * to type in student information. It next reads in
 * the information and sets the values of struct 
 * variables
 */
void createStudents(struct student *s, int num)
{
	int i, id; 
	char grade;	

	for(i = 0; i < num; i++)
	{	
		//ask user for the name
		printf("Enter student last name (first 16 characters):\n");
	
		scanf("%s", s->name);	

		//ask user for the ID
		printf("Enter student ID number:\n");
	
		scanf("%d", &id);
		flush_stdin();
		s->idNum = id;

		//ask user for grade
		printf("Enter student letter grade (A, B, C, D, or F):\n");
	
		scanf("%c", &grade);	
		s->grade = grade;	
		
		incrementGrade(grade);
	
		//move to next struct in the array
		s++;
	}
}

// increments the counter for the grade entered
void incrementGrade(char c)
{
	switch (c)
	{
		case 'A':
			numA++;
			break;	
		case 'a':
			numA++;
			break;	
		case 'B':
			numB++;
			break;	
		case 'b':
			numB++;
			break;	
		case 'C':
			numC++;
			break;	
		case 'c':
			numC++;
			break;	
		case 'D':
			numD++;
			break;	
		case 'd':
			numD++;
			break;	
		case 'F':
			numF++;
			break;	
		case 'f':
			numF++;
			break;	
		default:
			printf("Invalid grade entered.");
			break;
	}	
}

//prints out information for all students
void printStudInfo(struct student *s, int num)
{
	//use in for loop
	int i;
	
	printf("\nSTUDENT INFORMATION\n");

	for(i = 0; i < num; i++)
	{	
		printf("\nID: %d\n", s->idNum);
		printf("Name: %s\n", s->name);
		printf("Grade: %c\n", s->grade);

		s++;
	}
}

//prints out the total number of each grade assigned
void printGrades()
{
	printf("\nNumber of As: %d\nNumber of Bs: %d\nNumber of Cs: %d\nNumber of Ds: %d\nNumber of Fs: %d\n", numA, numB, numC, numD, numF);
}

//resets all grade counters to 0
void resetGrades()
{
	numA = 0;
	numB = 0;
	numC = 0;
	numD = 0;
	numF = 0;
}

