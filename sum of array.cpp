#include<iostream>
using namespace std;
int main(){
    int a[50],i,l,add=0;
	float avg;
    cout <<"enter total number of digits digits=";
    cin >>l;
    cout<<"enter "<<l<<" numbers=";
    for(i=0;i<l;i++){
        cin >> a[i];
    }
    for ( i = 0; i < l; i++)
    {
        add=add+a[i];
    }
    avg=(float)add/l;
        
        cout <<"addition"<< add << "\naverage="<<avg; 
    for(i=0;i<l;i++){
        cout <<"\n"<<"a["<<i<<"]=="<<a[i];
    }      

}
