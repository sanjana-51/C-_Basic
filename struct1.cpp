#include<iostream>
using namespace std;
typedef struct employee
{
    int id;
    char letter;
    float salary;
}ep;
int main()
{
    ep harry;
    ep shubham;
    shubham.id=44;
    harry.id=55;
    cout<<"ID IS  "<<harry.id;
    cout<<"Shubham id is"<<shubham.id;
    return 0;
}