#ifndef NGOAITHANH_H
#define NGOAITHANH_H

#include "ChuyenXe.h"

class XeNgoaiThanh : public ChuyenXe {
private:
    string noiDen;
    int soNgay;

public:
    XeNgoaiThanh(int maSo, string hoTenTaiXe, int soXe, long long doanhThu, string noiDen, int soNgay);

    void XuatThongTin() const override;
};

#endif // NGOAITHANH_H
