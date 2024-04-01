#include<iostream>
using namespace std;
int main()
{
    char c[5]="abcd";
    char *p= &c[0];
    cout<<p<<endl;
    cout<<p[0]<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(2+p)<<endl;
    return 0;
}