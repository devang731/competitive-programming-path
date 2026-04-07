#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Stanford CS106B - Day 1 Environment Test
 * Purpose: Verify that VS Code, the Compiler, and the STL are linked.
 */

int main() {
    // 1. Test Console Output (Streams)
    cout << "========================================" << endl;
    cout << "   STANFORD CS106B: SYSTEM CHECK UP    " << endl;
    cout << "========================================" << endl;

    // 2. Test the Standard Template Library (Vectors and Strings)
    vector<string> tasks = {
        "C++ Compiler (MinGW/MSYS2)",
        "VS Code C++ Extension",
        "Code Runner Configuration"
    };

    cout << "Verifying local development environment..." << endl;

    // 3. Test Range-based For Loops (Modern C++)
    for (const string& task : tasks) {
        cout << "[OK] " << task << " is active." << endl;
    }

    cout << "\n----------------------------------------" << endl;
    cout << "STATUS: READY FOR LECTURE 2" << endl;
    cout << "Next Topic: Strings and Streams" << endl;
    cout << "========================================" << endl;

    return 0;
}