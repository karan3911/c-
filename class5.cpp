#include <iostream>
using namespace std;
int prime();
int main(){
    
    prime();
    if(prime()<0)
    cout<<"aaha bhaiya ya to dikkat se zero ke upar aao" <<endl;
    else{
        if(prime()%2==0)
            cout <<"the number you enter is not prime";
            else
            cout<<" yahay aay number prime"<<endl;
           }
   
    return 0;

}

   int prime(){
    int a ;
    cout<<"enter the number to check the prime number"<<endl;
    cin>>a;
    return a;
   }
        

