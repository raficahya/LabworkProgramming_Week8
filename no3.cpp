//
// Created by ASUS on 11/7/2022.
//

#include "no3.h"

#include <iostream>
using namespace std;

int ackerman (int m, int n){
    if (m == 0){
        return n + 1;
    } else if ((m != 0) && (n == 0)) {
        return ackerman(m-1, 1);
    } else if ((m != 0) && (n != 0)) {
        return ackerman(m-1, ackerman(m, n-1));
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    int x = ackerman(a, b);
    cout << x << endl;
    return 0;
}

