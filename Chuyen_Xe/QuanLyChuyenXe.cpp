#include "QuanLyChuyenXe.h"
#include "NoiThanh.h"
#include "NgoaiThanh.h"
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void QuanLyChuyenXe::hienThiMenu() {
    cout << "\n================== MENU ==================" << endl;
    cout << "1. Hien thi danh sach chuyen xe Noi Thanh" << endl;
    cout << "2. Hien thi danh sach chuyen xe Ngoai Thanh" << endl;
    cout << "3. Hien thi danh sach ca hai loai chuyen xe" << endl; 
    cout << "4. Tong doanh thu cua ca chuyen xe" << endl;
    cout << "5. Tong doanh thu cua xe noi thanh" << endl;
    cout << "6. Tong doanh thu cua xe ngoai thanh" << endl;
    cout << "7. Nhap them chuyen xe" << endl;
    cout << "8. Thoat" << endl;
    cout << "===========================================" << endl;
    cout << "Nhap lua chon cua ban: ";
}

bool QuanLyChuyenXe::xuLyLuaChon(int luaChon, vector<ChuyenXe*>& dsChuyenXe) {
    int msgboxID = MessageBoxA(
        NULL,
        "Ban co chac chan voi lua chon cua minh khong?",
        "Xac nhan",
        MB_ICONQUESTION | MB_OKCANCEL
    );

    if (msgboxID == IDCANCEL || msgboxID == 0) {
        return false;
    }

    switch (luaChon) {
    case 1:
        cout << "Danh sach chuyen xe Noi Thanh:" << endl;
        cout << left << setw(20) << "Ma so" << setw(20) << "Ho ten tai xe" << setw(20) << "So xe" << setw(20) << "Doanh thu" << setw(20) << "So tuyen" << setw(20) << "So km" << endl;
        for (auto xe : dsChuyenXe) {
            if (dynamic_cast<XeNoiThanh*>(xe)) {
                xe->XuatThongTin();
            }
        }
        break;
    case 2:
        cout << "Danh sach chuyen xe Ngoai Thanh:" << endl;
        cout << left << setw(20) << "Ma so" << setw(20) << "Ho ten tai xe" << setw(20) << "So xe" << setw(20) << "Doanh thu" << setw(20) << "Noi den" << setw(20) << "So ngay" << endl;
        for (auto xe : dsChuyenXe) {
            if (dynamic_cast<XeNgoaiThanh*>(xe)) {
                xe->XuatThongTin();
            }
        }
        break;
    case 3:
        cout << "Danh sach chuyen xe Noi Thanh:" << endl;
        cout << left << setw(20) << "Ma so" << setw(20) << "Ho ten tai xe" << setw(20) << "So xe" << setw(20) << "Doanh thu" << setw(20) << "So tuyen" << setw(20) << "So km" << endl;
        for (auto xe : dsChuyenXe) {
            if (dynamic_cast<XeNoiThanh*>(xe)) {
                xe->XuatThongTin();
            }
        }
        cout << "Danh sach chuyen xe Ngoai Thanh:" << endl;
        cout << left << setw(20) << "Ma so" << setw(20) << "Ho ten tai xe" << setw(20) << "So xe" << setw(20) << "Doanh thu" << setw(20) << "Noi den" << setw(20) << "So ngay" << endl;
        for (auto xe : dsChuyenXe) {
            if (dynamic_cast<XeNgoaiThanh*>(xe)) {
                xe->XuatThongTin();
            }
        }
        break;
    case 4:
    {
        long long doanhthu = 0;
        for (const auto& xe : dsChuyenXe) {
            doanhthu += xe->tongdoanhthu();
        }
        cout << fixed << setprecision(0);
        cout << "Tong doanh thu cua ca chuyen xe: " << doanhthu << endl;
        break;
    }
    case 5:
    {
        long long noithanh = 0;
        for (const auto& xe : dsChuyenXe) {
            if (dynamic_cast<XeNoiThanh*>(xe)) {
                noithanh += xe->tongdoanhthu();
            }
        }
        cout << fixed << setprecision(0);
        cout << "Tong doanh thu cua xe noi thanh: " << noithanh << endl;
        break;
    }
    case 6:
    {
        long long ngoaithanh = 0;
        for (const auto& xe : dsChuyenXe) {
            if (dynamic_cast<XeNgoaiThanh*>(xe)) {
                ngoaithanh += xe->tongdoanhthu();
            }
        }
        cout << fixed << setprecision(0);
        cout << "Tong doanh thu cua xe ngoai thanh: " << ngoaithanh << endl;
        break;
    }
    case 7:
        nhapChuyenXe(dsChuyenXe);
        break;
    case 8:
        return true;
    default:
        MessageBoxA(NULL, "Lua chon khong hop le. Vui long chon lai.", "MENU", MB_OK);
        break;
    }
    return false;
}

void QuanLyChuyenXe::nhapChuyenXe(vector<ChuyenXe*>& dsChuyenXe) {
    int loaiXe;
    cout << "Nhap loai xe (1: Noi Thanh, 2: Ngoai Thanh): ";
    cin >> loaiXe;

    int maSo, soXe, soTuyen, soNgay;
    long long doanhThu;
    float soKm;
    string hoTenTaiXe, noiDen;

    cout << "Nhap ma so: ";
    cin >> maSo;
    cin.ignore();  
    cout << "Nhap ho ten tai xe: ";
    getline(cin, hoTenTaiXe);
    cout << "Nhap so xe: ";
    cin >> soXe;
    cout << "Nhap doanh thu: ";
    cin >> doanhThu;

    if (loaiXe == 1) {
        cout << "Nhap so tuyen: ";
        cin >> soTuyen;
        cout << "Nhap so km: ";
        cin >> soKm;
        dsChuyenXe.push_back(new XeNoiThanh(maSo, hoTenTaiXe, soXe, doanhThu, soTuyen, soKm));
    }
    else if (loaiXe == 2) {
        cout << "Nhap noi den: ";
        cin.ignore();  
        getline(cin, noiDen);
        cout << "Nhap so ngay: ";
        cin >> soNgay;
        dsChuyenXe.push_back(new XeNgoaiThanh(maSo, hoTenTaiXe, soXe, doanhThu, noiDen, soNgay));
    }
    else {
        cout << "Loai xe khong hop le." << endl;
    }
}
