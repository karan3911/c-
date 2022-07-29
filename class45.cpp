#include <iostream>
using namespace std;
int main(){
 
int *a[3];
   a[0]= new int[4];
   a[1]= new int[4];
   a[2]= new int[4];
for(int i=0;i<3;i++){
    for (int j=0;j<4;j++)
    {
        cin>>a[i][j];
       
    }
}

for(int i=0;i<3;i++){
    for (int j=0;j<4;j++)
    {
        cout<<a[i][j]<<" ";
       
    }

    cout<<endl;
}
cout  <<endl;
return 0;
}