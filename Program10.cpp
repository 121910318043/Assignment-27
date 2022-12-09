/*Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).*/

#include<iostream>
using namespace std;
class Matrix{
private:
    int a[3][3];
public:
    Matrix(){
    cout<<"Enter 3 X 3 Matrix";
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cin>>a[i][j];
        }
    }
    }
    Matrix(int x){}
    Matrix operator+(Matrix&);
    friend ostream& operator<<(ostream&,Matrix&);
};
ostream& operator<<(ostream &OS,Matrix &M)//Passing reference of cout.
{
    int i,j;
    for(i=0;i<3;i++)
    {
        OS<<endl;
        for(j=0;j<3;j++)
        {
            OS<<M.a[i][j];
            OS<<" ";
        }
    }
    return OS;
}
Matrix Matrix::operator+(Matrix &M)
{
    Matrix M1(0);
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            M1.a[i][j]= a[i][j] + M.a[i][j];
        }
    }
    return M1;
}
int main()
{
    Matrix M1,M2,M3(0);
    M3=M1+M2;
    cout<<M3;
}
