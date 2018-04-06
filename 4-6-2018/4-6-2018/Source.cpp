#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
	int ID;
	int age;
	bool gender;
	string lastname[4] = {"Levi", "Miguel", "Jesus", "Ed"};
public:
	void student();
	void initStudent(int id, int a, bool g, string l[4]);
	void randgen(int id, int a, bool g, string l[4]);
};

int main() {

	Student s1;
	Student s2;
	Student s3;
	Student s4;
	
	vector <Student> students;
	vector <Student>::iterator it;

	for (int iter = students.begin(); iter <= students.end(); iter++) {
		students->printinfo();
	}

}

void Student::student() {
	ID = 0;
	age = 0;
	gender = 0;
};

void Student::initStudent(int id, int a, bool g, string l[4]) {
	ID = id;
	age = a;
	gender = g;
};

void Student::randgen(int id, int a, bool g, string l[4]) {
	id = rand() % 4 + 656038;
	a = rand() % 4 + 13;
	int randage = rand() % (1 + 1 - 0) + 0;
	if (randage == 0)
		g = false;
	if (randage == 1)
		g = true;
	int randname = rand() % (4 + 1 - 0) + 0;
	for (int i = 0; i < 4; i++) {
		 cout << l[i];
	}
};