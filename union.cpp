#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float pounds;
};
int main(){
    union money m1;
    m1.car='c';
    m1.pounds=1000;
    cout<<m1.pounds;
    return 0;
}