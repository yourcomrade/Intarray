#include <iostream>
#include "IntArray.h"
//Add new comment
using namespace std;
int main() {
    const int SIZE=10;
    IntArray table(SIZE);
    for(int i=0;i<SIZE;i++)
        table[i]=(i*2);
    for (int i = 0; i <SIZE ; i++) {
        cout<<table[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<SIZE;i++)
        table[i]=table[i]+5;
    for(int i=0;i<SIZE;i++)
        cout<<table[i]<<" ";
    cout<<"\n";
    for(int i=0;i<SIZE;i++)
        table[i]++;
    for (int S = 0; S < SIZE; ++S) {
        cout<<table[S]<<" ";
    }
    cout<<"\n";
    return 0;
}
