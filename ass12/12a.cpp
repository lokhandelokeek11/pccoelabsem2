#include<iostream>
using namespace std;

class employee{
public:
    string name;
    int employee_id;
    int age;
    int size;
    static int digit;
    float salary;
    string department;
    int phoneno[10];
    void getdata();
    void putdata();
    void AgeCheck();
    void phonenumcheck();
};

void employee::getdata(){
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your employee Id: ";
    cin>>employee_id;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your salary: ";
    cin>>salary;
    cout<<"Enter your department: ";
    cin>>department;
    cout<<"Enter your phone number (10 digits): ";
    for(int i = 0; i < 10; i++){
        cin >> phoneno[i];
    }
    size = 10;
}

void employee::putdata(){
    cout<<"Employee data is: "<<endl;
    cout<<"Name of the employee is: "<<name<<endl;
    cout<<"Employee Id is: "<<employee_id<<endl;
    cout<<"Age of the Employee is: "<<age<<endl;
    cout<<"Salary of the Employee is: "<<salary<<endl;
    cout<<"Department of the Employee is: "<<department<<endl;
    cout<<"Phone number of the Employee is: ";
    for(int i = 0; i < 10; i++){
        cout << phoneno[i];
    }
    cout << endl;
}

void employee::AgeCheck(){
    try
    {
        if(age < 18)
            throw "Error occurred";
        else
            cout<<"Salary will be generated"<<endl;
    }
    catch(const char* s)
    {
        cout<<"Exception handled: "<<s<<endl;
    }
}

void employee::phonenumcheck(){
    try{
        if(size != 10){
            throw size;
        }
        cout<<"Phone number is valid!"<<endl;
    }
    catch(int s){
        cout<<"Invalid phone number size: "<<s<<endl;
    }
}

int main(){
    employee emp;
    int choice;
    do {
        cout << "\nMenu:\n1. Enter Employee Data\n2. Show Employee Data\n3. Check Age\n4. Check Phone Number\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                emp.getdata();
                break;
            case 2:
                emp.putdata();
                break;
            case 3:
                emp.AgeCheck();
                break;
            case 4:
                emp.phonenumcheck();
                break;
            case 5:
            default:
                cout << "Invalid choice. Please try again.";
        }
    } while(choice != 4);

    return 0;
}