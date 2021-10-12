// Submission by derpman23#7497
//   Date: 2021-09-27

#include<iostream>

using namespace std;

int n, m;

int gcd(int n, int m) {
    return n ? gcd(m % n, n) : m;
}

int main() {
    cin >> n >> m;
    
    cout << gcd(n, m) << "\n";
}
