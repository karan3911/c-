#include <iostream>
using namespace std;
void ram(int a);
     int main(){
        int c=3;
        ram(c);
        return  0;
     }
      
       void ram(int a){
         if(a>=0){
            cout <<a <<endl;
            ram(a-1);
         }
       }