#include<iostream>
using namespace std;
void sort(int,int);
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    sort(a,b);
    return 0;
}
void sort(int a,int b){
    if (a>b)
    {
        cout<<a<<">"<<b;
    }
    else if(b>a)
    {
        cout<<b<<">"<<a;
    }
    else{
        cout<<a<<"="<<b;
    }
}