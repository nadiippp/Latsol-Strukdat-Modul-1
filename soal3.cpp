#include <iostream>
using namespace std;

class Pemain{
    protected:
        string nama;
        int koin, exp, tt;
    
    public:
        Pemain(string namaPemain, int ttPemain){
            nama = namaPemain;
            tt = ttPemain;
            koin = 0;
            exp = 0;
        }
    
        virtual void hunt() = 0;

        virtual void info(){
            cout << "Nama : " << nama << endl;
            cout << "Koin : " << koin << endl;
            cout << "EXP : " << exp << endl;
        }
};