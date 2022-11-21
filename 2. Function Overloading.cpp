#include <iostream>
using namespace std;
double konversi (double);
float konversi (float);
int konversi (int);
int main(){
    double a;
    float b;
    int c;
    //Program Menghitung Konversi dari Derajat Farenheit ke Celcius
    cout << "Masukkan derajat yang akan dikonversi: ";
    cin >> c;
    b = c;
    a = c;
    //function 1 - tipe data double
    cout << "Hasil konversi dari derajat ke Farenheit ke Celcius: " << konversi (a) << endl;
    //function 2 - tipe data float
    cout << "Hasil konversi dari derajat ke Farenheit ke Celcius: " << konversi (b) << endl;
    //function 3 - tipe data integer
    cout << "Hasil konversi dari derajat ke Farenheit ke Celcius: " << konversi (c) << endl;
    return 0;
}
double konversi (double f){
    return ((f - 32) * 5/9);
}
float konversi (float f){
    return ((f - 32) * 5/9);
}
int konversi (int f){
    return ((f - 32) * 5/9);
}
