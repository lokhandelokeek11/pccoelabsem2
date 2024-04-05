#include<iostream>
using namespace std;

class Triangle{
    public:
        void display(){
            cout<<"I am a triangle"<<endl;
        }
};
class Isocelestriangle : public Triangle{
    public:
        void display(){
            cout<<"I am an isosceles triangle"<<endl;
        }
};
class Equilateraltriangle : public Triangle{
    public: 
        void display(){
            cout<<"I am an equilateral triangle"<<endl;
        }
};
int main(){
    Equilateraltriangle sample1;
    sample1.display();

    Isocelestriangle sample2;
    sample2.display();

    Triangle sample3;
    sample3.display();


    return 0;
}