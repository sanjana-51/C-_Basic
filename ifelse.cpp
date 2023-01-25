#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age";
    cin>>age;
    if(age<18)
    cout<<"Not eligible for voting";
    else if(age==18)
    cout<<"First year of voting";
    else
    cout<<"YOU can vote";
    return 0;

}