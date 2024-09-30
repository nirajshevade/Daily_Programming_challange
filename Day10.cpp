<<<<<<< HEAD
#include <iostream>
using namespace std;

bool compareStrings(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true;
}

void groupAnagrams(string strs[], int n) {
    bool visited[10000] = {0};

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            cout << "[";
            cout << strs[i];
            visited[i] = true;
            for (int j = i + 1; j < n; j++) {
                if (!visited[j] && compareStrings(strs[i], strs[j])) {
                    cout << " " << strs[j];
                    visited[j] = true;
                }
            }
            cout << "]" << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string strs[10000];

    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    groupAnagrams(strs, n);

    return 0;
}
=======
#include <iostream>
using namespace std;

bool compareStrings(const string& s1, const string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true;
}

void groupAnagrams(string strs[], int n) {
    bool visited[10000] = {0};

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            cout << "[";
            cout << strs[i];
            visited[i] = true;
            for (int j = i + 1; j < n; j++) {
                if (!visited[j] && compareStrings(strs[i], strs[j])) {
                    cout << " " << strs[j];
                    visited[j] = true;
                }
            }
            cout << "]" << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string strs[10000];

    cout << "Enter the strings:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    groupAnagrams(strs, n);

    return 0;
}
>>>>>>> 733607e6d66e75f6545553e48563c1f9fe57d3a9
