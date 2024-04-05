#include <iostream>
using namespace std;

class student{
    string name;
    int roll_no;
    string gender;
    string divison;
    int choice;
    public:
    void getdata();
    void showdata();
    void updatedata();
};

void student :: getdata(){
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"Enter the roll no of the student: ";
    cin>>roll_no;
    cout<<"Enter the gender of the student: ";
    cin>>gender;
    cout<<"Enter the divison of the student: ";
    cin>>divison;
}
void student :: showdata(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll_no<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Division: "<<divison<<endl;
}
void student :: updatedata(){
    cout<<"Which data you want to update ? "<<endl;
    cout<<"1. Name "<<endl;
    cout<<"2. Roll Number "<<endl;
    cout<<"3. Gender "<<endl;
    cout<<"4. Divsion "<<endl;
    cout<<"Enter your choice please!";
    cin>>choice;
    switch (choice)
    {
    case 1: 
            cout<<"Enter Name: ";
            cin>>name;
        break;
    case 2:
            cout<<"Enter Roll-No: ";
            cin>>roll_no;
        break;
    case 3: 
            cout<<"Enter Gender: ";
            cin>>gender;
        break;
    case 4:
            cout<<"Enter Division: ";
            cin>>divison;
        break;
    default:
            cout<<"PLEASE ENTER VALID CHOICE !!!";
        break;
    }
}

int main(){
    student *ptr;
    student sample;
    ptr = &sample;
    int ch;
    while(1){
        cout<<"1. Add Data\n 2. Check Data\n 3. Correction in data\n 4. Exit\n";
        cin>>ch;
        switch (ch)
        {
        case 1:
                ptr->getdata();
            break;
        case 2:
                ptr->showdata();
        case 3: 
                ptr->updatedata();
        default:
            cout<<"Invalid choice";
            break;
        }
    }







    return 0;
}