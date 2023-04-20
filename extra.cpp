#include <iostream>
#include <string>

using namespace std;

void kmp_search(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    // Compute prefix function
    int prefix[m];
    prefix[0] = 0;
    int j = 0;
    for (int i = 1; i < m; i++) {
        while (j > 0 && pattern[i] != pattern[j])
            j = prefix[j-1];
        if (pattern[i] == pattern[j])
            j++;
        prefix[i] = j;
    }

    // Perform string matching with KMP
    j = 0;
    for (int i = 0; i < n; i++) {
        while (j > 0 && text[i] != pattern[j])
            j = prefix[j-1];
        if (text[i] == pattern[j])
            j++;
        if (j == m) {
            cout << "Pattern found at index " << i-m+1 << endl;
            j = prefix[j-1];
        }
    }
    cout<<"Not found"<<endl;
}

int main() {
    string text, pattern;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

    kmp_search(text, pattern);

    return 0;
}
