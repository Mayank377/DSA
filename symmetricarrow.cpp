#include <iostream>

using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= 2 * n - 1; i++) {
        
        int spaces;
        if (i <= n) {
            spaces = 2 * (i - 1);
        } else {
            spaces = 2 * ( (2 * n - 1) - i );
        }

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 0; j < n; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}