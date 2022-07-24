#include <iostream>
using namespace std;
int main(){
int r,b,c=1;
cout<<"Enter the number " <<endl;
cin>>r;
cout<<"Enter the power of the number  " <<endl;
cin>>b;
for(int i =1;i<=b;i++)
{
  // cout<<c <<"\t" ;  
    c=c*r;

}
cout<<endl<<c;
return 0;
}