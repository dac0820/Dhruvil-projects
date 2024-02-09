#include<iostream>
using namespace std;
int main(){
    int n,i;
    while (1)
    {
        int flag=0;
        cout <<"Enter number:";
        cin >>n;
        for(i=1;i<=n;i++){
            if (n%i==0)
            {
                flag++;
            }
            
        }
        if (flag==2)
        {
           cout<<n<<"\nis prime number\n";

        }
        else
        {
            cout <<n<<"\nis not prime\n";
        }
    }
}