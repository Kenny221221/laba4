#include <iostream>
#include <stdexcept>

using namespace std;

void ShiftRight3(double& A, double& B, double& C) {
    double temp = A;
    A = C;
    C = B;
    B = temp;
}

int main() {
    setlocale(LC_ALL, "RU");
    try {
        double A1, B1, C1;
        cout << "Введите A1: ";
        cin >> A1;
        if (cin.fail()) {
            throw runtime_error("Неверный ввод. A1 должно быть числом.");
        }
        cout << "Введите B1: ";
        cin >> B1;
        if (cin.fail()) {
            throw runtime_error("Неверный ввод. B1 должно быть числом.");
        }
        cout << "Введите C1: ";
        cin >> C1;
        if (cin.fail()) {
            throw runtime_error("Неверный ввод. C1 должно быть числом.");
        }

        double A2, B2, C2;
        cout << "Введите A2: ";
        cin >> A2;
        if (cin.fail()) {
            throw runtime_error("Неверный ввод. A2 должно быть числом.");
        }
        cout << "Введите B2: ";
        cin >> B2;
        if (cin.fail()) {
            throw runtime_error("Неверный ввод. B2 должно быть числом.");
        }
        cout << "Введите C2: ";
        cin >> C2;
        if (cin.fail()) {
            throw runtime_error("Неверный ввод. C2 должно быть числом.");
        }

        cout << "Перед сдвигом:" << endl;
        cout << "A1 = " << A1 << " B1 = " << B1 << " C1 = " << C1 << endl;
        cout << "A2 = " << A2 << " B2 = " << B2 << " C2 = " << C2 << endl;

        ShiftRight3(A1, B1, C1);
        ShiftRight3(A2, B2, C2);

        cout << "После сдвига:" << endl;
        cout << "A1 = " << A1 << " B1 = " << B1 << " C1 = " << C1 << endl;
        cout << "A2 = " << A2 << " B2 = " << B2 << " C2 = " << C2 << endl;
    }
    catch (const runtime_error& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
