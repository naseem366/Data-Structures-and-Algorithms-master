#include<iostream>
#include<vector>
using namespace std;

vector<int> sieve(int A) {

    vector<int>sieve(A+1);

    int value = 0;
    fill(sieve.begin(),sieve.end(), value);
    sieve[0]=1;
    sieve[1]=1;
    vector<int>vect;

    for(int i=2;i<=A;i++){

        if(sieve[i]==0){
            for(int j=2*i;j<=A;j+=i){
                sieve[j]=1;
            }
        }
    }


    for(int i=2;i<=A;i++){

        if(sieve[i]==0)
            vect.push_back(i);

    }
    return vect;

}
int main()
{

    int val = 10;


    vector<int> vect=sieve(val);
    for(int i=0;i<vect.size();i++)
        cout<<vect[i];

    return 0;
}
