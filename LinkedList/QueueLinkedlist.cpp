#include<iostream>
#include<stdlib.h>
using namespace std;


struct Node
{
    int info;
    struct Node *next;


}*front1;
void traverse()
{

    struct Node *ptr;
    if(front1==NULL)
    {

        cout<<"List is Empty:"<<endl;
        return;
    }
    cout<<"Linked List Element Are:"<<endl;
    for(ptr=front1; ptr!=NULL; ptr=ptr->next)
        cout<<ptr->info<<"-->";
}


void push(){
struct Node * newnode,*rear;
newnode=(struct Node*)malloc(sizeof(struct Node));
if(newnode==NULL){
 cout<<"Memory is Full"<<endl;
 return;
}

int val;
cout<<"Enter the Value you want to append into queue:";
cin>>val;
newnode->info=val;
newnode->next=NULL;
if(front1==NULL){
    front1=rear;
    front1=newnode;
}else{

rear->next=newnode;
rear=newnode;
}

}


int main()
{
    int ch;

    do
    {
        cout<<"\n1.Push\n2.Pop\n3.display\n4.exit\n"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            push();
            break;


        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default :
            printf("Enter a valid choise:");

        }
    }
    while(ch!=4);


    return 0;
}

