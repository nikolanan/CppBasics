#include <iostream>
using namespace std;

int main()
{
	struct Student {
		char firstName[20];
		char secondName[20];
		char lastName[20];
		char PID[10];
		double overallGrade;
   }firstStudent;

	strcpy_s(firstStudent.firstName, "Rumen");
	strcpy_s(firstStudent.secondName, "Rumenov");
	strcpy_s(firstStudent.lastName, "Rumenov");
	strcpy_s(firstStudent.PID, "030303030");
	firstStudent.overallGrade = 5.56;

	cout <<"Name: " << firstStudent.firstName << endl;
	cout <<"Surname: " << firstStudent.secondName << endl;
	cout <<"Family name: " << firstStudent.lastName << endl;
	cout <<"PID: " << firstStudent.PID << endl;
	cout <<"Average grade: " << firstStudent.overallGrade << endl;
}

