#include <iostream>
using namespace std;
int add(int  ,int ,int );
int main(){
    int x,y,z;
  
    cout<<"enter three angles";
    
    cin>>x>>y>>z;
   cout<< add(x,y,z)<<endl;
   int k= add(x,y,z);
   if (k==180){
    cout<<"yes it's a triangle "<<endl;

   }
   else
    cout<<"no it's not a triangle " <<endl;
return 0;
}

       int add(int a ,int b ,int c){
        int k;
           k= a+b+c;
           return k;
        }
