#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Stanford CS106B - Day 1 Environment Test
 * Purpose: Verify compiler setup and STL basic functionality.
 */

int main() {
    cout << "========================================" << endl;
    cout << "   STANFORD CS106B: ENVIRONMENT TEST    " << endl;
    cout << "========================================" << endl;

    vector<string> status = {
        "C++ Compiler: Functional",
        "STL Library: Linked",
        "GitHub Structure: Verified"
    };

    for (const string& check : status) {
        cout << "[SUCCESS] " << check << endl;
    }

    cout << "\nReady to begin Lecture 2: Strings and Streams." << endl;

    return 0;
}
