#include<iostream>

using namespace std;
int main()
{
    int a=0,b=0,c=0,n,p,nota=0,id;
    cout<<"Enter total number of voters:";
    cin >>p;
    for(int i=1;i<=p;i++){
        cout<<"Enter id no.";
        cin>>id;
    cout<<"enter your choise:  \n1 for party a\n2 for party b\n3 for NOTA:----";
    cin >>n;
    if(n==1){
        a++;
    }
    else if(n==2){
        b++;
    }
    else if(n==3)
    {
        nota++;
    }
    
    }
    cout<<"---RESULTS OF ELECTIONS---\n"<<"Total votes of party a ="<<a<<"\nTotal votes of party b ="<<b<<endl;
    cout<<"Total NOTA votes  "<<nota<<endl;
    if(nota>a && nota>b){
        cout<<"--NOTA WINS. Elections will reconduct--";
    }
    else if(a>b){
        cout<<"a is winner total number of votes----"<<a;
    }
    else if(b>a){
        cout<<"b is winner total numer of votes----"<<b;
    }
    else{
        cout<<"Tie between party a and b";
        }
       
}
