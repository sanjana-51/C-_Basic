#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<sum(num1,num2);
    return 0;
}