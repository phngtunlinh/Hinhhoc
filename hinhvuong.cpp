#include "hinhvuong.h"
void hinhvuong::input() {
	STT = 3;
	cout << "Nhap kich thuoc hinh vuong: ";
	cin >> canh[0];
	canh[1] = canh[2] = canh[3] = 0;
	chuvi = 4 * canh[0];
	dientich = canh[0] * canh[0];
}