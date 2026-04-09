#include <bits/stdc++.h>
#include "SoPhuc.h"
using namespace std;

// Hàm nhập
void SoPhuc::Nhap()
{
    cout << "Nhap phan thuc: "; cin >> iThuc;
    cout << "Nhap phan ao: "; cin >> iAo;
}

// Hàm xuất
void SoPhuc::Xuat()
{
    if(iThuc == 0 && iAo == 0){
       cout << 0;
       return;
    }
    if(iThuc != 0)
       cout << iThuc;
    if(iAo != 0){
       if(iAo > 0)
          if(iThuc != 0)
             cout << "+";
       else
          cout << " - ";
       if(abs(iAo) != 1)
          cout << abs(iAo);
       cout << "i";
    }
}

// Hàm tổng
SoPhuc SoPhuc::Tong(const SoPhuc &sp) const
{
    return SoPhuc(iThuc + sp.iThuc, iAo + sp.iAo);
}

// Hàm hiệu
SoPhuc SoPhuc::Hieu(const SoPhuc &sp) const
{
    return SoPhuc(iThuc - sp.iThuc, iAo - sp.iAo);
}

//Hàm tích
SoPhuc SoPhuc::Tich(const SoPhuc &sp) const
{
    return SoPhuc( iThuc * sp.iThuc - iAo * sp.iAo, iThuc * sp.iAo + iAo * sp.iThuc );
}

// Hàm thương
SoPhuc SoPhuc::Thuong(const SoPhuc &sp) const
{
    double mau_so = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    if(mau_so == 0){
       cout << "Loi - Khong the chia cho 0";
       return SoPhuc(0, 0);
    }
    return SoPhuc((iThuc * sp.iThuc + iAo * sp.iAo) / (sp.iThuc * sp.iThuc + sp.iAo * sp.iAo), (sp.iThuc * iAo - iThuc * sp.iAo) / (sp.iThuc * sp.iThuc + sp.iAo * sp.iAo));
}
