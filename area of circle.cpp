#include<iostream>
#include<iomanip>
using namespace std;

float ar(float, float pi=3.14);

int main() {
    double r, ans;
    cout << "Enter radius: ";
    cin >> r;
    ans = ar(r);
    cout << "Area of circle is = " <<setprecision(4)<<ans;
}

float ar(float r, float pi) {
    double sum=pi*r*r;
    return sum;
}
