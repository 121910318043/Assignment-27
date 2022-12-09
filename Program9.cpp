/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/



#include<iostream>
#include<string.h>
using namespace std;
class MyString{
private:
    char str[100];
public:
    MyString(char st[]){strcpy(str,st);}
    MyString(){}
    MyString operator!()
    {
        MyString S;
        int i;
        for(i=0;str[i];i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                S.str[i] = str[i] - 32;
            }
            if(str[i]>='A' && str[i]<='Z')
            {
                S.str[i] = str[i] + 32;
            }
        }
        return S;
    }
    friend ostream& operator<<(ostream&,MyString&);
};
ostream& operator<<(ostream &OS,MyString &S1)
{
    int i;
    OS<<S1.str;
    return OS;
}
int main()
{
    MyString S1("sUrAj");
    S1 = !S1;
    cout<<S1;
}
