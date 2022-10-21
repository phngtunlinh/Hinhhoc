#include "tamgiac.h"
void tamgiac::input() {
	STT = 1;
	cout << "Nhap kich thuoc tam giac: ";
	for (int i=0;i<3;i++)
		cin >> canh[i];
	canh[3] = 0;
	chuvi = canh[0] + canh[1] + canh[2];
	float p = chuvi/2;
	float temp = p * (p - canh[1]) * (p - canh[2]) * (p - canh[0]);
	dientich = sqrt(temp);
}
