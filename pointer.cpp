#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number";
    cin>>a;
    int*p=&a;
    cout<<"The address is"<<p<<endl;
    cout<<"The value is"<<*p<<endl;
    int**q=&p;
    cout<<"The adress of address p is"<<q<<endl;
    cout<<"The value of address"<<*q<<endl;
    return 0;
}