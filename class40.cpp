// output is wrong make it correct
#include <iostream>
using namespace std;
int Rew(int ,int);
int main(){
 int j,k=2,l=3;
j=Rew(k,l);
cout<< j <<endl;
return 0;
}
int Rew(int a ,int b){
    int c=1;
    for (int i=0;i<5;i++){
         c=b*c;

    }
return  c;
}