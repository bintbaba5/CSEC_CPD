#include <iostream>

using namespace std;

int main() {
    string username;
    cin >> username;

    bool seen[26] = {false}; 
    int distinctCount = 0;
    for (char c : username) {
        if (!seen[c - 'a']) {
            seen[c - 'a'] = true;
            distinctCount++;
        }
    }

    if (distinctCount % 2 == 0) {
        cout << "CHAT WITH HER!" << endl; 
    } else {
        cout << "IGNORE HIM!" << endl; 
    }

    return 0;
}
