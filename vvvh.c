#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,i,n1,n2;
    cout<<"number of terms to be entered"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>n1;
        cin>>n2;
    }
        if(n2>n1)
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
    
}