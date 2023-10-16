#include <iostream>
#include <conio.h>

// Hàm d?i don v? chi?u dài
void doiDonViChieuDai() {
    char choice;
    do {
        system("cls");
        std::cout << "Chon don vi doi tuong ung:\n";
        std::cout << "1. Inch -> cm\n";
        std::cout << "2. Foot -> dm\n";
        std::cout << "3. Yard -> m\n";
        std::cout << "4. Mile -> km\n";
        std::cout << "5. Home\n";

        choice = _getch();

        double value;
        switch (choice) {
            case '1':
                std::cout << "Nhap gia tri inch: ";
                std::cin >> value;
                std::cout << value << " inch = " << value * 2.54 << " cm\n";
                break;
            case '2':
                std::cout << "Nhap gia tri foot: ";
                std::cin >> value;
                std::cout << value << " foot = " << value * 30.48 << " dm\n";
                break;
            case '3':
                std::cout << "Nhap gia tri yard: ";
                std::cin >> value;
                std::cout << value << " yard = " << value * 0.9144 << " m\n";
                break;
            case '4':
                std::cout << "Nhap gia tri mile: ";
                std::cin >> value;
                std::cout << value << " mile = " << value * 1.60934 << " km\n";
                break;
            case '5':
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long chon lai!\n";
                break;
        }
        _getch(); // Ch? ngu?i dùng nh?n phím b?t k? d? ti?p t?c
    } while (choice != '5');
}

// Hàm d?i don v? kh?i lu?ng
void doiDonViKhoiLuong() {
    char choice;
    do {
        system("cls");
        std::cout << "Chon don vi doi tuong ung:\n";
        std::cout << "1. Ounce -> gram\n";
        std::cout << "2. Pound -> kg\n";
        std::cout << "3. Ton -> tan\n";
        std::cout << "4. Home\n";

        choice = _getch();

        double value;
        switch (choice) {
            case '1':
                std::cout << "Nhap gia tri ounce: ";
                std::cin >> value;
                std::cout << value << " ounce = " << value * 28.3495 << " gram\n";
                break;
            case '2':
                std::cout << "Nhap gia tri pound: ";
                std::cin >> value;
                std::cout << value << " pound = " << value * 0.453592 << " kg\n";
                break;
            case '3':
                std::cout << "Nhap gia tri ton: ";
                std::cin >> value;
                std::cout << value << " ton = " << value * 0.907185 << " tan\n";
                break;
            case '4':
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long chon lai!\n";
                break;
        }
        _getch(); // Ch? ngu?i dùng nh?n phím b?t k? d? ti?p t?c
    } while (choice != '4');
}

// Hàm d?i don v? nhi?t d?
void doiDonViNhietDo() {
    char choice;
    do {
        system("cls");
        std::cout << "Chon don vi doi tuong ung:\n";
        std::cout << "1. Fahrenheit (OF) -> Celsius (OC)\n";
        std::cout << "2. Kelvin (OK) -> Celsius (OC)\n";
        std::cout << "3. Home\n";

        choice = _getch();

        double value;
        switch (choice) {
            case '1':
                std::cout << "Nhap gia tri Fahrenheit: ";
                std::cin >> value;
                std::cout << value << " OF = " << (value - 32) * 5 / 9 << " OC\n";
                break;
            case '2':
                std::cout << "Nhap gia tri Kelvin: ";
                std::cin >> value;
                std::cout << value << " OK = " << value - 273.15 << " OC\n";
                break;
            case '3':
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long chon lai!\n";
                break;
        }
        _getch(); // Ch? ngu?i dùng nh?n phím b?t k? d? ti?p t?c
    } while (choice != '3');
}

int main() {
    char mode = 'V'; // Ch? d? ban d?u là VN

    char choice;
    do {
        system("cls");
        std::cout << "Chon chuc nang:\n";
        std::cout << "1. Doi don vi do chieu dai\n";
        std::cout << "2. Doi don vi do khoi luong\n";
        std::cout << "3. Doi don vi do nhiet do\n";
        std::cout << "4. Thoat\n";

        choice = _getch();

        switch (choice) {
            case '1':
                doiDonViChieuDai();
                break;
            case '2':
                doiDonViKhoiLuong();
                break;
            case '3':
                doiDonViNhietDo();
                break;
            case '4':
                std::cout << "Tam biet!\n";
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long chon lai!\n";
                break;
        }
        _getch(); // Ch? ngu?i dùng nh?n phím b?t k? d? ti?p t?c
    } while (choice != '4');

    return 0;
}

