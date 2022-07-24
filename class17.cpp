#include <iostream>
using namespace std;
int main(){
int c=0;
    int p[]={5,5,65,56,6,354};
    for(int i=0;i<6;i++){
       
       c=c+p[i];
      

    }
    cout<<sizeof(p)<<" are elements in the array" <<endl;

cout<<c <<" sum " <<endl;
return 0;
}