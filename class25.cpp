#include <iostream>
using namespace std;
int main(){
    int find, low =0,high=4,mid=0,x;
int a[5]={2,3,4,5,6};
cout<<"index number are:- " ;
for(int i=0;i<5;i++){
        cout <<i<<"\t" ;
    }
    cout<<endl<<"\t";
for(auto x:a){
    cout<<"\t" <<x ;
    }
cout<<endl<<"what to find ";
cin>> find;

for(auto x:a){

mid = (low+high)/2;

if (find == a[mid]){
    cout<<"value found "<<mid<<endl;
    return 0;
}
else if(find<a[mid]){
    high=mid-1;
}
else {
    low= mid+1;
}
}
cout<<"not found " <<endl;
// cout  <<endl;
return 0;
}