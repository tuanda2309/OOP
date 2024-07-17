#include "NgoaiThanh.h"
#include <bits/stdc++.h>

XeNgoaiThanh::XeNgoaiThanh(int maSo, string hoTenTaiXe, int soXe, long long doanhThu, string noiDen, int soNgay)
    : ChuyenXe(maSo, hoTenTaiXe, soXe, doanhThu), noiDen(noiDen), soNgay(soNgay) {}

void XeNgoaiThanh::XuatThongTin() const {
    cout << left << setw(20) << maSo << setw(20) << hoTenTaiXe << setw(20) << soXe << setw(20) << doanhThu << setw(20) << noiDen << setw(20) << soNgay << endl;
}
