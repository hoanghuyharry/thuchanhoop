#include <bits/stdc++.h>
using namespace std;

struct HocSinh                      //Ham khai bao HocSinh
{
    string hoten;                   //Khai bao ho ten
    double toan, van;               //Khai bao diem toan, diem van
};

int main()
{
    HocSinh hs;
    cout << "Nhap Ho ten: ";
    getline(cin, hs.hoten);           //Nhap ho ten hoc sinh

    cout << "Nhap diem Toan, Van: ";
    cin >> hs.toan >> hs.van;           //Nhap diem toan, diem van cua hoc sinh

    double dtb = (hs.toan + hs.van) / 2.0;      //Tinh diem trung binh cua hoc sinh

    cout << "\n--- Thong Tin HS ---\n";
    cout << "Ten: " << hs.hoten << "\n";                  //In ra ho ten hoc sinh
    cout << "Diem Trung Binh: " << dtb << "\n";         //In ra diem trung binh cua hoc sinh

    return 0;
}
