#include<iostream>
using namespace std;

void mergefuc(int a[],int beg,int mid,int last){

    int k,i=beg;
    int j=mid+1;
    int temp[18];
    int index=beg;
    while(i<=mid && j<=last){

        if(a[i]<a[j]){
            temp[index]=a[i];

            i++;
        }else{
            temp[index]=a[j];
            j++;



        }

        index++;
    }
    if(i>mid){


        while(j<=last){
            temp[index]=a[j];
            j++;
            index++;



        }
    }else{
        while(i<=mid){
            temp[index]=a[i];
            i++;
            index++;



        }




    }

k=0;
cout<<"value of index"<<index<<endl;
 while(k<index){
cout<<"This SI just a check: "<<k<<"-->>"<<temp[k]<<endl;;

        a[k]=temp[k];
        k=k+1;
    }




}

void merge_sort(int a[],int beg,int last){

    if(beg<last){


    int mid=(beg+last)/2;
    merge_sort(a,beg,mid);
    merge_sort(a,mid+1,last);

    mergefuc(a,beg,mid,last);


    }





}
void printArray(int A[], int size1)
{
    for (int i = 0; i < size1; i++)
        cout << A[i] << " ";
}
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    merge_sort(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}

