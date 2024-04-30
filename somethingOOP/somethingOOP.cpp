#include <iostream>
using namespace std;

class University {
protected:
	string faculty;

public:
	University(string faculty) {
		setFaculty(faculty);
	}


	void setFaculty(string faculty) {
		this->faculty = faculty;
	}

	void getFaculty() {
		cout << faculty;
	}

};


class Student : public University {
protected:
	string fname;
	string lname;
	int age;
	int id;
public:
	Student(string fname, string lname, int age, int id, string faculty) :
		University(faculty), fname(fname), lname(lname), age(age), id(id) {

	}

	void setData(string fname, string lname, int age, int id, string faculty) {
		this->fname = fname;
		this->lname = lname;
		this->age = age;
		this->id = id;
		this->faculty = faculty;
	}


	virtual void showInfo() {
		cout << "First name: " << fname << endl;
		cout << "Last name: " << lname << endl;
		cout << "Age: " << age << endl;
		cout << "Id: " << id << endl;
		cout << "Faculty: " << faculty << endl << endl;
	}
};


class Grade : public Student {
private:
	string subjects[6];
	double grades[6], gpa[6];
public:
	Grade(string fname, string lname, int age, int id, string faculty) :
		Student(fname, lname, age, id, faculty) {}


	void setSubjects() {
		for (int i = 0; i < 6; i++)
		{
			cout << "Enter Subject N" << i + 1 << ": ";
			cin >> subjects[i];

			while (true) {
				cout << "Enter grade (between 0 and 100): ";
				cin >> grades[i];
				cout << endl;
				if (grades[i] < 0 || grades[i] > 100) {
					cout << "Invalid input. Please enter a grade between 0 and 100." << endl;
				}
				else {
					break;
				}
			}

			if (grades[i] <= 100 && grades[i] > 90) {
				gpa[i] = 4.0;
			}
			else if (grades[i] <= 90 && grades[i] > 80) {
				gpa[i] = 4.0;
			}
			else if (grades[i] <= 80 && grades[i] > 70) {
				gpa[i] = 3.0;
			}
			else if (grades[i] <= 70 && grades[i] > 60) {
				gpa[i] = 2.0;
			}
			else if (grades[i] <= 60 && grades[i] > 50) {
				gpa[i] = 1.0;
			}
			else {
				gpa[i] = 0;
			}

			system("cls");
		}
	}



	void showInfo() {
		Student::showInfo();
		for (int i = 0; i < 6; i++)
		{
			cout << "Subject: ";
			cout << subjects[i] << " | ";
			cout << "Grade: ";
			cout << grades[i] << " | ";
			cout << "Gpa: ";
			cout << gpa[i] << endl;

		}
	}
};

int main() {

	Student* s1;

	Grade g("Davit", "Mamuladze", 18, 12345, "CS");

	g.setSubjects();

	s1 = &g;

	s1->showInfo();


}
