/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.*/
#include<iostream>
using namespace std;
class Matrix{
private:
    int a[3][3];
public:
    Matrix()
    {
        int i,j;
        cout<<"Enter Matrix Elements (3 X 3) : ";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    Matrix(int x){}
    friend ostream& operator<<(ostream&,Matrix&);
    Matrix operator-();
};
Matrix Matrix::operator-(){
    Matrix M(0);
    int i,j;
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                M.a[i][j]=-a[i][j];
            }
        }
    return M;
}
ostream& operator<<(ostream &OS,Matrix &M1)
{
    int i,j;
        for(i=0;i<3;i++)
        {
            OS<<endl;
            for(j=0;j<3;j++)
            {
                OS<<M1.a[i][j];
                OS<<" ";
            }
        }
    return OS;
}
int main()
{
    Matrix M1,M2(0);
    cout<<M1;
    M2=-M1;
    cout<<M2;
    return 0;
}











