#include <iostream>
using namespace std;

class dosen{
    public:
    string nama;
    void tampilNama(){
        cout << "namanya adalah " << nama << endl;
    }
};
class staff{
    public:
    int nidn;
};
int main(){
    dosen ds;
    ds.nama = "Giga";
    ds.tampilNama();

    dosen &dsref = ds;
    dsref.nama = "Joko";
    cout << "Alamat memori = " << &dsref << endl;
    dsref.tampilNama();

    dosen *pds = &ds;
    pds->nama = "Reza";
    cout << "Alamat memori = " << pds << endl;
    pds->tampilNama();

    int a = 5;
    int b = 3;
    int *c = &a;
    *c = 9;
    cout << endl;
    cout << a << endl;

      cout << "alamat memori a = " << &a << endl;
    cout << "alamat memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;
    c = &b;
    cout << "alamat memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;

    
}