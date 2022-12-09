#include<iostream>
#include<string.h>
/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.*/
using namespace std;
class Cstring{
private:
    char str[30];
public:
    Cstring(char a[])
    {
        strcpy(str,a);
    }
    Cstring(){}
    int operator==(Cstring &ST)
    {
        int var=1;
        var = strcmp(str,ST.str);
        if(var==0)
        {
            cout<<"Strings are equal";
        }else{cout<<"Strings are not equal";}
        return var==0?1:0;
    }
    Cstring operator+(Cstring &ST)
    {
        int i;
        int len=strlen(str)>strlen(ST.str)?strlen(str):strlen(ST.str);
        Cstring S;
        for(i=0;i<=len;i++)
        {
            if(i<strlen(str))
            {
                S.str[i]=str[i];
            }
            if(i<strlen(ST.str))
            {
                S.str[strlen(str)+i]=ST.str[i];
            }
        }
        S.str[strlen(str)+strlen(ST.str)]='\0';
        return S;
    }
    friend ostream& operator<<(ostream&,Cstring&);
};
ostream& operator<<(ostream &os,Cstring &Str)
{
    os<<Str.str;
    return os;
}
int main()
{
    int a;
    Cstring S1("suraj"),S2("suraj"),S3;
    a = S1==S2;
    cout<<endl;
    cout<<a;
    S3=S1+S2;
    cout<<endl;
    cout<<S3;
}
