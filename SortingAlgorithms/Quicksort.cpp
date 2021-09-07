#include<iostream>
using namespace std;



void partation(int a[],int beg,int last,int loc){
    int pivot=a[0];
    int flag=0,temp;
    loc=beg;
    int left=beg;

    int right=last;

    while(flag==0){
            while(a[loc]<=a[right] &&  loc!=right) {

                right--;
            }

            if(loc==right) {
                flag=1;
            }
            else if(a[loc]>a[right]){
                        temp=a[loc];
                        a[loc]=a[left];
                        a[left]=temp;
                        loc=right;

            }
            if(flag==0){
                while(a[loc]>=a[left] && loc!=left){
                    left++;
                }
            if(loc==left){
                flag=1;

                }
            else if(a[loc]<a[left]){
                        temp=a[loc];
                        a[loc]=a[left];
                        a[left]=temp;
                        loc=left;


        }





        }


     }






}

void Quick_sort(int a[],int beg,int last){

    if(beg<last){
        int loc=beg;
        partation(a,beg,last,loc);
        Quick_sort(a,beg,loc-1);
        Quick_sort(a,loc+1,last);
    }







}
void printArray(int A[], int size1)
{
    for (int i = 0; i < size1; i++)
        cout << A[i] << " ";
}

int main(){
    int arr[]={10,6,1,22,14,7};
    Quick_sort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;







}
