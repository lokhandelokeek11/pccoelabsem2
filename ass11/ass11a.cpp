#include <iostream>
using namespace std;

class Student {
public:
    int rollNumber;
    string studentname;
    int chem;
    int phy;
    int oops;

    Student() {
        cout << "Student constructor is called" << endl;
    }

    ~Student() {
        cout << "Student destructor is called" << endl;
    }

    void getData() {
        cout << "Enter roll number of student: ";
        cin >> rollNumber;
        cout << "Enter name of student: ";
        cin >> studentname;
        cout << "Enter Chemistry Marks: ";
        cin >> chem;
        cout << "Enter Physics Marks: ";
        cin >> phy;
        cout << "Enter OOPS Marks: ";
        cin >> oops;
    }
};

class StudentSPA {
public:
    int spaMarks;
    string spaGrade;

    void getScore() {
        cout << "Enter the SPA marks: ";
        cin >> spaMarks;
        if (spaMarks >= 90) {
            spaGrade = 'A';
        } else if (spaMarks >= 80) {
            spaGrade = 'B';
        } else if (spaMarks >= 70) {
            spaGrade = 'C';
        } else if (spaMarks >= 60) {
            spaGrade = 'D';
        } else {
            spaGrade = "FAIL";
        }
    }
};

class Result {
    Student student;
    StudentSPA spa;
    int totalScore;
    int finalResult;

public:
    Result() {
        cout << "Result constructor is called" << endl;
    }
    ~Result() {
        cout << "Result destructor is called" << endl;
    }

    void getData() {
        student.getData();
        spa.getScore();
    }

    void printScore() {
        totalScore = student.chem + student.phy + student.oops;
        finalResult = totalScore + spa.spaMarks;
        cout << "Final score is: " << finalResult << endl;
    }

    void printGrade() {
        cout << "Final grade is: " << spa.spaGrade << endl;
    }

    void displayPercentage() {
        int percentage = finalResult / 4;
        cout << "Percentage is: " << percentage << "%" << endl;
    }
};

int main() {
    Result stresult;
    stresult.getData();
    stresult.printScore();
    stresult.printGrade();
    stresult.displayPercentage();

    return 0;
}