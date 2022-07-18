#include <iostream>
using namespace std;
void ram (int a, int b ){
    
        if (a<b)
        {
            cout<<"b is bigger ";
        }
        else if (a==b)
            cout<< "a is equall to b";
            else 
            cout <<"a is bigger";
            
}
int takingnum( ){
    int number;

  cout << "Enter the length of array u want to use " << endl;
  cin >> number;
  int numbers[number];
  //  store input from user to array
  for (int i = 0; i < number; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < number; ++n) {
    cout << numbers[n] << "  ";
  }
  
}

int main(){
    cout <<"Automate"<<endl;
   int k,f;
    takingnum();
    cout<<"enter the number to show which is bigger"<<endl;
    cin>>k>>f;
    ram(k,f);

return 0;
}