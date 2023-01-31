#include<iostream>
using namespace std;
void fibonacci(int n){
    int fib,nextterm=0,t1=0,t2=1;
        for(int i=0;i<=n;i++)
        {
            cout<<t1<<endl;
           nextterm=t1 +t2;
            t1=t2;
            t2= nextterm ;

        }  
        return ;
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
    

    return 0;
}