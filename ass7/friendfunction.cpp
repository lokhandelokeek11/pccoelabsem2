#include<iostream>
using namespace std;
class sample1;
class sample2{
    int a = 10;
    public:
        friend void swapvalues(sample1, sample2);
};
class sample1{
    int b = 20;
    public: 
        friend void swapvalues(sample1, sample2);
};
void swapvalues(sample1 x,sample2 y){
    int temp;
    cout<<"Before Swapping";
    cout<<"First value is : "<<x.b<<endl;
    cout<<"Second value is : "<<y.a<<endl;
    temp = x.b;
    y.a = x.b;
    x.b = temp;
    cout<<"After Swapping";
    cout<<"First value is : "<<x.b<<endl;
    cout<<"Second value is : "<<y.a<<endl;
}
int main(){
    sample1 swap1;
    sample2 swap2;
    swapvalues(swap1,swap2);
}