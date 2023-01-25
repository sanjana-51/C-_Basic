#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age";
    cin>>age;
    switch(age)
    {
        case 18:
        cout<<"You are 18"<<endl;
        break;
        case 25:
        cout<<"You are 25"<<endl;
        break;
        default:
        cout<<"invalid";
        break;
    }
    return 0;
}