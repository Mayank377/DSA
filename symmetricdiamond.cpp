#include <iostream>
using namespace std;

int main() {
    int n=7;
    int mid = n / 2;
    for (int i = 0; i <= mid; i++) {
        for (int s = 0; s < mid - i; s++)
            cout << " ";

        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = mid - 1; i >= 0; i--) {
        for (int s = 0; s < mid - i; s++)
            cout << " ";

        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}