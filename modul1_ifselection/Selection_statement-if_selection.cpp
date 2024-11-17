
//for this we have task about divide to subject weight and height
// we try build calculator BMI (body mass index)
// weight  = in kg
// height = in cm

//for the first we have condition, under 18,5 = underweight
//for the second  we have condition, 18,5-22,9  = normal weight
//for the third  we have condition, 23-29,9  = overweight
//for the fourth and the last we have condition , 30 and above = obesity

//the requirement we must use if selection





#include <iostream>
#include <iomanip>
using namespace std;

//first i build the function for bim
// ini adalah area untuk menghitung beratt badan hehe jadi nanti tinggal panggil fungsi ini untuk menghitung berat badan

float hitungBmi(float berat, float tinggi) {
    tinggi = tinggi/100;
    return berat/(tinggi*tinggi);
}

//untuk kasi keterangan apakah underweight,normal weight,overweight,obese

string kategori(float bmi) {
    if(bmi<18.5)
        return "Berat badan kurang";
    else if(bmi<22.9)
        return "Berat badan normal";
    else if(bmi<29.9)
        return "Berat badan berbelbih";
    else
        return "obesitas";
}
int main() {
    float berat,tinggi,bmi;
    cout << "Masukkan berat badan : ";
    cin >>berat;
    cout << "Masukan tinggi badan : ";
    cin>>tinggi;

    cout << fixed << setprecision(2);
    cout << "\n BMI adalah :  " << hitungBmi(berat,tinggi) << endl;
    cout << "kategori      : " << kategori(bmi);
    return 0;
}