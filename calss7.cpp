#include <iostream>
using namespace std;
void tata(int a,int b,int);

int main(){
    int a,b=1,z ;
    cout<< "enter the number of which u want to print the table of"<<endl;
    cin>>a;
        cout<<"how you want to print your table upside down or normal for upside down press 0 and for normal 1";
        cin>>z;
    tata(a,b,z);

    return 0;
}
    
    void tata(int a,int b,int z)

       {
        
        if(z==1){
            if (b<=10){  
            cout<<a<<" time "<<b <<" is " <<b*a<<endl;
            tata(a,b+1,z);
            }
        }
        else if(z==0){

        
            if (b<=10){
                tata(a,b+1,z);
            cout<<a<<" time "<<b <<" is " <<b*a<<endl;
         }   
            

        }
        else
        cout<<"0 aur 1 me se chuno bhaiya";
        
            

            }
       