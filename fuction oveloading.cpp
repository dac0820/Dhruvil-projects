#include <iostream>
#include <string>
using namespace std;

int max(int a, int b, int c) {
    if (a > b) {
        if (a > c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b > c) {
            return b;
        } else {
            return c;
        }
    }
}

string max(const string& sa, const string& sb, const string& sc) {
    int s1 = sa.length();
    int s2 = sb.length();
    int s3 = sc.length();
    if (s1 > s2) {
        if (s1 > s3) {
            return sa;
        } else {
            return sc;
        }
    } else {
        if (s2 > s3) {
            return sb;
        } else {
            return sc;
        }
    }
}

int main() {
    int a, b, c, num_max;
    string sa, sb, sc, str_max;
    cout << "Enter integer a, b, c: ";
    cin >> a >> b >> c;
    cout << "Enter string a, b, c: ";
    cin >> sa >> sb >> sc;
    num_max = max(a, b, c);
    str_max = max(sa, sb, sc);
    cout << "Maximum in numbers is = " << num_max << endl;
    cout << "Maximum in strings is = " << str_max << endl;
    return 0;
}
