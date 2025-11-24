#include<iostream>
#include<string>
using namespace std;
class Mystring{
    private:
    string str;
    public:
    void getInput(){
        cout <<"enter a string:";
        getline(cin,str);
    }
        void display(){
        cout <<"the string is:"<<str<<endl;

        }
        Mystring Concatenate (Mystring s2){
            Mystring Result;
            Result.str = str + s2.str;
            return Result;
        }
    };
   int main()
   {
  Mystring s1,s2,s3;
  s1.getInput();
  s2.getInput();
  s3 = s1.Concatenate(s2);
  cout<<"\nConcatenated string:";
  s3.display();
  return 0;
   }