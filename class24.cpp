#include <iostream>
using namespace std;
int main(){
     int n,search;
    cout <<"how many number Array is enter number" <<endl;
    cin>>n;
   
int a[n];
cout<<"Enetr the " <<n <<" numbers to to put in array " <<endl ;
for(int i=0;i<n;i++){
cout<<i <<" number \t";
cin>>a[i];
}
for(auto  x :a){
    cout<<"the numbers of array are \t "<<x <<endl;
}
cout<<"now enter u want to search in it by the method of binary search"<<endl;
cin >>search;
for(auto x: a){
    if (x== search){
    cout<<x;
    return 0;
    }
}


// cout  <<endl;
return 0;
}
