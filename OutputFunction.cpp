#include "OutputFunction.h"
void Data_output(vector<Hinhhoc> hinh, int status, string file_output)
{
    int count = 0;
    for (int i = 0; i < hinh.size(); i++)
        if (hinh[i].STT == status)
        {
            count++;
            hinh[i].output(file_output);
        }
    if (count > 0)
    {
        ofstream file; file.open(file_output, ios::app);
        file << "maxC = " << maxC(hinh, status) << ", maxS = " << maxS(hinh, status) << endl; file.close();
    }
}
bool vector_sort(Hinhhoc hinh1, Hinhhoc hinh2) {
    return (hinh1.STT < hinh2.STT);
}
float maxC(vector<Hinhhoc> hinh, int status)
{
    int size = hinh.size(); float max = 0;
    for (int i = 0; i < size; i++)
        if (hinh[i].STT == status)
            if (max < hinh[i].chuvi)
                max = hinh[i].chuvi;
    return max;
}
float maxS(vector<Hinhhoc> hinh, int status)
{
    int size = hinh.size(); float max = 0;
    for (int i = 0; i < size; i++)
        if (hinh[i].STT == status)
            if (max < hinh[i].dientich)
                max = hinh[i].dientich;
    return max;
}