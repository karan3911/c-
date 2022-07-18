#include <iostream>
using namespace std;
int ass(int);

int main(){
    int a=ass(5);
    
    cout<<a <<endl;
    return 0;
}
 

 int ass(int a)
{
   static int p=0;
   if (a>0)
   {
    p++;
    
   return ass(a-1)+p;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
   }
return 0;
}