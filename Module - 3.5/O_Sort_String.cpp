#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Allocate memory for the character array (+1 for null terminator)
    char str[n + 1];
    
    // Read input string including spaces
    cin.ignore(); // Ignore newline character from previous input
    cin.getline(str, n + 1);

    sort(str, str + n);

    cout << str << endl;

    return 0;
}
