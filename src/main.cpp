#include <bits/stdc++.h>
using namespace std;

// Mencari nilai mean pada data tunggal
float mean(float arr[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum / n;
}
// Penjelasan tentang mean
void mean()
{
    cout << "========================================================" << endl;
    cout << "--------------------------MEAN--------------------------" << endl;
    cout << "Mean adalah nilai rata-rata dari suatu data." << endl;
    cout << "Untuk menentukan nilai mean pada data tunggal kita harus" << endl;
    cout << "menghitung jumlah dari seluruh data dibagi dengan panjang data" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "adapun rumus nya : " << endl;
    cout << "\t𝑥̅ = ∑ x / n" << endl;
    cout << "   Keterangan : " << endl;
    cout << "\t𝑥̅ = rerata atau mean" << endl;
    cout << "\tn = banyaknya data" << endl;
    cout << "\t∑ x = jumlah seluruh data" << endl;
    cout << "========================================================" << endl;
}
// Mencari niali median pada data tunggal
float median(float arr[], int n)
{

    // menyusunkan array secara ascending
    sort(arr, arr + n);

    if (n % 2 == 0)
        return (arr[n / 2 - 1] + arr[n / 2]) / 2;

    return arr[n / 2];
}
// penjelasan tentang median
void median()
{
    cout << "========================================================" << endl;
    cout << "--------------------------MEDIAN------------------------" << endl;
    cout << "Median (Me) atau kuartil adalah nilai tengah dari sekumpulan" << endl;
    cout << "data setelah diurutkan dari data yang terkecil sampai data terbesar" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "   1. Jika Panjang data adalah ganjil maka : " << endl;
    cout << "\tMe = ½ (n + 1)" << endl;
    cout << "   2. Jika Panjang data adalah genap maka : " << endl;
    cout << "\tMe = (n/2  + n/2 + 1) / 2" << endl;
    cout << "   Keterangan : " << endl;
    cout << "\tn = panjang data" << endl;
    cout << "========================================================" << endl;
}
// mencari nilai modus pada data tunggal
float modus(float arr[], int n)
{

    // menyusunkan array secara ascending
    sort(arr, arr + n);

    // Mencari data yang paling sering muncul
    int max_count = 1, res = arr[0], count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        else
        {
            if (count > max_count)
            {
                max_count = count;
                res = arr[i - 1];
            }
            count = 1;
        }
    }

    // jika yang paling sering muncul adalah data terakhir
    if (count > max_count)
    {
        max_count = count;
        res = arr[n - 1];
    }

    return res;
}
// penjelasan tentang modus
void modus()
{
    cout << "========================================================" << endl;
    cout << "--------------------------MODUS-------------------------" << endl;
    cout << "Modus adalah data yang paling sering muncul. Modus merupakan ukuran" << endl;
    cout << "pemusatan untuk uenyatakan fenomena yang paling banyak terjadi." << endl;
    cout << "Sekumpulan data yang diperoleh, memungkinkan untuk memiliki nilai modus" << endl;
    cout << "yang tidak tunggal atau mungkin juga tidak memilikinya." << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Pada modus data tunggal tidak memiliki rumus yang spesifik" << endl;
    cout << "Kita hanya perlu mengurutkan terlebih dahulu nilai datanya" << endl;
    cout << "secara ascending, kemudian mencari nilai yang paling sering muncul" << endl;
    cout << "========================================================" << endl;
}
// menampilkan hasil mean,median dan modus
void calculateData()
{
    int n;
    float arr[50];

    cout << "Masukkan Panjang Data : ";
    cin >> n;
    cout << "Masukkan Nilai Tiap Data : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "========================================================" << endl;
    cout << "Data anda : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "========================================================" << endl;
    cout << "Nilai Mean Dari Data Anda Adalah : " << mean(arr, n) << endl;
    cout << "Nilai Median Dari Data Anda Adalah : " << median(arr, n) << endl;
    cout << "Nilai Modus Dari Data Anda Adalah : " << modus(arr, n) << endl;
}
// tampilan menu
void menu()
{
    while (true)
    {
        int input;
        cout << "Kalkulator Mean, Median dan Modus" << endl;

        cout << "MENU" << endl;
        cout << 1 << ". Apa itu Mean" << endl;
        cout << 2 << ". Apa itu Median" << endl;
        cout << 3 << ". Apa Modus" << endl;
        cout << 4 << ". Menentukan Nilai Mean, Median dan Modus" << endl;
        cout << 0 << ". Keluar" << endl;
        cout << "Masukan Pilihan : ";
        cin >> input;
        if (input == 1)
        {
            mean();
        }
        else if (input == 2)
        {
            median();
        }
        else if (input == 3)
        {
            modus();
        }
        else if (input == 4)
        {
            calculateData();
            break;
        }
        else if (input == 0)
        {
            break;
        }
        else
        {
            cout << "Masukkan pilihan yang ada!" << endl;
        }
    }
}

int main()
{
    menu();
    return 0;
}