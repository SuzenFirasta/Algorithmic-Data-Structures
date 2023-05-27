#include <iostream>

using namespace std;

const int MAXN = 10; // Maximum number of rows and columns

int n; // Number of rows and columns in the matrix
int a[MAXN][MAXN]; // Input matrix
int p[MAXN]; // Permutation of jobs
bool used[MAXN]; // Used jobs in the permutation

int best_cost = 1000; // Best cost found so far
int best_p[MAXN]; // Permutation of jobs with lowest cost

void search(int i, int cost) {
    if (i == n) {
        if (cost < best_cost) {
            best_cost = cost;
            for (int j = 0; j < n; j++) {
                best_p[j] = p[j];
            }
        }
        return;
    }

    for (int j = 0; j < n; j++) {
        if (!used[j]) {
            used[j] = true;
            p[i] = j;
            search(i + 1, cost + a[i][j]);
            used[j] = false;
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    search(0, 0);

    cout << "Best permutation: ";
    for (int i = 0; i < n; i++) {
        cout << best_p[i] << " ";
    }
    cout << endl;

    cout << "Best cost: " << best_cost << endl;

    return 0;
}

