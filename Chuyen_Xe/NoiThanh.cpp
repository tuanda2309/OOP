#include "NoiThanh.h"
#include <bits/stdc++.h>

XeNoiThanh::XeNoiThanh(int maSo, string hoTenTaiXe, int soXe, long long doanhThu, int soTuyen, float soKm)
    : ChuyenXe(maSo, hoTenTaiXe, soXe, doanhThu), soTuyen(soTuyen), soKm(soKm) {}

void XeNoiThanh::XuatThongTin() const {
    cout << left << setw(20) << maSo << setw(20) << hoTenTaiXe << setw(20) << soXe << setw(20) << doanhThu << setw(20) << soTuyen << setw(20) << soKm << endl;
}
