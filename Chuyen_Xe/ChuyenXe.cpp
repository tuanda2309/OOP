#include "ChuyenXe.h"

ChuyenXe::ChuyenXe(int maSo, string hoTenTaiXe, int soXe, long long doanhThu)
    : maSo(maSo), hoTenTaiXe(hoTenTaiXe), soXe(soXe), doanhThu(doanhThu) {}

long long ChuyenXe::tongdoanhthu() const {
    return doanhThu;
}

ChuyenXe::~ChuyenXe() {}
