/*studentData is a program that allows a user to enter and manipulate information about students (last name, ID number, letter grade)

TODO: 1. create space in memory for an array of n students
      2. fill the array with user-provided student information
      3. print the student information on the screen
      4. count the number of each letter grade and print totals
      5. release the array space when finished
*/

//include statments
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

//global variables, keep track of each grade
int numA = 0;
int numB = 0;
int numC = 0;
int numD = 0;
int numF = 0;


int main(void){

int numStudents;
struct student *s;


printf("STUDENT CONTROL PROGRAM\n\nThis program will:\n1. Create space for an array of n students\n2. Fill the array with user-provided student information\n3. Print all student information on the screen\n4. Count the number of As, Bs, Cs, Ds, and Fs\n5. Release the array space\n\nEnter the array size or 0 if you want to exit:\n");

//take user input and calloc an array of that size
scanf("%d", &numStudents);
flush_stdin();

//as long as user input is not 0...
if(numStudents == 0)
{
	return 0;
}

s = (struct student*)calloc(numStudents, sizeof(struct student));

createStudents(s, numStudents);

//user finished inputting student data, so print all information
printStudInfo(s, numStudents);

printGrades();

//clear grade count
//free(studArray);

//START OVER, DON'T DO THIS HERE

return 0;
} 

//additional functions
void flush_stdin() {
	char c;
	
	while((c = getchar()) != '\n');
}

void createStudents(struct student *s, int num)
{
	int i, id; 
	char grade;

	for(i = 0; i < num; i++)
	{	
		//ask user for the name
		printf("Enter student name (first 16 characters):\n");
		
		//read student name
		//s.name = 	

		//ask user for the ID
		printf("Enter student ID number:\n");
	
		scanf("%d", &id);
		flush_stdin();
		//s.idNum = id;

		//ask user for grade
		printf("Enter student letter grade (A, B, C, D, or F):\n");
	
		scanf("%c", &grade);	
		//s.grade = grade;	
		incrementGrade(grade);
	
		//move to next struct in the array
		s++;
	}
}

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

void printStudInfo(struct student *s, int num)
{
	//use in for loop
	int i;
	
	printf("STUDENT INFORMATION\n");

	for(i = 0; i < num; i++)
	{	
		//printf("ID: %d\nName: %s\nGrade: %c\n", s.idNum, s.name, s.grade);
		s++;
	}
}

void printGrades(woid)
{
	printf("Number of As: %d\nNumber of Bs: %d\nNumber of Cs: %d\nNumber of Ds: %d\nNumber of Fs: %d\n", numA, numB, numC, numD, numF);
}

