#include <iostream>
using namespace std;
void table(int,int);
int main(){
    // making of recusrive function
        int b,a=1;
        cout<<"which table u want to print write number"<<endl;
        cin>>b;
        cout<<"the tabel of "<<b<< " is:-" <<endl;
        table(b,a);
        return 0;
}
void table(int b,int a){
    if (a<=10){
         table(b+0,a+1);
        cout<<b<<" times "<<a<<" is " <<a*b<<endl;
       
 
    }           
 
} 