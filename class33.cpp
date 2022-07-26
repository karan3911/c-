#include <iostream>
using namespace std;
int main(){
int a[5]={2,3,4,34,44}; //it will create in stack
int *p; //this is also in stack
p=new int [5];  //this will allocate memory in heap;
// simply we can assign value to int heap like;
p[2]=15;

delete[]p; //mst delte cause it won't vanish automatically;

// null this can describe as the pointer is not showng to address only but  memory is still there
// this will crete memory leak memory
// also if pointer is not pointing anywhere is called NULL ointer

cout  <<endl;
return 0;
}