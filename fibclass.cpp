#include<iostream>
using namespace std;

class fibbonaci{
    int n;
    int num1 = 0,num2 = 1,num3;
public:
    void input(){
        cout<<"Enter the numbers of term: ";
        cin>>n;
    }
    void output(){
        cout<<num1<<num2;
    
        for(int i = 1;i<=n;i++){
            num3 = num1 + num2;
            cout<<num3;
            num2 = num3;
            num1 = num2;
            num2 = num3;
            
        }
    }
};
int main() {
    fibbonaci num;
    num.input();
    num.output();





}