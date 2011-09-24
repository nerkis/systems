/*student.h contains all function declarations and data structures for the studentData.c program*/

//function prototypes
void flush_stdin();

//student struct
struct student {
	char name[16];
	int idNum;
	char grade;
};
