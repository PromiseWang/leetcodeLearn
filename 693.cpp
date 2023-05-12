#include <iostream>

using namespace std;

bool hasAlternatingBits(int n) {
    int start = (n & 1);
    n = n >> 1;
    int temp;
    while (n > 0) {
        temp = (n & 1);
        if (temp != start) {
            start = temp;
            n = n >> 1;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << hasAlternatingBits(n);
    return 0;
}
