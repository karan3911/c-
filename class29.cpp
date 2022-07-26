#include <iostream>
using namespace std;
int main(){
int i,J;
for(i=0;i<4;i++){
    for(J=0;J<4;J++){
        if (i+J<3){
            cout<<" ";
        }
        else{
            cout<<"#";
        }
    }
    cout<<endl;
}


cout  <<endl;
return 0;
}