/*studentData is a program that allows a user to enter and manipulate information about students (last name, ID number, letter grade)

TODO: 1. create space in memory for an array of n students
      2. fill the array with user-provided student information
      3. print the student information on the screen
      4. count the number of each letter grade and print totals
      5. release the array space when finished*/

//include statments
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

//main method
int main(void){

//vars
int *studArray;
int numStudents;

//use in for loop
int i;

printf("STUDENT CONTROL PROGRAM\n\nThis program will:\n1. Create space for an array of n students\n2. Fill the aray with user-provided student information\n3. Print all student information on the screen\n4. Count the number of As, Bs, Cs, Ds, and Fs\n5. Release the array space\n\nEnter the array size or 0 if you want to exit:\n");

//take user input and calloc an array of that size
scanf("%d", &numStudents);
flush_stdin();

printf("You entered: %d\n", numStudents);

//as long as user input is not 0...
if(numStudents == 0)
{
	return 0;
}

studArray = (int*)calloc(numStudents, sizeof(int));

for(i = 0; i < numStudents; i++)
{
	//create a student
	//struct student student;
	
	//ask user for the name
	printf("Enter student name:\n");

	//read student name
	//set student.name to name

	//ask user for the ID
	printf("Enter student ID number:\n");
	
	//read student ID
	//set student.idNum to ID

	//ask user for grade
	printf("Enter student letter grade:\n");
	
	//read grade, make sure to recognize capital or lowercase
	//set student.grade to grade
	//increment the count for that particular grade
}

//user finished inputting student data, so print all information
printf("STUDENT INFORMATION\n");

//do i need a new integer here?
for(i = 0; i < numStudents; i++)
{
	//the current student = studArray[i]
	//printf("ID: %d\nName: %s\nGrade: %c\n", currentStud.idNum, currentStud.name, currentStud.grade);
}

//print number of each grade


printf("Enter the new array size or 0 if you want to exit:\n");

return 0;
} 

//additional functions
void flush_stdin() {
	char c;
	
	while((c = getchar()) != '\n');
}

