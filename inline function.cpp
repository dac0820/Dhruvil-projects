#include<iostream>
using namespace std;
inline int mul(int a,int b){
    return a*b;
}
int main(){
    int a,b,ans;
    cout<<"Enter a and b:";
    cin>>a>>b;
    ans=mul(a,b);
    cout<<"multiplication = "<<ans;
}