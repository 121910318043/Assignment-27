#include<iostream>
using namespace std;
class Numbers{
private:
    int x,y,z;
public:
    Numbers(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    Numbers(){}
    Numbers operator-()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
    void ShowNum()
    {
        cout<<"X: "<<x<<"\nY: "<<y<<"\nZ: "<<z;
    }
};
int main()
{
    Numbers N1,N2(2,3,4);
    N1 = -N2;
    N1.ShowNum();
    return 0;
}
