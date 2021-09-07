#include<iostream>
#include<stdlib.h>
using namespace std;


struct Node
{
    int info;
    struct Node *next;


}*start;

void createList()
{
    struct Node *newnode,*curr;
    int item;
    int n;
    cout<<"Enter the Size Of list you want to initialize:"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {

        newnode=(struct Node*)malloc(sizeof(struct Node));
        cout<<"Enter the"<< i+1<<"th element of list"<<endl;
        cin>>item;
        newnode->info=item;
        newnode->next=NULL;
        if(start == NULL)
            start=newnode;
        else
            curr->next=newnode;
        curr=newnode;
    }
}
void traverse()
{

    struct Node *ptr;
    if(start==NULL)
    {

        cout<<"List is Empty:"<<endl;
        return;
    }
    cout<<"Linked List Element Are:"<<endl;
    for(ptr=start; ptr!=NULL; ptr=ptr->next)
        cout<<ptr->info<<"-->";
}

void insertAtBeginning()
{
    struct Node *newnode;
    int item;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        cout<<"Memory Is not Available:"<<endl;
        exit(0);
    }
    cout<<"Enter The Element For inserting at begining";
    cin>>item;

    newnode->info=item;
    if(start!=NULL)
        newnode->next=start;
    start=newnode;

    cout<<"Successfully Node inserted at the Beginnig:"<<endl;


}
void insertAtEnd()
{
    struct Node *newnode,*ptr;
    int item;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        cout<<"Memory Is not Available:"<<endl;
        exit(0);
    }

    cout<<"Enter The Element For inserting at begining";
    cin>>item;
    ptr=start;
    while(start->next!=NULL)
        start=start->next;


    newnode->info=item;
    newnode->next=NULL;
    start->next=newnode;
    start=ptr;


    cout<<"Successfully Node inserted at the Beginnig:"<<endl;


}
void insertAfterGivenElement()
{
    struct Node *newnode,*curr,*prev;
    int item,newdata;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL)
    {
        cout<<"Memory Is not Available:"<<endl;
        exit(0);
    }

    cout<<"Enter The Element After which you wanat to intert new node";
    cin>>newdata;
    cout<<"Enter The Element For inserting at begining";
    cin>>item;
    curr=start;
    while(curr=NULL&&curr->info!=newdata)
    {
        prev=curr;
        curr=curr->next;

    }
    if(curr==NULL)
        cout<<"Sorry, Element Not found inside the list"<<endl;
    else
    {

        newnode->info=item;
        newnode->next=curr->next;
        curr=newnode;


    }




    cout<<"Successfully Node inserted at the Beginnig:"<<endl;


}
void deletionAtBegnning()
{
    struct Node * curr;
    if(start==NULL)
    {
        printf("List is Empty");
        return;
    }
    curr=start;
    start=curr->next;
    free(curr);





}
void deletionAtEnd()
{
    struct Node * curr,*prev;
    if(start==NULL)
    {
        printf("List is Empty");
        return;
    }

    curr=start;
    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;

    }

    prev->next=NULL;
    free(curr);





}
void deletionAfterANode()
{
    struct Node * curr,*prev;
    if(start==NULL)
    {
        printf("List is Empty");
        return;
    }
    int val;
    cout<<"Please Insert the node info after which you want to perform the Deletation:";
    cin>>val;

    curr=start;
    while(curr->info!=val&&curr!=NULL)
    {
        prev=curr;
        curr=curr->next;

    }
    prev=curr;
    curr=curr->next;
    if(curr==NULL)
    {
        cout<<"OH Value is Not in LIst try with a suitable and valid value:"<<endl;
    }
    prev->next=curr->next;
    free(curr);





}
void deletionBeforeANode()
{
    struct Node * curr,*prev,*ptr;
    if(start==NULL)
    {
        printf("List is Empty");
        return;
    }
    int val;
    cout<<"Please Insert the node info after which you want to perform the Deletation:";
    cin>>val;


    curr=start;
    while(curr->next->info!=val&&curr->next->next!=NULL)
    {
        prev=curr;
        ptr=curr->next;

        curr=curr->next->next;

    }
    if(curr==NULL)
    {
        cout<<"Oh Value is Not in LIst try with a suitable and valid value:"<<endl;
    }
    prev->next=curr;

    free(ptr);





}






int main()
{
    int ch;
    int value;
    createList();
    do
    {
        cout<<"\n1.Insertion at Beginning\n2.Insertion at End\n3.insertion before a certain node\n4.Insertion after a cetain node"<<endl;
        cout<<"\n5.Deletion at begning\n6.Deletion at End\n7.Deletion after a certain node\n8.deletion befer a certain node\n9.transverse\n10.exit\n"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            insertAtBeginning();
            break;
        case 2:
            insertAtEnd();
            break;

        case 3:
            insertAfterGivenElement();
            break;

        case 5:
            deletionAtBegnning();
            break;
        case 6:
            deletionAtEnd();
            break;
        case 7:
            deletionAfterANode();
            break;
        case 8:
            deletionBeforeANode();
            break;

        case 9:
            traverse();
            break;
        case 10:
            exit(0);
        default :
            printf("Enter a valid choise:");

        }
    }
    while(ch!=10);


    return 0;
}
