#include<iostream>
using namespace std;
int volume(int a,int b,int c)
{
    return(a*b*c);
}
int volume(int a)
{
    return(a*a*a);
}
float volume(int r,int h)
{
    return (3.14*r*r*h);
}
int main()
{
    cout<<"Volume of rectangle is"<<volume(3,4,5)<<endl;
    cout<<"Volume of sphere"<<volume(5)<<endl;
    cout<<"Volume of cylinder"<<volume(1,5)<<endl;
    return 0;
    
}