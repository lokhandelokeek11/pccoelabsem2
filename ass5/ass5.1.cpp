#include<iostream>
using namespace std;

class Student
{
    string studentName;
    float marks[5];
    float totalMarks;
    int maxTotal = 500;
    float average;
    public:
    void assign();
    void compute();
    void display();
};

void Student::assign()
{
    cout<<"Enter the name of the student: ";
    cin>>studentName;
    
    for(int i=0; i<5; i++)
    {
        cout<<"Enter the marks of 5 student "<<i+1<<":";
        cin>>marks[i];
    }
}

void Student::compute()
{
    totalMarks = 0;
    
    for(int i=0; i<5; i++)
    {
        totalMarks += marks[i];
    }
    
    average = totalMarks / 5;
}

void Student::display()
{
    cout<<"Name of the Student: "<<studentName<<endl;
    cout<<"Total marks of the Student: "<<totalMarks<<endl;
    cout<<"Total Maximum Marks Obtained: "<<maxTotal<<endl;
    cout<<"Average of Total Marks: "<<average<<endl;
}

int main()
{
    Student students[50];
    int noofstudent;
    cout<<"Enter the total number of students:";
    cin>>noofstudent;
    for(int i=0; i<noofstudent; i++)
    {
        students[i].assign();
        students[i].compute();
        students[i].display();
        cout << endl;
    }
    return 0;
}
