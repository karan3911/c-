#include <iostream>
using namespace std;
int fact(int );
int main(){
   int n; 
cout<<"neter the number to factorial" <<endl;
cin >>n;

fact(n);
cout<< fact<<endl;
return 0;
}


int fact(int a){
    int i=1;
    if( i<a){
        a=a*i;
        a--;
        fact(a++);

    }
return a;
}