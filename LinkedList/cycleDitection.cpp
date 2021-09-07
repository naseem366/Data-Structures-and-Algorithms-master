#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

};

void removeLoop(struct Node* loopNode,struct Node* head)
{
    struct Node* ptr1;
    struct Node* ptr2;

    ptr1=head;

    while(1)
    {



        ptr2=loopNode;
        while(ptr2->next != loopNode && ptr2->next !=ptr1)
            ptr2=ptr2->next;

        if(ptr2->next==ptr1)
            break;
        ptr1=ptr1->next;
    }
    ptr2->next=NULL;
}



int detectAndRemoveLoop(struct Node* list)
{
    struct Node *slow=list,*fast=list;
    while(slow&&fast&&fast->next)
    {


        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            removeLoop(slow,list);
            return 1;
        }
    }
    return 0;





}

void printList(struct Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node=node->next;
    }





}

struct Node * newNode(int key){
    struct Node* temp=new Node();
    temp->data=key;
    temp->next=NULL;
    return temp;



};
int main()
{
    struct Node* head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);


    cout << "Linked List ::" << endl;

    printList(head);
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next->next;

    detectAndRemoveLoop(head);

    cout << "Linked List after removing loop::" << endl;

    printList(head);

    return 0;
}





