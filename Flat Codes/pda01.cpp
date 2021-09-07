#include<iostream>
#include<string.h>
using namespace std;
int top;
char s[10];
class stack
{
public:
    void push(int x)
    {
        s[top++]=x;
    }
     void pop(int x)
    {
        s[top--]=x;
    }
};
int main()
{
    int i,n;
    char a[10];
    cout<<"\n Program for PDA that accepts strings of(0^n)(1^n)\n";
    cout<<"\n Enter the String \n";
    cin>>a;
    n=strlen(a);
    stack st;
    top=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0' || a[i]=='1')
        {
            if(a[i]=='0')
            {
                st.push(a[i]);

            }
           else
            {
                st.pop(a[i]);

            }

        }
        else
        {

            break;
        }
    }
    if(top==-1)
    {
        cout<<"\n The String is Accepted \n";
    }

    else
        {

         cout<<"\n The String is Rejected \n";

        }


return 0;


}
