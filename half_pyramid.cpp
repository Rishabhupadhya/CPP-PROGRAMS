#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter number of Rows";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}