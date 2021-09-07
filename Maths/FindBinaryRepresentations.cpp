#include<iostream>
#include <string>
#include <sstream>
using namespace std;


string findDigitsInBinary(int A) {
    string str="";
    stringstream s;
    while(A!=0){
        int rem=A%2;
        if(rem==0){
            str.push_back(0);
        }else{
        s.push_back(1);
        }
        A/=2;
        cout<<rem<<endl;

    }
    return str;

}
int main(){
   cout<< findDigitsInBinary(3);




return 0;
}

