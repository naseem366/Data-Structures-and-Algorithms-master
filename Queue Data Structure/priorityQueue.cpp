#include<iostream>
#include<vector>
using namespace std;
 void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void heapify(vector<int>&arr,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    int n=arr.size();

    if(l<n && arr[l]>arr[largest])
        largest=l;
    if(r<n && arr[r]<arr[largest])
        largest=r;
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,largest);
    }

}


void deleteNode(vector<int>&arr,int val){
    int n=arr.size();
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==val) break;
    }
    swap(&arr[i],&arr[n-1]);
    arr.pop_back();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i);
    }



}
void insetNode(vector<int>&arr,int val){
    int n=arr.size();
    if(n==0) arr.push_back(val);
    else{


        arr.push_back(val);
        for(int i=n/2-1;i>=0;i--)
            heapify(arr,i);
      }

}
void printArray(vector<int>&arr){

    for(int i=0;i<arr.size();i++){

           cout<<arr[i]<<" ";
    }

    cout<<endl;


}



int main(){
    int n;

    vector<int>vect;



        vect.push_back(1);
        vect.push_back(2);
        vect.push_back(3);
        vect.push_back(4);
        vect.push_back(5);
        vect.push_back(6);
        vect.push_back(7);

    cout<<"Values In array"<<endl;
    printArray(vect);

    insetNode(vect,55);
      cout<<"Values In array"<<endl;
    printArray(vect);
    deleteNode(vect,3);
      cout<<"Values In array"<<endl;
    printArray(vect);






return 0;
}
