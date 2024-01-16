// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class student{
    int rollno;
    string name;
    public:
    student();
    void read();
    void show();
};
void student :: read(){
  cout<<"Enter the roll no: ";
  cin>>rollno>>name;
}
void student :: show(){
    cout<<"THE DETAILS OF STUDENT ARE: ";
  cout<<rollno<<name;
}
student :: student(){
  rollno='10', name = "sohan";
}
int main() {
  student s1;

  s1.read();
  s1.show();

    return 0;
}
