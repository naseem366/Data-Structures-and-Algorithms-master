/*

Given a number line from -infinity to +infinity. You start at 0 and can go either to the left or to the right. The condition is that in i’th move, you take i steps.
a) Find if you can reach a given number x
b) Find the most optimal way to reach a given number x, if we can indeed reach it. For example, 3 can be reached in 2 steps, (0, 1) (1, 3) and 4 can be reached in 3 steps (0, -1), (-1, 1) (1, 4).


*/


//Asked in Flipkart
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int steps(int source,int step,int dest){
    if(abs(source)>(dest)){
        return INT_MAX;

    }
    if(source==dest) return step;

    int pos=steps(source+step+1,step+1,dest);

    int neg=steps(source-step-1,step+1,dest);
    return min(pos,neg);




}
int main()
{
    int dest = 11;
    cout << "No. of steps required to reach "
                            << dest << " is "
                        << steps(0, 0, dest);
    return 0;
}
// In short mode
