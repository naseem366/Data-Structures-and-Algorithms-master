/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<unordered_map>
using namespace std;


    int findMaxLength(int nums[],int n) {
        unordered_map<int, int>m;
        int count=0;
        int maxlength=0;

        for(int i=0;i<n;i++){
            count+=(nums[i]==0?-1:1);
            if(count==1){
                maxlength=i+1;
            }
          else if(m.find(count)==m.end()){
              m[count]=i;

        }

          if(m.find(count-1)!=m.end()){
            maxlength=max(maxlength,i-m[count-1]);

        }


        }
        return maxlength;

    }
int main(){
    int a[]={ 1, 0, 0, 1, 0};

cout<<findMaxLength(a,4)<<endl;
return 0;
}
