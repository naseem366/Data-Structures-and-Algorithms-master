#include<iostream>
#include<climits>

using namespace std;

void swap(int *a,int *b);

class MinHeap
{

    int *harr;
    int capacity;
    int heap_size;

public:
    MinHeap(int capacity);
    void MinHeapify(int);

   int parent(int i) { return i/2; }


    int left(int i){
    return 2*i;
    }    int right(int i){
    return( 2*i + 1);
    }

    int extractMin();

    int getMin(){
    return harr[1];
    }
    void insertKey(int k);
    void deleteKey(int i);
    void decreseKey(int i, int val);
};
MinHeap::MinHeap(int cap){
heap_size=1;
capacity=cap;
harr=new int [cap];
}
void MinHeap::insertKey(int k){
    if(heap_size==capacity){
        cout<<"\nOverflow:Could'nt insert the element into the heap"<<endl;
        return;

    }


    harr[heap_size]=k;
    int i=heap_size;
    while(i!=1 && harr[parent(i)]>harr[i]){
        swap(&harr[i],&harr[parent(i)]);
        i=parent(i);
    }
}
void MinHeap::decreseKey(int i,int val){
harr[i]=val;
while(i!=1 && harr[parent(i)]>harr[i]){
    swap(&harr[i],&harr[parent(i)]);
    i=parent(i);

}

}

int MinHeap:: extractMin()
{

    if(heap_size<=1)
            return INT_MAX;
    if(heap_size==2){
        heap_size--;
        return harr[1];
    }

    int root = harr[1];
    harr[1]=harr[heap_size];
    heap_size--;
    MinHeapify(1);
    return root;
}

void MinHeap::deleteKey(int i){
decreseKey(i,INT_MIN);
extractMin();}
void MinHeap::MinHeapify(int i){
int l=left(i);
int r=right(i);
int smallest=i;
if(l<heap_size && harr[l]< harr[i])
    smallest=l;
 if(r<heap_size && harr[r]<harr[smallest])
    smallest=r;
 if(smallest!=i){
    swap(&harr[i],&harr[smallest]);
    MinHeapify(smallest);
 }

}
 void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.deleteKey(1);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);

    cout<<h.extractMin()<<endl;
    cout<<h.getMin()<<endl;
    h.decreseKey(2,1);
    cout<<h.getMin();
    return 0;

}



