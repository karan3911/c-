#include <iostream>
using namespace std;

class Classes {
    int roll_number;
    int Classs;
    char subject[10];
    int numer_of_students;

    public: 
    Classes(){
      cout <<"enter the roll number"<<endl;
      cin>>roll_number;
      cout<<"enter which class"<<endl;
      cin >>Classs;
      cout<<"enter the subject"<<endl;
      cin>>subject;
      cout<<"enter the number of students" <<endl;
      cin>>numer_of_students;
    }
      
      void display()
      {
     cout<<roll_number<<"\t"<<Classs<<"\t"<<subject<<"\t"<<numer_of_students<<"\t"<<endl;
     
      }


        

};
int main(){
    Classes one;
    one.display();
return 0;
}