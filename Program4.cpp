#include<iostream>
using namespace std;
class Time{
private:
    int Hr;
    int Min;
    int sec;
    static int count1;
public:
    /*Time()
    {
       count1 = count1 + 1;
       cout<<"Enter Time "<<count1;
       cout<<endl;
       cout<<"-----------------";cout<<endl;cout<<endl;
       cout<<"Enter Hours : ";
       cin>>Hr;
       cout<<endl;
       cout<<"Enter Min : ";
       cin>>Min;cout<<endl;
       cout<<"Enter Seconds : ";
       cin>>sec;
       cout<<endl;cout<<endl;
    }*/
    void operator==(Time &T)
    {
        if(Hr==T.Hr && Min==T.Min && sec==T.sec)
        {
            cout<<"Time are equal";
        }
        else{
            cout<<"Time are not equal";
        }
    }
    friend istream& operator>>(istream&,Time&);
    friend ostream& operator<<(ostream&,Time);
};
istream& operator>>(istream &is,Time &T)
    {
        cout<<"Enter Hours : ";
       cin>>T.Hr;
       cout<<endl;
       cout<<"Enter Min : ";
       cin>>T.Min;cout<<endl;
       cout<<"Enter Seconds : ";
       cin>>T.sec;
       cout<<endl;cout<<endl;
       return is;
    }
ostream& operator<<(ostream &os,Time T)
{
    os<<"Hours : "<<T.Hr;os<<endl;
    os<<"Minutes : "<<T.Min;os<<endl;
    os<<"Seconds : "<<T.sec;os<<endl;
    return os;
}
int Time::count1=0;
int main()
{
    Time T1,T2;
    cin>>T1>>T2;
    cout<<T1<<T2;
    T1==T2;
    return 0;

}
