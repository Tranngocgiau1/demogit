#include <iostream>
using namespace std;
double power(double a, int n) {
    // Truong hop co so
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return a;
    }

    // Truong hop de quy cho n > 1
    if (n > 1) {
        return a * power(a, n - 1);
    }

    // Truong hop de quy cho n < 0
    if (n < 0) {
        return 1 / power(a, -n);
    }
}

int main() {
    double a;
    int n;

    cout << "Nhap gia tri a: ";
    cin >> a;
    
    cout << "Nhap so mu n: ";
    cin >> n;

    if (a == 0 && n <= 0) {
        cout << "Khong xac dinh" << std::endl;
    } else {
        double result = power(a, n);
        cout << "Ket qua: " << result << std::endl;
    }

    return 0;
}

