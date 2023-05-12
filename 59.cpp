#include "vector"
#include "iostream"
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> a(n, vector<int>(n));
    int num = 1;
    int top = 0, left = 0, right = n - 1, down = n - 1;
    while (top <= down && left <= right) {
        for (int i = left; i < right; ++i) {
            a[top][i] = num++;
        }

        for (int i = top; i < down; ++i) {
            a[i][right] = num++;
        }

        for (int i = right; i > left; --i) {
            a[down][i] = num++;
        }

        for (int i = down; i > top; --i) {
            a[i][left] = num++;
        }
        top++;
        right--;
        down--;
        left++;
    }
    if (n % 2 == 1) {
        a[n / 2][n / 2] = n * n;
    }
    return a;
}

int main() {
    for (int n = 1; n < 8; ++n) {
        vector<vector<int>> vector = generateMatrix(n);
        for (auto i: vector) {
            for (auto j: i) {
                cout << j << "\t";
            }
            cout << endl;
        }
        cout << "************************************" << endl << endl;
    }


    return 0;
}