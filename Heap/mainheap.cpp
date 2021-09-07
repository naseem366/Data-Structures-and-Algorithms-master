#include<iostream>
#include<vector>
using namespace std;

void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;

}
void heapify(vector<int>&a,int i){
    int n=a.size();
    int smallest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l] < a[i])
        smallest=l;
    if(r<n && a[r] < a[smallest])
        smallest=r;
    if(smallest!=i){
        swap(&a[i],&a[smallest]);
        heapify(a,smallest);
    }
}


void insertNode(vector<int>&a,int val){
    int n=a.size();
    if(n==0){
        a.push_back(val);

    }

    else{
            a.push_back(val);
            for(int i=n/2 -1;i>=0;i--){
                heapify(a,i);
            }

    }




}
void deleteNode(vector<int>&a,int num){
    int n=a.size();
    int i=0;

    for( i=0;i<n;i++){
        if(num==a[i])
            break;

    }
    swap(&a[i],&a[n-1]);
    a.pop_back();
    for(int i=n/2 -1;i>=0;i--){
        heapify(a,i);
    }
}


void printArray(vector<int> &a)
{
  for (int i = 0; i < a.size(); ++i)
    cout << a[i] << " ";
  cout << "\n";
}

int main()
{
  vector<int> heapTree;

  insertNode(heapTree, 3);
  insertNode(heapTree, 4);
  insertNode(heapTree, 9);
  insertNode(heapTree, 5);
  insertNode(heapTree, 2);

  cout << "Max-Heap array: ";
  printArray(heapTree);

  deleteNode(heapTree, 4);

  cout << "After deleting an element: ";

  printArray(heapTree);
}
