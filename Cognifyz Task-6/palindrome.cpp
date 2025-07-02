#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Normalize string: remove spaces, punctuations, and lowercase it
string normalize(const string& input) {
    string cleaned;
    for (char ch : input) {
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }
    return cleaned;
}

// Check if string is palindrome
bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left++] != str[right--])
            return false;
    }
    return true;
}

// Find the longest palindromic substring
string longestPalindrome(string s) {
    int n = s.length();
    if (n == 0) return "";
    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++) {
        // Odd length
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
        // Even length
        l = i, r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
    }
    return s.substr(start, maxLen);
}

int main() {
    string input;
    cout << "Enter a word or phrase: ";
    getline(cin, input);

    string clean = normalize(input);
    cout << "\nNormalized String: " << clean << endl;

    if (isPalindrome(clean))
        cout << "It's a Palindrome!\n";
    else
        cout << "Not a Palindrome.\n";

    string lps = longestPalindrome(clean);
    cout << "Longest Palindromic Substring: " << lps << endl;

    return 0;
}
