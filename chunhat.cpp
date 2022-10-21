#include "chunhat.h"
void chunhat::input() {
	STT = 4;
	cout << "Nhap kich thuoc hinh CN: ";
	cin >> canh[0] >> canh[1];
	canh[2] = canh[3] = 0;
	chuvi = (canh[0] + canh[1]) * 2;
	dientich = canh[0] * canh[1];
}