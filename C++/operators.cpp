#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    cout <<"Arithmatic operators:"<<endl;
    cout <<"addition:"<<(a+b)<<endl;
    cout <<"substraction:"<<(a-b)<<endl;
    cout <<"multiplication:"<<(a*b)<<endl;
    cout <<"division:"<<(a/b)<<endl;
    cout <<"modulus:"<<(a%b)<<endl;

    cout <<"relational operators:"<<endl;
    cout <<(a>b)<<"(a.b)"<<endl;
    cout <<(a<b)<<"(a>b)"<<endl;
    cout <<(a==b)<<"(a==b)"<<endl;

    cout <<"logical operators:"<<endl;
    cout <<((a>5)&&(b<10))<<"(AND)"<<endl;
    cout <<((a>5)||(a>10))<<"(OR)"<<endl;
    cout <<!(a==b)<<"(NOT)"<<endl;

    cout <<"Bitwise operators:"<<endl;
    cout <<"a&b:"<<(a&b)<<endl;
    cout <<"a|b:"<<(a|b)<<endl;
    cout <<"a^b:"<<(a^b)<<endl;
    cout <<"Left shift(a<<1):"<<(a<<1)<<endl;
    cout <<"Right shift(a>>1):"<<(a>>1)<<endl;
    return 0;

    
}