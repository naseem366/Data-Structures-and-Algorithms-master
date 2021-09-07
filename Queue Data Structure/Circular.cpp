#include<iostream>
#define MAX 5
using namespace std;
class CircularQueue{
private:
    int front;
    int a[MAX];
    int rear;
    int itemCount;
public:
    CircularQueue(){
    itemCount=0;
    front=-1;
    rear=-1;
    for(int i=0;i<4;i++)
        a[i]=0;

    }
 bool IsEmpty(){
        if(front==-1&&rear==-1)
                return true;
        else
            return false;


    }


       bool IsFull(){
        if((rear+1)%MAX==front)
            return true;
       else

        return false;

    }
void enqueue( int val){



if(IsFull()){
        cout<<"Cannot Enter the values: The Queue Is Full"<<endl;
       return;
}



          else if(IsEmpty()){


            front=0;
            rear=0;


            a[rear]=val;

          }
        else{


             rear=(rear+1)% MAX;
                a[rear]=val;

        }
        itemCount++;

    }
            int dequeue(){
                int val=0;
                if(IsEmpty()){
                        cout<<"Item Cannot delete due to queue under loading"<<endl;
                        return val;

                }



                else if(front==rear){
                    val=a[front];
                    a[front]=0;
                    front=-1;
                    rear=-1;
                    itemCount--;
                    return val;
                }
                else{
                        cout<<"front value"<<front<<endl;
                    val=a[front];
                    a[front]=0;
                    front=(front +1)%MAX;
                itemCount--;
                    return val;
                }
            }
          int  itemcout(){
            return (itemCount);
            }
            void display(){

                cout<<"The Items Present In Queue Are: "<<endl;
                for(int i=0;i<MAX;i++){
                    cout<<a[i]<<" ";
                }


            }









};
int main(){
CircularQueue qc;
int ch;
int val;
do{
    cout<<"-----Enter The Appropriate Operation Of Queue You Want To Perform(Select Any One and 0 for Exit) ------"<<endl;
    cout<<"1.Enqueue()"<<endl;
    cout<<"2.Dequeue()"<<endl;
    cout<<"3.IsEmpty()"<<endl;
    cout<<"4.IsFull()"<<endl;
    cout<<"5.Display()"<<endl;
    cout<<"6.Clear Screen()"<<endl;
    cout<<"7.ItemCount()"<<endl;
    cin>>ch;
    switch(ch){
        case 1:

                int val;
                cout<<"\nEnter The value Which You want to insert: ";
                cin>>val;
                 qc.enqueue(val);
                break;
        case 2: qc.dequeue();
        break;
        case 3: if(qc.IsEmpty())
                       cout<<"Queue is totally Empty"<<endl;
                else
                       cout<<"Queue is Not Empty"<<endl;
                break;
        case 4: if(qc.IsFull())
                       cout<<"Queue is full"<<endl;
                else
                       cout<<"Queue is Not Full"<<endl;
                       break;
        case 5 : qc.display();
                        break;
        case 6 : system("CLR");
        break;
         case 7 : qc.itemcout();
        break;
        default :
            cout<<"Please Enter an Valid Operation From the GIven menue"<<endl;


    }

}while(ch!=0);


return 0;
}
