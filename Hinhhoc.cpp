#include "Hinhhoc.h"
void Hinhhoc::input(){};
void Hinhhoc::output(string file_output) {
	ofstream file;
	file.open(file_output,ios::app);
	for (int i = 0; i < 4; i++)
		if (canh[i] != 0)
			file << canh[i] << " ";
	file << endl;
	file.close();
}
float Hinhhoc::getCValue(int index)
{
	float a = canh[index];
	return canh[index];
}
