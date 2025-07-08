#include <iostream>
#include <vector>
using namespace std;

// Remove all occurrences of a substring ---> Leetcode 1910.

// input : s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".

string removeOccurrences(string &s, string part)
{
    while (s.find(part) != string ::npos)
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    removeOccurrences(s, part);
    for (char ch : s)
    {
        cout << ch;
    }
    cout << endl;

    return 0;
}