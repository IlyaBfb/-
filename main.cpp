#include <iostream>
using namespace std;
long long gcd(long long a,long long b){
    while (a && b)
        if (a > b) a%=b;
        else b%=a;
    return a+b;}
int main() {
    long long numb1, numb2;
    cin >> numb1 >> numb2;
    cout << gcd(numb1, numb2) << endl;
    return 0;}
