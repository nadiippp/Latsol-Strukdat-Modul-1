#include <iostream>
using namespace std;

class Karakter{
    protected:
        string name;
        char tier;
        int hp;
        int attackPower;

    public:
        Karakter(string namaKarakter, char tierKarakter, int hpKarakter, int attackPowerKarakter){
            name = namaKarakter;
            tier = tierKarakter;
            hp = hpKarakter;
            attackPower = attackPowerKarakter;
        }
    
    // setter
    void setName(string namaKarakter){
        name = namaKarakter;
    }
    void setTier(char tierKarakter){
        tier = tierKarakter;
    }
    void setHp(int hpKarakter){
        hp = hpKarakter;
    }
    void setAttackPower(int AttackPowerKarakter){
        attackPower = AttackPowerKarakter;
    }

    // getter
    string getName(){
        return name;
    }
    char getTier(){
        return tier;
    }
    int getHp(){
        return hp;
    }
    int getAttackPower(){
        return attackPower;
    }

    virtual void displayInfo(){
        cout << "Nama Karakter: " << name << endl << "Tier : " << tier << endl << "HP : " << hp << endl << "Attack Power : " << attackPower << endl;
    }

    virtual void useSkill() = 0;
};

class Warrior : public Karakter{
    private:
    int stamina;
    
    public :
    Warrior(string namaKarakter, char tierKarakter, int hpKarakter, int attackPowerKarakter, int staminaKarakter)
     : Karakter(namaKarakter, tierKarakter, hpKarakter, attackPowerKarakter){
        stamina = staminaKarakter;
     }
    
     void useSkill() override{
        if (stamina >= 20){
            stamina = stamina - 20;
            cout << "karakter " << name << " menebas musuh dengan pedang" << endl;
        }
        else{
            cout << "Stamina " << name << "tidak cukup!" << endl;
        }
     }

     void displayInfo() override{
        Karakter::displayInfo();
        cout << "Stamina : " << stamina << endl;

     }
};

class Mage : public Karakter{
    private:
    int mana;
    
    public:
    Mage(string namaKarakter, char tierKarakter, int hpKarakter, int attackPowerKarakter, int manaKarakter)
    : Karakter(namaKarakter, tierKarakter, hpKarakter, attackPowerKarakter){
        mana = manaKarakter;
    }

    void useSkill() override{
        if (mana >= 30){
            mana = mana - 30;
            cout << "Karakter " << name << "menggunakan Elemental Burst!" << endl;
        }
        else{
            cout << "Mana" << name << "tidak cukup!" << endl;
        }
    }

    void displayInfo() override{
        Karakter::displayInfo();
        cout << "Mana : " << mana << endl;
    }
};

int main(){
    
}