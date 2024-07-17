#ifndef QUANLYCHUYENXE_H
#define QUANLYCHUYENXE_H


#include "ChuyenXe.h"

class QuanLyChuyenXe {
public:
    void hienThiMenu();
    bool xuLyLuaChon(int luaChon, std::vector<ChuyenXe*>& dsChuyenXe);
    void nhapChuyenXe(std::vector<ChuyenXe*>& dsChuyenXe);
};

#endif // QUANLYCHUYENXE_H
