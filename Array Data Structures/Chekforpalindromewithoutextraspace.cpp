
#include<iostream>
#include<bits/stdc++.h>

using namespace std;





int firstChar(string str,int start,int last){
  int n=str.size();

  int  ans=-1;
  for(int i=start;i<=last;i++){
    if(str[i]>='a' && str[i]<='z'){
         return i;

    }

  }


}
int lastChar(string str,int start,int last){


  int  ans=-1;
  for(int i=last;i>=start;i--){
    if(str[i]>='a' && str[i]<='z'){
        return i;

    }


  }


}

int checkPalindrome(string str){
int last=str.size()-1;
int start=0;
int firstcharval,lastcharval;
for(int i=0;i<=last;i++){
    firstcharval=firstChar(str,start,last);
    lastcharval=lastChar(str,start,last);

    if(firstcharval<0||lastcharval<0){
            break;
    }
    else if(str[firstcharval]==str[lastcharval]){
        firstcharval++;
        lastcharval--;
    }
    else{
        cout<<"NO:"<<endl;
        return 0;
        break;
    }

}


cout<<"YES:"<<endl;

}



int main(){
    checkPalindrome("m     a  343 la y a l a");
    checkPalindrome("malayalam");






}
