#include<iostream>
using namespace std;
void swap(int *a, int *b);

void bubbleSort(int arr[],int n){
for(int i=0;i<n;i++){
        //cout<<"Pass: "<<i<<endl; Enable this Comment if you want to find the number of passes
    for(int j=i;j<n-i-1;j++){
        //cout<<arr[j]<<" "<<arr[j+1]<<endl; THis is an obious case whare we used the conditon n-i+1 ?? simple resion is that we just wana compare with the remaining value excluding taken key
        if(arr[j]>arr[j+1]){
            cout<<"HEy WE ARe passed the condition"<<endl;
                swap(&arr[j],&arr[j+1]);

        }

    }


}




}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
     *b=temp;

}




int main(){
        int arr[]={9,2,3,4,5,6};
        int n=6;
        bubbleSort(arr,n);
        for(int i=0;i<6;i++){
            cout<<arr[i]<<endl;
        }
        return 0;









}
