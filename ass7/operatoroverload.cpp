#include <iostream>
using namespace std;

class complexnum
{
    float real, imaginery;
public:
    complexnum(float x, float y)
    {
        real = x;
        imaginery = y;
    }

    complexnum operator+(complexnum c);
    complexnum operator-(complexnum c);
    complexnum operator*(complexnum c);
    complexnum operator/(complexnum c);

    void print();
};
complexnum complexnum::operator+(complexnum c)
{
    complexnum result(0,0);
    result.real = real + c.real;
    result.imaginery = imaginery + c.imaginery;
    return result;
}
complexnum complexnum::operator-(complexnum c)
{
    complexnum result(0,0);
    result.real = real - c.real;
    result.imaginery = imaginery - c.imaginery;
    return result;
}
complexnum complexnum::operator*(complexnum c)
{
    complexnum result(0,0);
    result.real = (real * c.real) - (imaginery * c.imaginery);
    result.imaginery = (real * c.imaginery) + (c.real * imaginery);
    return result;
}
complexnum complexnum::operator/(complexnum c)
{
    complexnum result(0,0);
    result.real = (real * c.real + imaginery * c.imaginery) / (c.real * c.real + c.imaginery * c.imaginery);
    result.imaginery = (imaginery * c.real - real * c.imaginery) / (c.real * c.real + c.imaginery * c.imaginery);
    return result;
}
void complexnum::print(){
    cout<<real<<" + "<<imaginery<<"i"<<endl;
}

int main()
{
    complexnum a(10, 12);
    complexnum b(4, 5);
    complexnum c(0,0);
    c =a + b;
    c.print();
    c =a - b;
    c.print();
    c =a * b;
    c.print();
    c =a / b;
    c.print();
    return 0;
}