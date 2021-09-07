#include <bits/stdc++.h>
using namespace std;


void spiralPrint(int m, int n){
    int a[m][n];
    int R=n;
    int C=m;
int i,k=0,l=0;
int cont=1;
while(k<m&&l<n){
    for( i=l;i<n;++i){
        a[k][i]=cont;
        cont++;
    }
    k++;
    for( i=k;i<m;i++){
        a[i][n-1]=cont;
        cont++;
    }
    n--;
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
               a[m - 1][i] = cont;
        cont++;
            }
            m--;
        }
    if(l<n){
        for(i=m-1;i>=k;--i){
            a[i][l]=cont;
        cont++;
        }
        l++;
    }

}

    for(int i=0;i<R;i++){
    for(int j=0;j<C;j++)
        cout<<a[i][j]<<" ";
    cout<<endl;

    }


}



int main()
{


    spiralPrint(7, 7);
    return 0;
}
