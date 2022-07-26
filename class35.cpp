//pointers in heap allocation and arthmetic
#include <iostream>
using namespace std;
int main(){
int a[5]={1,213,21,4,63};
int *p =a; int *q=&a[4];

cout<<*p <<endl;
p++;
cout<<*p<<endl;
p--;
cout<<*p;
cout  <<endl;
p=p+3;
cout<<*p;
cout<<endl;
p=p-2;
cout<<*p;
cout  <<endl;

cout<<p-q<<endl;
cout<<q-p<<endl;
delete p;
p=nullptr;
cout<<*p;
return 0;
}
