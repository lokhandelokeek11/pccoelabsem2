#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    virtual ~Person() {}

    virtual void getdata() {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age :  ";
        cin >> age;
    }

    virtual void putdata() {
        cout << name << " " << age << endl;
    }
};

class Professor : public Person {
private:
    string department;
    static int id;

public:
    Professor() {
        id++;
    }

    void getdata() override {
        Person::getdata();
        cout << "Enter department: ";
        cin >> department;
    }

    void putdata() override {
        cout << name << " " << age << " " << department << " " << id << endl;
    }
};

int Professor::id = 0;

class Student : public Person {
private:
    int marks[6];
    static int id;

public:
    Student() {
        id++;
    }

    void getdata() override {
        Person::getdata();
        cout << "Enter marks for 6 subjects: ";
        for (int i = 0; i < 6; ++i) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; ++i) {
            sum = sum + marks[i];
        }
        cout << name << " " << age << " " << sum << " " << id << endl;
    }
};

int Student::id = 0;

int main() {
    int n;
    cout << "Enter the number of people you have to store data: ";
    cin >> n;
    Person *people[n];

    for (int i = 0; i < n; i++) {
        char type;
        cout << "Enter type (P for Professor, S for Student): ";
        cin >> type;
        if (type == 'P') {
            people[i] = new Professor;
        } else {
            people[i] = new Student;
        }
    }

    for (int i = 0; i < n; i++) {
        people[i]->getdata();
    }

    for (int i = 0; i < n; i++) {
        people[i]->putdata();
    }

    for (int i = 0; i < n; i++) {
        delete people[i];
    }

    return 0;
}
