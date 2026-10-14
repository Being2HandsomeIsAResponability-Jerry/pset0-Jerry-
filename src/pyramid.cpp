#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void pyramid(int n, bool up) {
    long long biggest = 1;

    for (int i = 1; i < n; i++) {
        biggest = biggest * 2;
    }

    int width = to_string(biggest).size() + 1;

    for (int i = 1; i <= n; i++) {
        int level;

        if (up) {
            level = i;
        } else {
            level = n - i + 1;
        }

        for (int j = 0; j < n - level; j++) {
            cout << setw(width) << "";
        }

        long long number = 1;

        for (int j = 0; j < level; j++) {
            cout << setw(width) << number;
            number = number * 2;
        }

        number = number / 4;

        for (int j = 1; j < level; j++) {
            cout << setw(width) << number;
            number = number / 2;
        }

        cout << endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: ./pyramid n up/down" << endl;
        return 1;
    }

    int n = stoi(argv[1]);
    string direction = argv[2];

    if (n < 1 || n > 63) {
        cout << "Enter a number from 1 to 63." << endl;
        return 1;
    }

    bool up;

    if (direction == "up") {
        up = true;
    } else if (direction == "down") {
        up = false;
    } else {
        cout << "Enter up or down." << endl;
        return 1;
    }

    pyramid(n, up);

    return 0;
}