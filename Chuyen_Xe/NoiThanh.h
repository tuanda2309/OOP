#ifndef NOITHANH_H
#define NOITHANH_H

#include "ChuyenXe.h"

class XeNoiThanh : public ChuyenXe {
private:
    int soTuyen;
    float soKm;

public:
    XeNoiThanh(int maSo, string hoTenTaiXe, int soXe, long long doanhThu, int soTuyen, float soKm);

    void XuatThongTin() const override;
};

#endif // NOITHANH_H
