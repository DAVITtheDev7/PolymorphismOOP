#include <iostream>
#include <list>
using namespace std;

class Employee {
protected: 
    string name;
    string company;
    int age;
public:
    Employee(string name, string company, int age) :
        name(name), company(company), age(age) {}

    virtual void IntroduceYourself() {
        cout << "Name - " << name << endl;
        cout << "company - " << company << endl;
        cout << "age - " << age << endl;
    }
};

class Programmer : public Employee {
private:
    list<string> languages;

public:
    Programmer(string name, string company, int age, const list<string>& languages) :
        Employee(name, company, age), languages(languages) {}

    void IntroduceYourself() override {
        Employee::IntroduceYourself();
        cout << "Languages: ";
        for (const auto& lang : languages) {
            cout << lang << ", ";
        }
        cout << endl;
    }
};

int main() {
    Employee* e1;

    list<string> p1_languages = {"Java","Kotlin","C++","Python"};

    Programmer p1("Davit", "YT", 18, p1_languages);

    e1 = &p1;

    e1->IntroduceYourself();

    return 0;
}
