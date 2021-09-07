#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void plindromeString(string str){
int    val=str.size()-1;
  int  ans=0;

    while(ans<val){

        if(str[ans++]!=str[val--])
            cout<<"Not A palindrome String"<<endl;



    }
    cout<<"String is palindrome"<<endl;








}




int main(){
    plindromeString("akashhsaka");






}

