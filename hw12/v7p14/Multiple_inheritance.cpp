#include <iostream>
using namespace std;

class Person {
public:
    Person(int x){
        cout << "Person::Person(int ) called" << endl;
        age = x;

        cout << "age: " << age << endl;
    }

    Person(){
        cout << "Person::Person() called" << endl;
        age = 25;
    }

    int age; //for practice
};

class Faculty : virtual public Person {
public:
    Faculty(int x):Person(x){
        cout << "Faculty::Faculty(int ) called" << endl;

        year = x;

        cout << "year: " << year << endl;
    }

    int year; //for practice

};

class Student : virtual public Person{
public:
    Student(int x):Person(x){
        cout << "Student::Student(int ) called" << endl;

        study_time = x;

        cout << "study_time: " << study_time << endl;
    }


    int study_time; //for practice

};

class TA : public Faculty, public Student {
public:
    TA(int x):Student(x), Faculty(x){
        cout << "TA::TA(int ) called" << endl;

        many = x;

        cout << "TA: " << many << endl;
    }

    int many; // for practice

};

int main() {
    TA ta1(30);
}