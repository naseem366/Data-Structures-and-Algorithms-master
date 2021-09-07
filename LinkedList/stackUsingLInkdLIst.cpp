#include<iostream>
#include<stdlib.h>
using namespace std;


struct Node
{
    int info;
    struct Node *next;


}*top;
void traverse()
{

    struct Node *ptr;
    if(top==NULL)
    {

        cout<<"List is Empty:"<<endl;
        return;
    }
    cout<<"Linked List Element Are:"<<endl;
    for(ptr=top; ptr!=NULL; ptr=ptr->next)
        cout<<ptr->info<<"-->";
}


void push(){
struct Node *newnode;
int val;
newnode=(struct Node*)malloc(sizeof(struct Node));
if(newnode==NULL){
    cout<<"OverFlow Or Memory Not available:"<<endl;
}
cout<<"Please Enter the Element:";
cin>>val;
newnode->info=val;
newnode->next=top;
top=newnode;

}
void pop(){
    struct Node *ptr;
    if(top==NULL)
        cout<<"OH NO UNderflow COdintion:"<<endl;
    int item=top->info;
    ptr=top;
    top=top->next;
    free(ptr);
    cout<<"ITem "<<item<<"Sucessfully Deleted from the List"<<endl;

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
            pop();
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
