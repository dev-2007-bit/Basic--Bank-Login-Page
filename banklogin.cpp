#include <iostream>
using namespace std;
int main()
{
string name;
int AccountNumber ;
int password ;
int inputacc, inputpass;
AccountNumber=123456789;        //value fixed
password=12345;                 // value fixed
cout<<"Enter Login Credentials"<<endl;
cout<<"Name "<<endl;
cin>>name;
cout<<"hello "<<name<<endl;

cout<<"Account Number "<<endl;
cin>>inputacc;

cout<<"Password "<<endl;
cin>>inputpass;
 
 if(inputacc==AccountNumber&&inputpass==password) {
     cout<<"login successful"<<endl;
 } else{
     cout<<"login failed- incorrect account number or password"<<endl;
 }
    return 0;
}
