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
    
        virtual void hunt(int baseKoin, int baseExp) = 0;

        virtual void info(){
            cout << "Nama : " << nama << endl;
            cout << "Koin : " << koin << endl;
            cout << "EXP : " << exp << endl;
        }
};

class PemainSolo : public Pemain{
    public:
        PemainSolo(string namaPemain, int ttPemain) : Pemain(namaPemain, ttPemain){}
        void hunt(int baseKoin, int baseExp) override{
           koin += baseKoin;
           exp += baseExp * (1 + tt); 
        }
};