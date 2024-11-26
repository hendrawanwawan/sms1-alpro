#include <iostream>
using namespace std;

//saya lebih banyak menggunakan function
void hasil() {
    cout << "Hasil : " ;
}

void umurA(int usia) {
    cout << "Umur Anda : " << usia << " tahun\n";
}


void cocok() {
    cout << "vaksin yang cocok : \n";
}
string vaksin(int usia ) {
    if (usia < 12 ) {
        cout << "Belum cukup umur untuk melakukan faksin";
//        return ;
    }
    if (usia >= 12 ) {
        cout << "- Pfizer \n";
    }
    if (usia >= 18 ) {
        cout <<  "- Moderan\n- Sinovac\n";
    }
    if (usia >= 18 && usia <= 55) {
        cout <<  "- AstraZeneca\n";
    }
    if (usia >= 18 && usia <= 59) {
        cout << "- Novavax\n";
    }
    if (usia >= 18 && usia <= 80){
        cout <<  "- Sinopharm\n";
    }
//    return "vaksin tidak tersedia untuk usia anda\n";
    return std::string();
}


int umur_anda(int tahun_sekarang, int tahun_lahir) {
    return  tahun_sekarang - tahun_lahir;
}


int main() {
    int tahun_lahir,tahun_sekarang = 2024,usia;
    cout << "Masukan tahun lahir : ";
    cin  >> tahun_lahir;
    cout <<"\n";
    usia = umur_anda(tahun_sekarang,tahun_lahir);
//    vaksin(usia);
    hasil();
    umurA(usia);
    cocok();
    vaksin(usia);
    return 0;
}