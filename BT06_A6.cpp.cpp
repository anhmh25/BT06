#include<iostream>
using namespace std;
int dequy(int n) {
    int a[1000];
    if (n == 0) return 0;
    return dequy(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << dequy(n);
    return 0;
}

