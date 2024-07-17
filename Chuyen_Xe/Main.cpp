#include "QuanLyChuyenXe.h"
#include "NoiThanh.h"
#include "NgoaiThanh.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<ChuyenXe*> dsChuyenXe;
    dsChuyenXe.push_back(new XeNoiThanh(1, "Nguyen Minh Duc ", 123, 500000, 12, 100));
    dsChuyenXe.push_back(new XeNgoaiThanh(2, "Tran Tuan Tai", 456, 700000, "Ha Noi", 2));
    dsChuyenXe.push_back(new XeNgoaiThanh(3, "Nguyen Minh Son ", 789, 233000, "TP.HCM", 9));

    QuanLyChuyenXe ql;

    int choice;
    bool running = true;

    while (running) {
        ql.hienThiMenu();
        cin >> choice;

        if (ql.xuLyLuaChon(choice, dsChuyenXe)) {
            running = false;
        }
    }

    for (auto xe : dsChuyenXe) {
        delete xe;
    }
    return 0;
}
