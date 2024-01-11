#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string word) {
    int left = 0;
    int right = word.length() - 1;

    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true; 
}

void palindrome_pairs(string words[], int size) {
    bool foundPairs = false;

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (isPalindrome(words[i] + words[j])) {
                cout << "(" << words[i] << ", " << words[j] << ")" << endl;
                foundPairs = true;
            }
            if (isPalindrome(words[j] + words[i])) {
                cout << "(" << words[j] << ", " << words[i] << ")" << endl;
                foundPairs = true;
            }
        }
    }

    if (!foundPairs) {
        cout << "\nNo palindrome pairs found." << endl;
    }
}

int main() {
    string words1[] = { "racecar", "level", "radar", "hello", "world" };
    string words2[] = { "hello", "world", "foo", "bar" };

    cout << "\nwords1[] = { racecar, level, radar, hello, world }";
    cout << "\nwords2[] = { hello, world, foo, bar }";
    cout << "\nPalindrome pairs for words1: " << endl;
    palindrome_pairs(words1, sizeof(words1) / sizeof(words1[0]));

    cout << "\nPalindrome pairs for words2: " << endl;
    palindrome_pairs(words2, sizeof(words2) / sizeof(words2[0]));

    return 0;
}
