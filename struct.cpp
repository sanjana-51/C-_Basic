#include<iostream>
using namespace std;
   typedef struct enployee
    {
        int id;
        float salary;
        char Favchar;
    }V;
    int main()
    {
        V Harry;
        Harry.id=51;
        Harry.salary=120000000;
        Harry.Favchar='S';

        cout<<Harry.id;
    return 0;
}