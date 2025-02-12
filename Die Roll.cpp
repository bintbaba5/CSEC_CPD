#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    int Y, W;
    cin >> Y >> W;

    
    int maxRoll = max(Y, W);
    int successfulOutcomes = max(0, 7 - maxRoll); 
    int totalOutcomes = 6;

    if (successfulOutcomes == 0) {
        cout << "0/1" << endl;
        return 0;
    }
    if (successfulOutcomes == totalOutcomes) {
        cout << "1/1" << endl;
        return 0;
    }
    int divisor = gcd(successfulOutcomes, totalOutcomes);
    successfulOutcomes /= divisor;
    totalOutcomes /= divisor;

    cout << successfulOutcomes << "/" << totalOutcomes << endl;

    return 0;
}
