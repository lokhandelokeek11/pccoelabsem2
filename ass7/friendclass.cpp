#include<iostream>
using namespace std;

class sample1{
    int a = 10;
    public:
    friend class sample2;
};
class sample2{
    int b = 20;
    public:
    void swapvalues(sample1 &t);
};
void sample2::swapvalues(sample1 &t){
    cout<<"Before Swapping"<<endl;
    cout<<"Value A: "<<t.a<<endl;
    cout<<"Value B: "<<b<<endl;
    int temp = t.a;
    t.a = b;
    b = temp;
    cout<<"After Swapping"<<endl;
    cout<<"Value A: "<<t.a<<endl;
    cout<<"Value B: "<<b<<endl;
}
int main(){
    sample1 swap1;
    sample2 swap2;
    swap2.swapvalues(swap1);
}