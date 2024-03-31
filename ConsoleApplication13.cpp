#include <iostream>
#include <cstdlib> 
using namespace std;


double averageOfPositive(int arr[], int size) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0) {
        cout << "В массиве нет положительных элементов.\n";
        return 0.0;
    }
    return static_cast<double>(sum) / count;
}

int main() {
    try {
        setlocale(LC_ALL, "RU");
        int N, M, K;
        cout << "Введите размер массива X: ";
        cin >> N;

        
        if (cin.fail()) {
            throw runtime_error("Введено не целое число");
        }

        int* X = new int[N];
        cout << "Элементы массива X: ";
        for (int i = 0; i < N; ++i) {
            X[i] = rand() % 21 - 10; 
            cout << X[i] << " ";
        }
        cout << endl;

        cout << "Введите размер массива Y: ";
        cin >> M;

        
        if (cin.fail()) {
            throw runtime_error("Введено не целое число");
        }

        int* Y = new int[M];
        cout << "Элементы массива Y: ";
        for (int i = 0; i < M; ++i) {
            Y[i] = rand() % 21 - 10; 
            cout << Y[i] << " ";
        }
        cout << endl;

        cout << "Введите размер массива Z: ";
        cin >> K;

        if (cin.fail()) {
            throw runtime_error("Введено не целое число");
        }

        int* Z = new int[K];
        cout << "Элементы массива Z: ";
        for (int i = 0; i < K; ++i) {
            Z[i] = rand() % 21 - 10; 
            cout << Z[i] << " ";
        }
        cout << endl;

        double avgX = averageOfPositive(X, N);
        double avgY = averageOfPositive(Y, M);
        double avgZ = averageOfPositive(Z, K);

        cout << "Среднее арифметическое положительных элементов массива X: " << avgX << endl;
        cout << "Среднее арифметическое положительных элементов массива Y: " << avgY << endl;
        cout << "Среднее арифметическое положительных элементов массива Z: " << avgZ << endl;

        delete[] X;
        delete[] Y;
        delete[] Z;
    }
    catch (const exception& e) {
        cout << e.what();
    }


    return 0;
}
