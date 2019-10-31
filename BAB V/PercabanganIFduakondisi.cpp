#include <iostream>
using namespace std;

int main()
{
    cout << " KELULUSAN SISWA \n \n";

    double Nilai_ujian;
    cout << "Masukan Nilai ujian : ";
    cin >> Nilai_ujian;
    cout << endl;

    if (Nilai_ujian >=60)
    {
        cout << ("Hasil ujian = Lulus");
        cout << endl << endl;

    } else{
        cout << "Hasil ujian = Tidak Lulus";
        cout << endl << endl;
    }

    return 0;
}
