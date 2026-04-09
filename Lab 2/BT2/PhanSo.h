#ifndef PHANSO_H
#define PHANSO_H

// Khai báo lớp PhanSo
class PhanSo
{
private:
    int iTu;
    int iMau;

public:
    void Nhap();
    void Xuat();
    void RutGon();

    PhanSo(int t = 1, int m = 1) : iTu(t), iMau(m) {RutGon();}
    PhanSo Tong(const PhanSo &ps) const;
    PhanSo Hieu(const PhanSo &ps) const;
    PhanSo Tich(const PhanSo &ps) const;
    PhanSo Thuong(const PhanSo &ps) const;

    int SoSanh(PhanSo ps);
};

#endif
