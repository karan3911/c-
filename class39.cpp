#include <iostream>
using namespace std;
int power(int x,int y){
    int j=1;
    for (int i =0;i<y; i++){
         j=x*j;
        
       }
       return j;
}
int main(){
int d,x,y;
cout<<"enter the value of m" <<endl;
cin>>x;
cout<<"enter the power of m"<<endl;
cin>>y;
d=power(x,y);
cout<<x <<" to the power " <<y<<" is "<< d <<endl;
return 0;
}