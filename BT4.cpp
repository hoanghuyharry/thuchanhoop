#include <bits/stdc++.h>
using namespace std;

int ngay, thang, nam;

int main()
{
    cout << "Nhap ngay, thang, nam: ";
    cin >> ngay >> thang >> nam;                        //Nhap ngay, thang, nam
    if(thang < 1 || thang > 12 || nam < 1){         //Neu thang nam ngoai [1;12] hoac nam < 1
       cout << "Ngay khong hop le.";
       return 0;                                    //In ra "Ngay khong hop le."
    }
    int d[] = {0, 31, 28 + (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //Mang d la mang gom nhung ngay trong thang lan luot ung voi cac so trong mang

    if(ngay < 1 || ngay > d[thang]){                //Neu ngay < 1 hoac so ngay ko thuoc trong mang
       cout << "Ngay khong hop le.";
       return 0;                                    //In ra "Ngay khong hop le."
    }
    if(++ngay > d[thang]){                      //Neu ngay tiep theo khac vs so ngay theo thang trong mang
       ngay = 1;                                //Ngay se quay lai la ngay 1
       if(++thang > 12){                        //Dong thoi neu thang tiep theo > 12
          thang = 1;                            //Thang se quay lai la thang 1
          nam++;                                //Nam se tang them 1
       }
    }
    cout << "Ngay tiep theo: " << ngay << "/" << thang << "/" << nam;           //In ra kqua ngay, thang, nam tiep theo
    return 0;
}
