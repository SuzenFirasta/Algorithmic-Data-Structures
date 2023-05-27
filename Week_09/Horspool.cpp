// Suzen Firasta
//210968058

#include <iostream>
#include <cstring>

using namespace std;

const int MAX = 256; // maximum number of characters in the alphabet

int Horspool(string text, string pattern, int& comparisons) {
    int n = text.length();
    int m = pattern.length();
    int shift[MAX];
    
    // Initialize shift array
    for (int i = 0; i < MAX; i++) {
        shift[i] = m;
    }
    for (int i = 0; i < m - 1; i++) {
        shift[pattern[i]] = m - 1 - i;
    }
    
    // Search for pattern in text
    int i = m - 1;
    while (i < n) {
        int k = 0;
        while (k < m && pattern[m - 1 - k] == text[i - k]) {
            comparisons++;
            k++;
        }
        if (k == m) {
            return i - m + 1; // pattern found
        }
        else {
            comparisons++;
            i += shift[text[i]]; // shift pattern
        }
    }
    
    return -1; // pattern not found
}


int main() {
    string text, pattern;
    int comparisons = 0;
    
    cout << "Enter text string: ";
    getline(cin, text);
    
    cout << "Enter pattern string: ";
    getline(cin, pattern);
    
    int pos = Horspool(text, pattern, comparisons);
    
    if (pos == -1) {
        cout << "Pattern not found!" << endl;
    }
    else {
        cout << "Pattern found at position " << pos << "." << endl;
    }
    
    cout << "Number of key comparisons in successful search: " << comparisons << endl;
    
    // Search for a pattern that does not exist in the text
    string not_found_pattern = "xyz";
    comparisons = 0;
    pos = Horspool(text, not_found_pattern, comparisons);
    cout << "Number of key comparisons in unsuccessful search: " << comparisons << endl;
    
    return 0;
}
// Suzen Firasta
//210968058
