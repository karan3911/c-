#include <iostream>
using namespace std;
int main(){
int a[]={65,44,87,54};
int *p;
 p = a;
 for(auto& x:a){
    cout<<x <<" ";
 }

cout  <<endl;
return 0;
}