#include <iostream>
#include <string>

using namespace std;

int main() {
    string exhibitName;
    cin >> exhibitName;

    int totalRotations = 0;
    char currentPosition = 'a'; 

    for (char target : exhibitName) {
        
        int clockwiseDistance = (target - currentPosition + 26) % 26;
        int counterclockwiseDistance = (currentPosition - target + 26) % 26;

        
        totalRotations += min(clockwiseDistance, counterclockwiseDistance);

        
        currentPosition = target;
    }

    cout << totalRotations << endl;

    return 0;
}
