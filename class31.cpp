// dmsllest number from array

#include <iostream>
using namespace std;
int main(){
int a[]={1,5,53,45,34,2};
int find=0;
for (auto x:a){
    if(x<find){
        x=find;
       
    }
}



cout<<find  <<endl;
return 0;
}