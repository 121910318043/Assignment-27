#include<iostream>
using namespace std;
class Complex{
private:
    int real;
    int img;
public:
    Complex(){}
    Complex(int x,int y)
    {
        real=x;
        img =y;
    }
    void setData(int x,int y)
    {
        real = x;
        img = y;
    }
    void showComplex()
    {
        cout<<real<<"+"<<img<<"i";
    }
    Complex operator+(Complex C)
    {
        Complex Temp;
        Temp.real = real + C.real;
        Temp.img = img + C.img;
        return Temp;
    }
    Complex operator-(Complex C)
    {
        Complex Temp;
        Temp.real = real - C.real;
        Temp.img = img - C.img;
        return Temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.real = (real*C.real) - (img*C.img);
        temp.img = (img*C.real) + (real*C.img);
        return temp;
    }
    Complex operator-()
    {
        Complex temp;
        temp.real = -real;
        temp.img = -img;
        return temp;
    }
    bool operator==(Complex C)
    {
        if(real == C.real && img == C.img)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    Complex C1(2,3),C2(2,2),C3(2,3),C4,C5,C6;

    cout<<"== operator: ";
    if(C1==C3)
    {cout<<"equal";}
    else{cout<<"not Equal";}
    cout<<endl;



    cout<<"+ operator: ";
    C4=C1+C2;
    C4.showComplex();
    cout<<endl;

    cout<<"- operator: ";
    C5=C2.operator-(C3);
    C5.showComplex();
    cout<<endl;


    cout<<"* operator: ";
    C6 = C2*-C3;
    C6.showComplex();
    return 0;
}
