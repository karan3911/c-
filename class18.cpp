#include <iostream>
using namespace std;
int main(){

int c=0, a ,b;
cout<<"enter the elements to sum of how many numbers" <<endl;
cin>>a;
for (int i=1;i<=a;i++){
  cout<<"enter the digit " <<i  <<endl;
  cin>>b;
  c = b+c;

}


cout <<c <<endl;
return 0;
}