#include <iostream>
using namespace std;

class student
{
public:
    int rollno;
    string div;
    string name;

public:
    void input()
    {
        cout << "Enter the details of a student\n";
        cin >> rollno;
        cin >> div;
        cin >> name;
    }
    void output()
    {
        cout << "The details of the student are: ";
        cout << "Roll no\t" << rollno << endl
             << "Div\t" << div << endl
             << "Name of the student is\t" << name << endl;
    }
};
int main()
{
    student s1, s2, s3;
    for(int i=0;i<5;i++)
    {
    s1.input();
    }
    s1.output();
}
