#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter number of rows of pyramid";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}