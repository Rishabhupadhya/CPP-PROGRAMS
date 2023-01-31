#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for( i=2;i<n;i++)
    {
        if(i%2==0)
        cout<<"Non Prime"<<endl;
        break;
    }
    if(i==n)
    cout<<"Prime";
    return 0;
}