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

    


}