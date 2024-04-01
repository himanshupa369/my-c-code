#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n;
    cout<<"enter tthe number for fibonacci"<<endl;
    cin>>n;
    if(n==0 || n==1)
    {
        cout<<a<<endl;
    }
    else if(n==2){
        cout<<a<<endl<<b<<endl;
    }
    else{
        cout<<a<<endl<<b<<endl;
        for(int i=3;i<=n;i++){
            b=b+a;
            cout<<b<<endl;
           a=b-a;
        }
}
}