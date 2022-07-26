#include <iostream>
using namespace std;
int main(){
     int n,search;
     int i;
    cout <<"how many number Array is enter number" <<endl;
    cin>>n;
   
int a[n];
cout<<"Enetr the " <<n <<" numbers to to put in array " <<endl ;
for(  i=0;i<n;i++){
cout<<i <<" number \t";
cin>>a[i];
}
for(auto  x :a){
    cout<<"the numbers of array are \t "<<x <<endl;
}
cout<<"now enter u want to search in it by the method of binary search"<<endl;
cin >>search;
for(i=0;i<n;i++){
    if (search ==a[i]){
    cout<<"the vaule u enter "<<search <<" is at the index number "<<i;
    return 0;
    }
   
}
cout<<"the number is not found"<<endl;

// cout  <<endl;
return 0;
}
