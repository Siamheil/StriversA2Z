#include <bits/stdc++.h>
using namespace std;

int cntDigit(int n) {
    int cnt = 0; // initialize to 0
    while (n) {
        cnt++;
        n = n / 10;
    }
    return cnt;
}

void checkArmstrong(int n) {
    int digit = cntDigit(n);
    int temp = n;
    int sum = 0;
    while (temp) {
        int num = temp % 10;
        sum = sum + pow(num, digit);
        temp = temp / 10;
    }
    if (sum == n)
        cout << "Armstrong";
    else
        cout << "Not armstrong";
}

int main() {
    int n;
    cin >> n;
    checkArmstrong(n);
    return 0;
}

