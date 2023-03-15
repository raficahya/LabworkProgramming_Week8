//
// Created by ASUS on 11/7/2022.
//

#include "no2.h"
#include <iostream>
using namespace std;

int binomial (int n, int k){
    if (k == 0 || k == n){
        return 1;
    } else if (k > 0 && n > 0){
        return (binomial(n-1, k-1) + binomial(n-1, k));
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    int x = binomial(a, b);
    cout << x << endl;
    return 0;
}
