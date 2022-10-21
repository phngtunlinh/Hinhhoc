#include "OutputFunction.h"
void menu(vector<Hinhhoc> &hinh);
void back(vector<Hinhhoc> hinh) {
    cout << endl;
    system("pause");
    system("cls");
    menu(hinh);
}
int main() {
    system("cls");
    vector<Hinhhoc> hinh;
    menu(hinh);
    return 0;
}
void menu(vector<Hinhhoc> &hinh) {
    system("cls");
    cout << "1. Nhap hinh tam giac" << endl;
    cout << "2. Nhap hinh tron" << endl;
    cout << "3. Nhap hinh vuong" << endl;
    cout << "4. Nhap hinh chu nhat" << endl;
    cout << "5. Luu ket qua va mo file" << endl;
    cout << endl << "Chon chuc nang: ";
    int choice; cin >> choice;
    switch (choice) {
    case 1: {   
        tamgiac tg; tg.input(); 
        hinh.push_back(tg);
        back(hinh); break;
    }
    case 2: {
        hinhtron ht; ht.input(); 
        hinh.push_back(ht);
        back(hinh); break;
    }
    case 3: {
        hinhvuong hv; hv.input(); 
        hinh.push_back(hv);
        back(hinh); break;
    }
    case 4: {
        chunhat cn; cn.input(); 
        hinh.push_back(cn);
        back(hinh); break;
    }
    case 5:
        ofstream file;
        file.open(file_output, ios::out); file.close();
        sort(hinh.begin(), hinh.end(), vector_sort);
        for (int i =1; i<=4;i++)
            Data_output(hinh, i, file_output);
        system("Ketqua.txt"); system("exit");
    }
}

