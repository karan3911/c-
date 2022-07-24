// defining the constructor outside the class 

#include <iostream> 
using namespace std; 

    int main(){
        int n,i;
         cout<<"enter"<<endl;
            cin>>n;
        int a[n];
        
        
        for ( i =0; i<n;i++){
            cout<<"enter \t"<<i<< " number "<<endl;
            cout <<"\t";
            cin>>a[i];
             }
         for ( i=0;i<n;i++){
            cout<<a[i]<<"\t";
         }
    return 0; 
    }
	

