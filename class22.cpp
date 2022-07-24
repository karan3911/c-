#include <iostream>
using namespace std;
int main(){
int ma =0;
int a[]={5,568,687,368,38};
for(auto x:a){
    cout<<x<<"\t";
    if (ma<x){
        ma=x;
    }
    
}
cout<<endl<<ma <<endl;
return 0;
}
