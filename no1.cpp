//
// Created by ASUS on 11/7/2022.
//

#include "no1.h"

#include <iostream>
using namespace std;

int reversedNumber = 0;
int remainder;

int reverse(int n) {
    if (n !=0 ){
        remainder = n % 10;
        reversedNumber = remainder + 10 * reversedNumber;
        return reverse(n/10);

    } else {
        return reversedNumber;
    }
}

int main() {
    int n;
    cin >> n;
    int a = reverse(n);
    cout << a << endl;
    return 0;
}

