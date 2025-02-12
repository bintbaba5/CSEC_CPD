#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string previousMagnet, currentMagnet;
    int groupCount = 0;

    for (int i = 0; i < n; ++i) {
        cin >> currentMagnet;
        if (i == 0 || currentMagnet != previousMagnet) {
            groupCount++;
        }
        previousMagnet = currentMagnet;
    }

    cout << groupCount << endl;

    return 0;
}
