#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    int birds[100];
    for (int i = 0; i < n; ++i) {
        cin >> birds[i];
    }
    int m; 
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        int wireIndex = x - 1;
        int birdPosition = y - 1;
        int leftBirds = birdPosition;
        int rightBirds = birds[wireIndex] - (birdPosition + 1); 
        if (wireIndex > 0) {
            birds[wireIndex - 1] += leftBirds; 
        }
        if (wireIndex < n - 1) {
            birds[wireIndex + 1] += rightBirds;
        }
        birds[wireIndex] = 0;
    }
    for (int i = 0; i < n; ++i) {
        cout << birds[i] << endl;
    }

    return 0;
}
