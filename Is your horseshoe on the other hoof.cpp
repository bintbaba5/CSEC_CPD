#include <iostream>
#include <set>

using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> uniqueColors;
    uniqueColors.insert(s1);
    uniqueColors.insert(s2);
    uniqueColors.insert(s3);
    uniqueColors.insert(s4);

    int neededColors = 4 - uniqueColors.size();

    cout << neededColors << endl;

    return 0;
}
