#include<iostream>
#define MAX 5
using namespace std;
class Queue{
private:
    int front;
    int rear;
    int a[MAX];
public:
    Queue(){
     front=-1;
     rear=-1;

    }

    bool IsEmpty(){
        if(front==-1&&rear==-1)
                return true;
        else
            return false;


    }
      bool IsFull(){
        if(rear==MAX-1)
                return  true;
        else
            return false;


    }
    void enqueue(){
        int val;


            if(IsFull())
               cout<<"Cannot Enter the values: The Queue Is Empty"<<endl;

          else if(IsEmpty()){
            cout<<"Enter the item You want to enqueue "<<endl;
            cin>>val;

            front=0;
            rear=0;


            a[rear]=val;

          }
        else{
             cout<<"Enter the item You want to enqueue "<<endl;
            cin>>val;

                rear++;
                a[rear]=val;

        }

    }
    int dequeue(){
        int val;
        if(IsEmpty())
            return -1;
            else if(front==rear){
                    val=a[front];

                    front=-1;
                    rear=-1;
                    return val;

            }
        else{

                val=a[front];

                front++;
                return val;


        }
        return 0;

    }
    void display(){
        cout<<"The Total items in queue"<<endl;
        for(int i=front;i<=rear;i++){
            cout<<" "<<a[i];
        }

    }





};
int main(){
    Queue q1;
    int ch;
    int val;

        do{
        cout<<"\nWhat Operation You want to Perform ? select 0 for exit of the programme?"<<endl;
        cout<<"1.enqueue()"<<endl;
        cout<<"2.dequeue()"<<endl;
        cout<<"3.display()"<<endl;
        cout<<"4.IsEmpty()"<<endl;
        cout<<"5.IsFull()"<<endl;
        cout<<"6.Clear()"<<endl;
        cin>>ch;
           switch(ch){
        case 1:

            q1.enqueue();
            break;
            case 2:
            cout<<"The Popped item is "<<q1.dequeue()<<endl;

            break;
            case 3:
                q1.display();
                break;


            case 4:
                if(q1.IsEmpty()){
                        cout<<"The queue is empty"<<endl;
                }
                else

                    cout<<"The queue is Not empty"<<endl;

                    break;
             case 5:
                if(q1.IsFull()){
                        cout<<"The queue is Full"<<endl;
                }
                else{
                        cout<<"The queue is Not Full"<<endl;

                }



                    break;


            case 6:
                system("CLS");
                break;
            default:
                cout<<"Please Make Sure you have choosen a wirte option"<<endl;


    }

    }while(ch!=0);
    return 0;

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            ;

