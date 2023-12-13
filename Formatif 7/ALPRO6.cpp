#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string jenisPekerjaan;
    int pengalaman;
    string ulang;
    do
    {

        // Meminta pengguna memasukkan jenis pekerjaan
        cout << "_____________________________________________________________________" << endl;
        cout << "(programmer, dokter, guru, insinyur, desainer)" << endl;
        cout << "_____________________________________________________________________" << endl;
        cout << "Masukkan jenis pekerjaan\t : ";
        cin >> jenisPekerjaan;

        // Meminta pengguna memasukkan pengalaman kerja
        cout << "_____________________________________________________________________" << endl;
        cout << "Masukkan tahun pengalaman kerja\t : ";
        cin >> pengalaman;

        // Menentukan gaji berdasarkan jenis pekerjaan dan pengalaman
        if (jenisPekerjaan == "programmer")
        {
            cout << "_____________________________________________________________________" << endl;
            cout << "\n\t\t\tAnda seorang programmer" << endl;
            cout << "_____________________________________________________________________" << endl;
            cout << "dengan pengalaman\t\t : " << pengalaman << " tahun" << endl;
            cout << "_____________________________________________________________________" << endl;
            if (pengalaman >= 5 && pengalaman < 10)
            {
                cout << "Gaji\t\t\t\t : Rp 90,000,000 per tahun." << endl;
            }
            else if (pengalaman >= 10)
            {
                cout << "Gaji\t\t\t\t : Rp 110,000,000 per tahun." << endl;
            }
            else
            {
                cout << "Gaji\t\t\t\t : Rp 70,000,000 per tahun." << endl;
            }
        }
        else if (jenisPekerjaan == "dokter")
        {
            cout << "_____________________________________________________________________" << endl;
            cout << "\n\t\t\tAnda seorang dokter" << endl;
            cout << "_____________________________________________________________________" << endl;
            cout << "dengan pengalaman\t\t : " << pengalaman << " tahun" << endl;
            cout << "_____________________________________________________________________" << endl;
            if (pengalaman >= 5 && pengalaman < 15)
            {
                cout << "Gaji\t\t\t\t : Rp 180,000,000 per tahun." << endl;
            }
            else if (pengalaman >= 15)
            {
                cout << "Gaji\t\t\t\t : Rp 250,000,000 per tahun." << endl;
            }
            else
            {
                cout << "Gaji\t\t\t\t : Rp 120,000,000 per tahun." << endl;
            }
        }
        else if (jenisPekerjaan == "guru")
        {
            cout << "_____________________________________________________________________" << endl;
            cout << "\n\t\t\tAnda seorang guru" << endl;
            cout << "_____________________________________________________________________" << endl;
            cout << "dengan pengalaman\t\t : " << pengalaman << " tahun" << endl;
            cout << "_____________________________________________________________________" << endl;
            if (pengalaman >= 3 && pengalaman < 10)
            {
                cout << "Gaji\t\t\t\t : Rp 50,000,000 per tahun." << endl;
            }
            else if (pengalaman >= 10)
            {
                cout << "Gaji\t\t\t\t : Rp 70,000,000 per tahun." << endl;
            }
            else
            {
                cout << "Gaji\t\t\t\t : Rp 40,000,000 per tahun." << endl;
            }
        }
        else if (jenisPekerjaan == "insinyur")
        {
            if (pengalaman >= 5)
            {
                cout << "_____________________________________________________________________" << endl;
                cout << "\n\t\t\tAnda seorang insinyur" << endl;
                cout << "_____________________________________________________________________" << endl;
                cout << "dengan pengalaman\t\t : " << pengalaman << " tahun" << endl;
                cout << "_____________________________________________________________________" << endl;
                cout << "Gaji\t\t\t\t : Rp 85,000,000 per tahun." << endl;
            }
            else
            {
                cout << "Gaji\t\t\t\t : Rp 65,000,000 per tahun." << endl;
            }
        }
        else if (jenisPekerjaan == "desainer")
        {
            cout << "_____________________________________________________________________" << endl;
            cout << "\n\t\t\tAnda seorang desainer" << endl;
            cout << "_____________________________________________________________________" << endl;
            cout << "dengan pengalaman\t\t : " << pengalaman << " tahun" << endl;
            cout << "_____________________________________________________________________" << endl;
            if (pengalaman >= 3)
            {
                cout << "Gaji\t\t\t\t : Rp 60,000,000 per tahun." << endl;
            }
            else
            {
                cout << "Gaji\t\t\t\t : Rp 45,000,000 per tahun." << endl;
            }
        }
        else
        {
            cout << "Maaf, tidak ada informasi gaji untuk jenis pekerjaan tersebut." << endl;
        }
        cout << "_____________________________________________________________________" << endl;
        cout << "Apakah anda ingin mencoba lagi?"<<endl;
        cout << " y = ulangi program/n = selesai : ";
        cin >> ulang;
        cout << "_____________________________________________________________________" << endl;
        system("cls");
    } while (ulang == "y");
    cout << "\tterimakasih"<<endl;
    cout << "telah mencoba program kami"<<endl;

    return 0;
}
