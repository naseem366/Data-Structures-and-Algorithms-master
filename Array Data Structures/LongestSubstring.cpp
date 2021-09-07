#include<iostream>
#include<String>
using namespace std;

    int lengthOfLongestSubstring(string s) {

        int max1=0;
        int j=0;

        for(int i=j;i<s.size();i++){
            string ans="";

            while(i<s.size()){
                     cout<<"Ye alag hai "<<i<<j<<endl;
                ans.push_back(s[i]);


                if(ans.find(s[i])){
                        cout<<"value of condition"<<endl;



                    j=i;
                    if(max1<ans.size()){
                        max1=ans.size();
                    }
                    break;

                }

            i++;
            }
            }

          return max1;

        }

int main(){

cout<<lengthOfLongestSubstring("abcabcbb")<<endl;
return 0;

}
