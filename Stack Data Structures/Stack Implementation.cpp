#include<iostream>
#include <stdlib.h>
using namespace std;
class Stack{
private:
    int top;
    int arr[10];
public:
    Stack(){
        top=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }


    }
    bool IsFull(){
        if(top==4)
            return true;
        else
            return false;
    }
    bool IsEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    void push(int val){
        if(IsFull())
            cout<<"StackOverFlow";
        else{
                top++;
                arr[top]=val;
        }
    }
          int  pop(){
        if(IsEmpty())
            cout<<"StackUnderFlow";
        else{
                int temp=arr[top];
                arr[top]=0;

                top--;
                return temp;
        }
          }
          int peek(int pos){
              if(IsEmpty()){
                    cout<<"Stack underflow"<<endl;
              }
              else{
                 return arr[pos];
              }


    }
    int count(){
        top=top+1;
        return top;
    }
    void Change(int pos,int val){
        arr[pos]=val;
        cout<<"Changed Value At Postion"<<pos<<endl;

    }
    void Display(){
    cout<<"All Items in the stack:"<<endl;
    for(int i=4;i>=0;i--)
    {

        cout<<arr[i]<<endl;
    }
    }

};
int main(){
    Stack s1;
    int ch;
    int val;
    int pos;

    do{
        cout<<"What Operation You want to Perform ? select 0 for exit of the programme?"<<endl;
        cout<<"1.Push()"<<endl;
        cout<<"2.Pop()"<<endl;
        cout<<"3.Peek()"<<endl;
        cout<<"4.IsEmpty()"<<endl;
        cout<<"5.IsFull()"<<endl;
        cout<<"6.Count()"<<endl;
        cout<<"7.Display()"<<endl;
        cout<<"8,Change()"<<endl;
        cout<<"9,Clear()"<<endl;
        cin>>ch;
           switch(ch){
        case 1:
            cout<<"Enter the item You want to insert"<<endl;
            cin>>val;
            s1.push(val);
            break;
            case 2:
            cout<<"The Popped item is "<<s1.pop()<<endl;

            break;
            case 3:

            cout<<"Enter the The Position you what to access item from"<<endl;
            cin>>pos;
            s1.peek(pos);


            break;

            case 4:
                if(s1.IsEmpty()){
                        cout<<"The stack is empty"<<endl;
                }
                else

                    cout<<"The stack is Not empty"<<endl;

                    break;
             case 5:
                if(s1.IsFull()){
                        cout<<"The stack is Full"<<endl;
                }
                else

                    cout<<"The stack is Not Full"<<endl;

                    break;
             case 6:
                cout<<"The totle item items in stack is"<<s1.count()<<endl;
                 break;
             case 7:
                s1.Display();
                break;
             case 8:
                cout<<"Enter the The position and item respectivily which you want to insert: "<<endl;
                cin>>pos>>val;
                s1.Change(pos,val);
                break;
            case 9:
                system("CLS");
                break;
            default:
                cout<<"Please Make Sure you have choosen a wirte option"<<endl;


    }

    }while(ch!=0);


return 0;
}


