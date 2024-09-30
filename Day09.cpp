#include <iostream>
using namespace std;

int stringLength(string s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

string substring(string s, int start, int end) {
    string result = "";
    for (int i = start; i < end; i++) {
        result += s[i];
    }
    return result;
}

string longestCommonPrefix(string strs[], int n) {
    if (n == 0) return "";

    string prefix = strs[0];
    int prefixLength = stringLength(prefix);

    for (int i = 1; i < n; i++) {
        int j = 0;
        int currentStringLength = stringLength(strs[i]);
        while (j < prefixLength && j < currentStringLength && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix = substring(prefix, 0, j);
        prefixLength = j;
        if (prefixLength == 0) break;
    }
    return prefix;
}

int main() {
    int n;

    cout << "Enter the number of strings: ";
    cin >> n;
    
    string strs[n];

    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs, n);
    cout << "Longest Common Prefix: ";
    
    if (stringLength(result) == 0) {
        cout << "\"\"" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
