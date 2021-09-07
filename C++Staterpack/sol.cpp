#include<iostream>
using namespace std;

void mlt(int a,int b,int n){
int mul[n][n];


for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
          mul[i][j]=0;
        for(int k=1;k<=n;k++)
             mul[i][j] +=a[i][k]*b[k][j];







}
}

}
int main(){

int n;
cout<<"Enter The Dimation of Matrinx(m*n): ";
cin>>n;
int a[n][n];
int b[n][n];

for(int i=1;i<=n;i++){
    for(int j;j<=n;j++)
        cout<<"Enter The The Element Present At Of Matrix A "<<i<<" Index :";
        cin>>a[i][j];
}
for(int i=1;i<=n;i++){
    for(int j;j<=n;j++)
        cout<<"Enter The The Element Present At Of Matrix B "<<i<<" Index :";
        cin>>b[i][j];

}
mlt(a,b,n);




return 0;

}
