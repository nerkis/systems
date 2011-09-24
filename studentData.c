/*studentData is a program that allows a user to enter and manipulate information about students (last name, ID number, letter grade)

TODO: 1. create space in memory for an array of n students
      2. fill the array with user-provided student information
      3. print the student information on the screen
      4. count the number of each letter grade and print totals
      5. release the array space when finished*/

//include statments
#include <stdio.h>
#include <stdlib.h>

//main method
int main(void){

//vars
int *studArray;
int numStudents;

//use in for loop
int i;

printf("STUDENT CONTROL PROGRAM\n\nThis program will:\n1. Create space for an array of n students\n2. Fill the aray with user-provided student information\n3. Print all student information on the screen\n4. Count the number of As, Bs, Cs, Ds, and Fs\n5. Release the array space\n\nEnter the array size or 0 if you want to exit:\n");

//take user input and calloc an array of that size
scanf("%d\n", &numStudents);
//flush_stdin();

printf("You entered: %d\n", numStudents);

//as long as user input is not 0...
if(numStudents == 0){
	return 0;
}

studArray = (int*)calloc(numStudents, sizeof(int));

for(i = 0; i < numStudents; i++){
	//do stuff
}

//for the number students...
//create a student struct
//print "enter student id:"
//take a string(?) as ID and set 
//print "enter student last name:"
//take another string and set
//print "enter the student grade:"
//take another string/char and set
//repeat for as many students as needed

//when finished the loop, print all information
//student id, student name, student grade...
//number of as, bs, c, d, f
//print "enter the new array size or 0 if you want to exit

return 0;
} 

//additional functions
void flush_stdin() {
	char c;
	
	while((c = getchar()) != '\n');
}

