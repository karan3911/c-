#include <iostream>
using namespace std;
int main(){
  
int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
cout<<"enter 3 rows and 4 column" <<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        // a[i][j] =j*1;
        cout<<a[i][j] <<" ";

    }
    
    cout<<endl;
}


cout  <<endl;
return 0;
}