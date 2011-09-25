/*student.h contains all function declarations and data structures for the studentData.c program*/

//student struct
struct student {
	char name[16];
	int idNum;
	char grade;
};

//function prototypes
void flush_stdin();
void incrementGrade(char c);
void printGrades();
void createStudents(struct student *s, int i);
void printStudInfo(struct student *s, int i);
void resetGrades();
