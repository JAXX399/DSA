#include<iostream>
using namespace std;

void print1()
{
    for(int i=1; i<4; i++)
    {
        for(int j=1; j<=4; j++)
        {
            
            cout << "*";
        }
        cout<<endl;
    }
}

void print2(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}



int main(){
    int n;
    cin>>n;
    print2(n);
    
}