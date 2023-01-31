#include<iostream>
using namespace std;
int main(){
    int n,armnumber=0,digit;
    cin>>n;
    int temp=n;
    while(n>0)
    {
        digit=n%10;
        armnumber+=(digit*digit*digit);
        n=n/10;
    }
    if(armnumber==temp)
    cout<<"It is a armstrong number";
    else
    cout<<"It is not a armstrong number";
    return 0;
}