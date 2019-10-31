#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "Kelulusan siswa \n \n";

    double Nilai_ujian;

    cout << "Masukan Nilai Ujian : ";
    cin >> Nilai_ujian;
    cout << endl;

    char Hasil_ujian[12] = "Tidak lulus";
    if(Nilai_ujian >= 60)
    strcpy (Hasil_ujian, "Lulus");

    cout << "Hasil_ujian : ";
    cout << Hasil_ujian;
    cout << endl << endl;

    return 0;
}
