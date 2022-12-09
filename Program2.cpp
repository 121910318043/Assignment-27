#include<iostream>
using namespace std;
class Datatype1{
private:
    int val1;
    int val2;
public:
    Datatype1(){}
    Datatype1(int x,int y)
    {
        val1=x;
        val2=y;
    }
    void showData()
    {
        cout<<"x= "<<val1;
        cout<<" y= "<<val2;
    }

    Datatype1 operator--()
    {
        Datatype1 D;
        val1=val1-1;
        val2=val2-1;
        D.val1=val1;
        D.val2=val2;
        return D;
    }
    friend Datatype1 operator++(Datatype1&);
    friend Datatype1 operator--(Datatype1&);
    friend Datatype1 operator++(Datatype1&,int=0);
    friend Datatype1 operator--(Datatype1&,int=0);
};
Datatype1 operator++(Datatype1 &D)
    {
        D.val1=D.val1+1;
        D.val2=D.val2+1;
        return D;
    }
Datatype1 operator--(Datatype1 &D)
{
        D.val1=D.val1-1;
        D.val2=D.val2-1;
        return D;
}
Datatype1 operator++(Datatype1 &D,int x)
    {
        Datatype1 D1;
        D1.val1=D.val1;
        D1.val2=D.val2;
        D.val1=D.val1+1;
        D.val2=D.val2+1;
        return D1;
    }
Datatype1 operator--(Datatype1 &D,int x)
    {
        Datatype1 D1;
        D1.val1=D.val1;
        D1.val2=D.val2;
        D.val1=D.val1-1;
        D.val2=D.val2-1;
        return D1;
    }
int main()
{
    Datatype1 D1(1,2),D2,D3(4,5),D4;
    D1.showData();
    D2=++D1;
    cout<<endl;
    D2.showData();
    cout<<endl;
    D1.showData();
    cout<<endl;
    D4=D3++;
    D4.showData();
    cout<<endl;
    D3.showData();
    return 0;
}
