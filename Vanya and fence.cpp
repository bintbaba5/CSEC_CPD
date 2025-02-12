#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, h;
    cin >> n >> h; 
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    int total_width = 0;
    for (const int& height : heights) {
        if (height > h) {
            total_width += 2; // Friend bends down
        } else {
            total_width += 1; // Friend walks normally
        }
    }

    cout << total_width << endl; // Output the total width
    return 0;
}
