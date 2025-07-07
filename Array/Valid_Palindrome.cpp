#include <iostream>
#include <string>
using namespace std;

// Check Given Word or Number is Palindrome or Not ---> Leetcode 125.

// Convert uppercase character to lowercase
char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

// Check if the input string is a palindrome (alphanumeric only)
bool isPalindrome(string s) {
    string cleaned = "";

    for (char ch : s) {
        if (isalnum(ch)) {
            cleaned += toLowerCase(ch);
        }
    }

    int start = 0, end = cleaned.size() - 1;
    while (start <= end) {
        if (cleaned[start] != cleaned[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a word or number to check for palindrome : ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Yes, it is a palindrome." << endl;
    } else {
        cout << "No, it is not a palindrome." << endl;
    }

    return 0;
}
