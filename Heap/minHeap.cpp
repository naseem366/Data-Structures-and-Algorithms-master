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

   int parent(int i) { return (i-1)/2; }


    int left(int i){
        return( 2*i+1);
    }
    int right(int i){
        return( 2*i+2);
    }

    int extractMin();

    int getMin(){
        return harr[0];
    }
    void insert(int k);
    void deleteKey(int i);
    void decreseKey(int i, int val);
};
MinHeap::MinHeap(int cap){
    heap_size=0;
    capacity=cap;
    harr=new int [cap];
}
void MinHeap::insert(int k)
{
    if (heap_size == capacity)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }

    // First insert the new key at the end
    heap_size++;
    int i = heap_size - 1;
    harr[i] = k;

    // Fix the min heap property if it is violated
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(&harr[i], &harr[parent(i)]);
       i = parent(i);
    }
}
void MinHeap::decreseKey(int i,int val){
harr[i]=val;
while(i!=0 &&harr[parent(i)]>harr[i]){
    swap(&harr[i],&harr[parent(i)]);
    i=parent(i);

}

}

int MinHeap:: extractMin()
{


        if(heap_size<=0)
            return INT_MAX;
    if(heap_size==1){
        heap_size--;
        return harr[0];
    }

    int root = harr[0];
    harr[0]=harr[heap_size-1];
    heap_size--;
    MinHeapify(0);
    return root;
}

void MinHeap::deleteKey(int i){
    decreseKey(i,INT_MIN);
    extractMin();
}
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
int main()
{
    MinHeap h(11);
    h.insert(3);
    h.insert(2);
    h.deleteKey(1);
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decreseKey(2, 1);
    cout << h.getMin();
    return 0;
}


