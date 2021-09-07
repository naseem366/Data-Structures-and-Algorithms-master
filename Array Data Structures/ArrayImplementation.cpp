#include<iostream>
using namespace std;
int arr[10];

void insertIntoElement(int arr[],int n,int pos,int val){

    for(int i=n-1;i<pos-1;i--){
        arr[i+1]=arr[i];

    }
    arr[pos-1]=val;
    cout<<"Element Inserted successfully"<<endl;


}void deleteElement(int arr[],int n,int pos){
int val=arr[pos-1];

    for(int i=pos-1;i<n-2;i++){
        arr[i]=arr[i+1];

    }

    cout<<"Element" <<val<< " Deleted successfully"<<endl;


}
void Transverse(int n){

for(int i=0;i<n-1;i++){
    cout<<arr[i]<<"   ";
}


}
int main(){
int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Initialize Array By 5 custom Integer Elements:"<<endl;
    for(int i=0;i<5
    ;i++){
        cin>>arr[i];
    }
    int ch;
    do{

    cout<<"\n\nEnter The Task You want To perform on the Array:\n\n 1.Insertion\n 2.Delation\n 3.Transverse\n 4.Exit()"<<endl;
    cin>>ch;

    switch(ch){
        case 1: int val,pos;
                cout<<"Enter The Element Position You want To insert: "<<endl;
                cin>>pos;
                cout<<"Enter The Element You want To insert: "<<endl;
                cin>>val;
                insertIntoElement(arr,n,pos,val);
                break;
        case 2: int t;
                cout<<"Enter The Position From where You want to delete the element:";
                cin>>t;
                deleteElement(arr,n,t);
                break;
        case 3:

        Transverse(n);
        break;
        default:
            cout<<"Please Kindly Choose any Proper Choice from Given menu"<<endl;





    }
    }while(ch!=4);



return 0;
}
