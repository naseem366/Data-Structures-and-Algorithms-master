#include<iostream>
using namespace std;

void MatrixAdd(int n1,int n2,int p1,int p2){
    int a[n1][n2];
    int b[p1][p2];
    int res[n1][p2];
    int mult=0;

    if(n2==p1){
          for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cout<<"Enter The Element of Matrix a["<<i<<"]"<<"["<<j<<"]"<<". Here : ";

        cin>>a[i][j];

  } }
   for(int i=0;i<p1;i++){
    for(int j=0;j<p2;j++){
        cout<<"Enter The Element Of matrix b["<<i<<"]"<<"["<<j<<"]"<<". Here : ";

        cin>>b[i][j];

  }
  }

 for(int i=0;i<n1;i++){
    for(int k=0;k<p1;k++){
        for(int j=0;j<p2;j++){



   res[i][j]+=a[i][k]*b[k][j];

    }
  }
  }


 for(int i=0;i<n1;i++){
      cout<<" | ";
    for(int j=0;j<p2;j++){
    cout<<res[i][j]<<" ";

  }
    cout<<" | ";
  cout<<endl;






}
    }
else{

cout<<"We cannnot multiply the matrix enter by you matrix follow a simple rule that In addition to multiplying a matrix by a scalar, we can multiply two matrices. Finding the product of two matrices is only possible when the inner dimensions are the same, meaning that the number of columns of the first matrix is equal to the number of rows of the second matrix. If \displaystyle AA is an \displaystyle \text{ }m\text{ }\times \text{ }r\text{ } m × r  matrix and \displaystyle BB is an \displaystyle \text{ }r\text{ }\times \text{ }n\text{ } r × n  matrix, then the product matrix \displaystyle ABAB is an \displaystyle \text{ }m\text{ }\times \text{ }n\text{ } m × n  matrix. For example, the product \displaystyle ABAB is possible because the number of columns in \displaystyle AA is the same as the number of rows in \displaystyle BB. If the inner dimensions do not match, the product is not defined.";
}


    }




int main(){
  int n1,p1;  int n2,p2;
      cout<<"Enter the Size of 1st aray: ";
    cin>>n1;
    cin>>n2;
      cout<<"Enter the Size of 2nd aray: ";
    cin>>p1;
    cin>>p2;



 MatrixAdd(n1,n2,p1,p2);




return 0;

  }

