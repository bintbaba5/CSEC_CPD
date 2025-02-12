#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int position = 1;
    int n = s.length();

    for (char instruction : t) {
        if (position <= n && s[position - 1] == instruction) {
            position++;
        }
    }

    cout << position << endl;
    return 0;
}
