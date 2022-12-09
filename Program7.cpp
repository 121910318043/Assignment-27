#include<iostream>
using namespace std;
class Fraction{
private:
    long numerator;
    long denominator;
public:
    Fraction()
    {
        numerator=denominator=0;
    }
    friend ostream& operator<<(ostream&,Fraction);
    friend istream& operator>>(istream&,Fraction&);
    Fraction operator++(int x)
    {
        Fraction R;
        R.numerator = numerator;
        R.denominator = denominator;
        numerator++;
        denominator++;
        return R;
    }
    Fraction operator++()
    {
        Fraction R;
        R.numerator = numerator + 1;
        R.denominator = denominator + 1;
        numerator++;
        denominator++;
        return R;
    }
};
ostream& operator<<(ostream &os,Fraction F)
{
    os<<F.numerator<<"/"<<F.denominator;
    return os;
}
istream& operator>>(istream &is,Fraction &F)
{
    cout<<"Enter Numerator : ";
    is>>F.numerator;
    cout<<"Enter Denominator : ";
    is>>F.denominator;
    return is;
}

int main()
{
    Fraction F1,F2;
    cin>>F1;
    cout<<"F1: "<<F1;
    F2=F1++;
    cout<<endl;
    cout<<"F2=F1++, F2 = "<<F2;
    cout<<endl;
    cout<<"F1 :"<<F1;
    return 0;
}

/*Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.*/
