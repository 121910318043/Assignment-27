#include<iostream>
using namespace std;
class Complex{
private:
    int real;
    int imaginary;
public:
    Complex(){}
    Complex(int x,int y)
    {
        real=x;
        imaginary=y;
    }
    void setData(int x,int y)
    {
        real=x;
        imaginary=y;
    }
    void GetData()
    {
        cout<<real<<"+"<<imaginary<<"i";
    }
    friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex X,Complex Y)
{
    Complex Temp;
    Temp.real = X.real + Y.real;
    Temp.imaginary = X.imaginary + Y.imaginary;
    return Temp;
}
int main()
{
    Complex C1(2,3),C2,C3(4,5);
    C2 = C1+C3;
    C2.GetData();
    return 0;
}
