#include <iostream>

using namespace std;

const int MAX_N = 20;

int memo[MAX_N + 1][MAX_N + 1];

int Combin2(int N, int K) {
    if (K == 0 || K == N)
        return 1;

    if (memo[N][K] != 0)
        return memo[N][K];

    memo[N][K] = Combin2(N - 1, K) + Combin2(N - 1, K - 1);
    return memo[N][K];
}

bool isInteger(double value) {
    return value == static_cast<int>(value);
}

int main() {
    setlocale(LC_ALL, "RU");

    int N, K;
    double inputN, inputK;

    cout << "Введите значение N (N > 0 и N <= 20): ";
    cin >> inputN;

    if (!isInteger(inputN) || inputN <= 0 || inputN > 20) {
        cout << "Неверное значение N." << endl;
        return 1;
    }

    N = static_cast<int>(inputN);

    cout << "Введите значение K (0 <= K <= N): ";
    cin >> inputK;

    if (!isInteger(inputK) || inputK < 0 || inputK > N) {
        cout << "Неверное значение K." << endl;
        return 1;
    }

    K = static_cast<int>(inputK);

    cout << "C(" << N << ", " << K << ") = " << Combin2(N, K) << endl;

    return 0;
}
