#include<iostream>
using namespace std;
int main(){
    int i,j,n,count=1;
    cout<<"Enter the number";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0; 
}