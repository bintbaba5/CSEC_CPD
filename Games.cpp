#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> home(n), away(n);

    
    for (int i = 0; i < n; ++i) {
        cin >> home[i] >> away[i];
    }

    int count = 0;

    
    for (int i = 0; i < n; ++i) { // Team i as host
        for (int j = 0; j < n; ++j) { // Team j as guest
            if (i != j) { // Ensure they are different teams
                if (home[i] == away[j]) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
