#include <bits/stdc++.h>
#include "PhanSo.h"
using namespace std;

// Hàm nhập phân số
void PhanSo::Nhap()
{
    cout << "Nhap tu: ";
    cin >> iTu;
    do{
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while(iMau == 0);
}

// Hàm xuất phân số
void PhanSo::Xuat()
{
    if(iMau == 0)
       cout << "Phan so khong ton tai.";
    // Với t/h mẫu bằng 1
    else
       if(iMau == 1)
          cout << iTu;
       else
          // Với t/h tử bằng 0
          if(iTu == 0)
             cout << 0;
          else
             cout << iTu << "/" << iMau;
}

// Hàm rút gọn phân số
void PhanSo::RutGon()
{
    if(iMau == 0)
       return;
    int ucln = __gcd(iTu, iMau);
    iTu /= ucln;
    iMau /= ucln;

    // Đưa dấu về tử
    if(iMau < 0){
       iTu = -iTu;
       iMau = -iMau;
    }
}

// Hàm tính Tổng
PhanSo PhanSo::Tong(const PhanSo &ps) const
{
    return PhanSo(iTu * ps.iMau + ps.iTu * iMau, iMau * ps.iMau);
}

// Hàm tính Hiệu
PhanSo PhanSo::Hieu(const PhanSo &ps) const
{
    return PhanSo(iTu * ps.iMau - ps.iTu * iMau, iMau * ps.iMau);
}

// Hàm tính Tích
PhanSo PhanSo::Tich(const PhanSo &ps) const
{
    return PhanSo(iTu * ps.iTu, iMau * ps.iMau);
}

// Hàm tính Thương
PhanSo PhanSo::Thuong(const PhanSo &ps) const
{
    return PhanSo(iTu * ps.iMau, iMau * ps.iTu);
}

// Hàm so sánh 2 phân số
int PhanSo::SoSanh(PhanSo ps)
{
    int left = iTu * ps.iMau;
    int right = ps.iTu * iMau;
    if(left > right)
       return 1;
    if(left == right)
       return 0;
    return -1;
}
