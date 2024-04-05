#include<iostream>
using namespace std;

class division{
    int a,b,c;
    public: 
    void getdata();
    void putdata();
    void checkdata();
};
void division :: getdata(){
    cout<<"Enter num1: ";
    cin>>a;
    cout<<"Enter num2: ";
    cin>>b;
}
void division :: putdata(){
    cout<<"First Number is : "<<a<<endl;
    cout<<"Second number is: "<<b<<endl;;
}
void division :: checkdata(){
    try
    {
        if(b==0){
            throw "Divison by zero error occured: ";
        }
        else{
            cout<<"Answer is :";
            c = a/b;
            cout<<c;
        }
    }
    catch(const char *s)
    {
        cout<<"Exception handled !!";
    }
    catch(int s){
        cout<<"Exception Handled !";
    }   
    catch(...){
        cout<<"Exception handled !!";
    }
    
}
int main(){
    division d;
    d.getdata();
    d.putdata();
    d.checkdata();
    return 0;
}