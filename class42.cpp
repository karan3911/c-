#include <iostream>
using namespace std;
int main(){
int j[]={132,121,321,33,4};
int *p = new int [5];
p=j;
int *q= new int[10];
for(int i =0;i<11;i++){
    q[i]=p[i];
}

for(int i =0;i<10;i++){
    cout<<q[i]<<endl;
}
cout<<"=========================="<<endl;
for(int i =0;i<5;i++){
    cout<<p[i]<<endl;
}
 delete []p;
 p=nullptr;
p=q;
q=nullptr;
cout<<"=========================="<<endl;
for(int i =0;i<5;i++){
    cout<<p[i]<<endl;
}
cout<<"=========================="<<endl;
for(int i =0;i<10;i++){
    cout<<q[i]<<endl;
}
return 0;
}