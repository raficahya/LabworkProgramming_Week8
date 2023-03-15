#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void checkPalindrome(char str[], int first, int last){
    if (first < last + 1){
        first++;
        last--;
        return checkPalindrome(str, first, last);
    }

    if (first == last){
        cout << "Input string is palindrome.";
    }
    if (str[first] != str[last]){
        cout << "Input string is not a palindrome.";
    } else {
        cout << "Input string is palindrome.";
    }
}


int main(){
    char str[100];

    cin >> str;

    int length = strlen(str);
    if (length == 0){
        cout << "Input string is palindrome.";
    } else {
        checkPalindrome(str, 0, length - 1);
    }

    return 0;
}
