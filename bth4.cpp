#include <iostream>
#include <cmath>

using namespace std;


double tinhSoTienTraHangThang(double L, double r, int m, int t) 
{
    double i = r / m;
    int n = m * t;
    return L * (i * pow(1 + i, n)) / (pow(1 + i, n) - 1);
}


// Ham tinh so thang can de tra het khoan vay 
long tinhSoThangCanDeTraHetKhoanVay(double L, double r, double R) 
{
    double i = r / 12;
    return ceil(log(R / (R - i * L)) / log(1 + i)); // ceil làm tròn so  
}

// Ham tinh so tien con lai sau K lan tra  // pow mu 
double tinhSoTienConLaiSauKLanThanhToan(double L, double r, int m, int t, int k) 
{
    double i = r / m;
    int n = m * t;
    double R = L * (i * pow(1 + i, n)) / (pow(1 + i, n) - 1);
    return L * pow(1 + i, n) - (R * (pow(1 + i, k) - 1) / i);
}

int main() {
    int chon;
    double L, r, R;
    int m, t, k;
    
    do {
       
        cout << "====================== MENU =====================" << endl;
	    cout << "   1. Tinh so thang can de tra het khoan vay." << endl;
	    cout << "   2. Tinh so tien con lai sau K lan thanh toan." << endl;
	    cout << "   3. Thoat" << endl;
	    cout << "================" << endl;
	    cout << "Chon mot chuc nang (1-3): ";
        cin >> chon;


        switch (chon) {
            case 1:
                cout << "Nhap so tien vay (L): ";
                cin >> L;
                cout << "Nhap lai suat hang nam (r): ";
                cin >> r;
                cout << "Nhap so tien tra co dinh hang thang (R): ";
                cin >> R;
                cout << "So thang can de tra het khoan vay: " << tinhSoThangCanDeTraHetKhoanVay(L, r, R) << " thang" << endl;
                break;
            case 2:
                cout << "Nhap so tien vay (L): ";
                cin >> L;
                cout << "Nhap lai suat hang nam (r): ";
                cin >> r;
                cout << "Nhap so lan thanh toan trong mot nam (m): ";
                cin >> m;
                cout << "Nhap so nam vay (t): ";
                cin >> t;
                cout << "Nhap so lan thanh toan da thuc hien (k): ";
                cin >> k;
                cout << "So tien con lai sau " << k << " lan thanh toan: " << tinhSoTienConLaiSauKLanThanhToan(L, r, m, t, k) << " dong" << endl;
                break;
              
            case 3:
                cout << "Thoat khoi chuong trinh." << endl;
                break;

            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }

    
    } while (chon != 3);

    return 0;
}
