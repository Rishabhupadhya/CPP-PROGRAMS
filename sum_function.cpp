#include<iostream>
using namespace std;
int sum(int n){
    return (n*(n-1))/2;
}
int main()
{
    int n,i;
    cin>>n;
    i=sum(n);
    cout<<i<<endl;
    return 0;
    
}