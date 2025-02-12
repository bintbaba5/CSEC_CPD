#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cards[1000]; 

    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }

    int serejaScore = 0, dimaScore = 0;
    int left = 0, right = n - 1;
    bool isSerejaTurn = true;

    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (isSerejaTurn) {
                serejaScore += cards[left];
            } else {
                dimaScore += cards[left];
            }
            left++;
        } else {
            if (isSerejaTurn) {
                serejaScore += cards[right];
            } else {
                dimaScore += cards[right];
            }
            right--;
        }
        isSerejaTurn = !isSerejaTurn; // Switch turns
    }

    cout << serejaScore << " " << dimaScore << endl;

    return 0;
}
