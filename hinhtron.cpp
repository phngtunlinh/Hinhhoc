#include "hinhtron.h"
void hinhtron::input() {
	STT = 2; 
	cout << "Nhap ban kinh hinh tron: "; cin >> canh[0];
	canh[1] = 0; canh[2] = 0; canh[3] = 0;
	chuvi = 2 * canh[0] * 3.14;
	dientich = canh[0] * canh[0] * 3.14;
}