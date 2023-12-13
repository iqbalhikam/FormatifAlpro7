#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Barang
{
    int kodeProduk;
    string namaproduk;
    int jumlah;
    float harga;
};

int main()
{
    // Informasi Pribadi 4
    string nama4 = "M. Iqbal Fatkhul Hikam";
    string nim4 = "2023310004";
    string jurusan4 = "Teknik Informatika";
    string prody4 = "Informatika";
    string coba_lagi;
    do
    {
        // Tampilkan Informasi Pribadi 4
        cout << "Nama           : " << nama4 << endl;
        cout << "NIM            : " << nim4 << endl;
        cout << "Jurusan        : " << jurusan4 << endl;
        cout << "Prody          : " << prody4 << endl;
        cout << "===================================" << endl;

        // Menampilkan Daftar produk
        cout << "_____________________________________" << endl;
        cout << "|  Selamat datang di toko kami!     |" << endl;
        cout << "_____________________________________" << endl;
        cout << "|     Daftar produk:                |" << endl;
        cout << "|  1. Buku      : Rp. 5.000         |" << endl;
        cout << "|  2. Pensil    : Rp. 2.000         |" << endl;
        cout << "|  3. bolpoin   : Rp. 10.000        |" << endl;
        cout << "|  4. Penghapus : Rp. 10.000        |" << endl;
        cout << "|  5. kamus     : Rp. 10.000        |" << endl;
        cout << "_____________________________________" << endl;

        // Menerima input dari pengguna
        vector<Barang> daftarBarang; // Gunakan vektor untuk menyimpan barang-barang yang dibeli
        string ulang;
        do
        {
            Barang barang;
            cout << "Masukkan kode produk: ";
            cin >> barang.kodeProduk;
            cout << "Masukkan jumlah: ";
            cin >> barang.jumlah;

            while (barang.kodeProduk != -5)
            {
            cout << "Masukkan kode produk: ";
            cin >> barang.kodeProduk;
            cout << "Masukkan jumlah: ";
            cin >> barang.jumlah
            }
            

            // Mencari harga produk

            switch (barang.kodeProduk)
            {
            case 1:
                barang.namaproduk = "Buku";
                barang.harga = 5000;
                break;
            case 2:
                barang.namaproduk = "Pensil";
                barang.harga = 2000;
                break;
            case 3:
                barang.namaproduk = "Bolpoin";
                barang.harga = 10000;
                break;
            case 4:
                barang.namaproduk = "Penghapus";
                barang.harga = 10000;
                break;
            case 5:
                barang.namaproduk = "Kamus";
                barang.harga = 10000;
                break;
            default:
                cout << "Kode produk tidak valid." << endl;
                
                return 0;
            }

            // Menambahkan barang ke daftar
            daftarBarang.push_back(barang);

            cout << "Tambah barang? (y/n): ";
            cin >> ulang;
        } while (ulang == "y");
        system("cls");

        // Menghitung total harga
        float totalHarga = 0;
        for (const Barang &barang : daftarBarang)
        {
            totalHarga += barang.harga * barang.jumlah;
        }

        // Menentukan diskon jika total harga mencapai atau melebihi 1 juta
        float diskon = 0.0;
        if (totalHarga >= 1000000)
        {
            diskon = 0.1; // Misalnya, diskon 10%
            cout << "Selamat! Anda mendapatkan diskon 10% karena total pembelian mencapai atau melebihi 1 juta." << endl;

            // Konversi totalHarga menjadi angka dan huruf
            int angka = static_cast<int>(totalHarga);
            string huruf;

            // Logika konversi ke huruf (sesuaikan sesuai kebutuhan)
            // Contoh sederhana: 1,000,000 -> "Satu Juta"
            if (angka == 1000000)
            {
                huruf = "Satu Juta";
            }
            else
            {
                // Logika konversi lebih kompleks dapat ditambahkan di sini
                huruf = "Format huruf tidak diimplementasikan untuk angka ini.";
            }

            // Menampilkan hasil konversi
            cout << "Total harga dalam huruf: " << huruf << endl;
        }

        // Menampilkan total harga setelah diskon
        cout << "Total harga sebelum diskon: Rp." << fixed << setprecision(0) << totalHarga << endl;
        cout << "_____________________________________" << endl;
        totalHarga -= totalHarga * diskon; // Menghitung total harga setelah diskon
        cout << "Total harga setelah diskon: Rp." << fixed << setprecision(0) << totalHarga << endl;
        cout << "=====================================" << endl;

        // Meminta input nominal pembayaran
        float pembayaran;
        cout << "Masukkan nominal pembayaran: Rp.";
        cin >> pembayaran;
        cout << "=====================================" << endl;
        while (pembayaran < totalHarga)
        {
            cout << "Maaf uang anda kurang : Rp.";
            cin >> pembayaran;
            cout << "=====================================" << endl;
        }

        // Menghitung kembalian
        float kembalian = pembayaran - totalHarga;

        // Menampilkan kembalian
        cout << "Kembalian: Rp." << kembalian << endl;
        cout << "_____________________________________" << endl;
        system("cls");

        // Menampilkan struk belanja
        cout << "=====================================" << endl;
        cout << "               STRUK               " << endl;
        cout << "=====================================" << endl;
        cout << setw(4) << "barang" << setw(10) << "Jumlah" << setw(15) << "Harga" << endl;
        cout << "-------------------------------------" << endl;

        for (const Barang &barang : daftarBarang)
        {
            cout << setw(4) << barang.namaproduk << setw(10) << barang.jumlah << fixed << setprecision(0) << setw(15) << "Rp." << barang.harga * barang.jumlah << endl;
        }

        cout << "-------------------------------------" << endl;
        cout << setw(19) << "Total Harga" << setw(10) << "Rp." << totalHarga << endl;
        cout << setw(19) << "Pembayaran" << setw(10) << "Rp." << pembayaran << endl;
        cout << setw(19) << "Kembalian" << setw(10) << "Rp." << kembalian << endl;
        cout << "=====================================" << endl;
        cout << "         Terima kasih telah          " << endl;
        cout << "      berbelanja di toko kami!       " << endl;
        cout << "=====================================" << endl;
        cout << "\n\n\napakah anda ingin transaksi lagi?(1.iya/selesai)";
        cin >> coba_lagi;
        system("cls");
    } while (coba_lagi == "1");
    cout << "\t\t\tterimakasih telah mecoba program kami!\n\nprogram ini masih dalam tahap pengembangan, jadi mohon maaf jika masih ada kekurangan dalam program kasir ini\n\t\t\tsampaijupa di program kasir v2\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

    return 0;
}
