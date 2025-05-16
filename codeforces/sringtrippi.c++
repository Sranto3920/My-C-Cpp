#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    cin.ignore(); // To ignore the newline after the integer input

    for (int i = 0; i < a; i++) {
        string s;
        getline(cin, s); // Read the entire line

        vector<char> arr;
        if (!s.empty()) {
            arr.push_back(s[0]); // First character

            for (size_t j = 1; j < s.length(); j++) {
                if (s[j] == ' ' && j + 1 < s.length()) {
                    arr.push_back(s[j + 1]); // First character after space
                }
            }
        }

        for (char c : arr) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
