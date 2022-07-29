#include <iostream>
using namespace std;
int large(int a , int b, int c){
    if (a>b&&a>c)
      return a;
      else if (b>a&&b>c)
      return b;
      else 
      return c;  
    
}
int main(){

int x,y,z,l;
cout<<"enter three digit to get the biggest one" <<endl;
cin>>x>>y>>z;

l=large(x,y,z);

cout<<l <<" is the biggest one" <<endl;
return 0;
}