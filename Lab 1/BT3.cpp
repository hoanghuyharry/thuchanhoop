#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
    int tu, mau;            //Khai bao tu va mau
};

void NhapPhanSo(PhanSo &ps)
{
    do{
        cin >> ps.tu >> ps.mau;         //Nhap tu va mau
    } while(ps.mau == 0);               //Nhap lai khi mau = 0
}

void XuatPhanSo(PhanSo ps)
{
    if(ps.mau == 1)
       cout << ps.tu;                           //In moi tu khi mau = 1
    else
       if(ps.tu == 0)
          cout << 0;                            //In ra 0 khi tu = 0
       else
          cout << ps.tu << "/" << ps.mau;       //In tu / mau khi cac dieu kien ko xay ra
}

void RutGon(PhanSo &ps)
{
    int ucln = __gcd(ps.tu, ps.mau);            //Tinh ucln
    ps.tu /= ucln;
    ps.mau /= ucln;                             //Rut gon tu va mau voi ucln
    if(ps.mau < 0){                             //Triet tieu dau tru o mau dua len tu khi mau < 0
       ps.tu = -ps.tu;
       ps.mau = -ps.mau;
    }
}

PhanSo Tong(PhanSo &ps1, PhanSo &ps2)                           //Ham tong
{
    PhanSo kq;
    kq.tu = (ps1.tu * ps2.mau) + (ps2.tu * ps1. mau);           //Quy dong va cong phan tu
    kq.mau = ps1.mau * ps2.mau;                                 //Nhan quy dong phan mau
    RutGon(kq);                                                 //Rut gon kqua
    return kq;
}

PhanSo Hieu(PhanSo &ps1, PhanSo &ps2)                           //Ham hieu
{
    PhanSo kq;
    kq.tu = (ps1.tu * ps2.mau) - (ps2.tu * ps1. mau);           //Quy dong va tru phan tu
    kq.mau = ps1.mau * ps2.mau;                                 //Nhan quy dong phan mau
    RutGon(kq);                                                 //Rut gon kqua
    return kq;
}

PhanSo Tich(PhanSo &ps1, PhanSo &ps2)                           //Ham tich
{
    PhanSo kq;
    kq.tu = ps1.tu * ps2.tu;                                    //Nhan cung phan tu
    kq.mau = ps1.mau * ps2.mau;                                 //Nhan cung phan mau
    RutGon(kq);                                                 //Rut gon kqua
    return kq;
}

PhanSo Thuong(PhanSo &ps1, PhanSo &ps2)                         //Ham thuong
{
    PhanSo kq;
    kq.tu = ps1.tu * ps2.mau;                                   //Tu 1 nhan vs mau 2
    kq.mau = ps1.mau * ps2.tu;                                  //Mau 1 nhan vs tu 2
    RutGon(kq);                                                 //Rut gon kqua
    return kq;
}

int main()
{
    PhanSo ps1, ps2;
    cout << "Nhap phan so thu nhat: ";
    NhapPhanSo(ps1); RutGon(ps1); XuatPhanSo(ps1);              //Nhap p/so 1
    cout << endl;

    cout << "Nhap phan so thu hai: ";
    NhapPhanSo(ps2); RutGon(ps2); XuatPhanSo(ps2);              //Nhap p/so 2
    cout << endl;

    cout << "Tong: "; XuatPhanSo(Tong(ps1, ps2)); cout << endl;         //In kqua tong

    cout << "Hieu: "; XuatPhanSo(Hieu(ps1, ps2)); cout << endl;         //In kqua hieu

    cout << "Tich: "; XuatPhanSo(Tich(ps1, ps2)); cout << endl;         //In kqua tich

    if(ps2.tu != 0){                                                        //Voi tu cua p/so 2 khac 0
       cout << "Thuong: "; XuatPhanSo(Thuong(ps1, ps2)); cout << endl;      //In kqua thuong
    }
    else                                                                    //Voi tu cua p/so 2 bang 0
       cout << "Khong the chia vi phan so thu 2 bang 0." << endl;           //In ra kqua "Khong the chia duoc"
    return 0;
}
