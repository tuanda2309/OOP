#ifndef CHUYENXE_H
#define CHUYENXE_H

#include <bits/stdc++.h>
using namespace std;

class ChuyenXe {
protected:
    int maSo;
    string hoTenTaiXe;
    int soXe;
    long long doanhThu;

public:
    ChuyenXe(int maSo, string hoTenTaiXe, int soXe, long long doanhThu);

    virtual void XuatThongTin() const = 0;
    virtual long long tongdoanhthu() const;

    virtual ~ChuyenXe();
};

#endif // CHUYENXE_H
