#include <iostream>
using namespace std;
int main(){
int *a= new int [5];

a[0]=19;
a[1]=20;
cout<<a[1] <<endl;

delete []a;
a=new int[20];
a[0]=64;
cout<<a[0];
delete a;
a=nullptr;
cout<<a[0]  <<endl;
return 0;
}