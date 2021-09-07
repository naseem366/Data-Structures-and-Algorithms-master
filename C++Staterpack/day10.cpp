#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int count=0,temp=0,val=0;
    cin >> n;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1;n>0;i++){
        if(n%2==1){
            count++;


            if(count>temp)
                temp=count;

        }
        else{
            count=0;

             if(temp>val){
                      val=temp;

             }


        }
         n=n/2;

        }




    cout<<val<<endl;

    return 0;
}

