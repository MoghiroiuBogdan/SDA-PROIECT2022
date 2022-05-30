#ifndef SDA_PROIECT2022_PRIETENIE_H
#define SDA_PROIECT2022_PRIETENIE_H
#include "string.h"


class prietenie{
private:
    string numePrieten;
    string numeUser;
public:
    prietenie() = default;

    prietenie(string np, string nU){
        this->numePrieten =  np;
        this->numeUser = nU;
    }

    ~prietenie() = default;

    string getNumePrieten(){
        return this->numePrieten;
    }

    string getNumeUser(){
        return this->numeUser;
    }

    void setNumePrieten(char *np){
        this->numePrieten = new char[strlen(np) + 1];
        this->numePrieten =  np;
    }

    bool operator ==(const prietenie &p){
        return((this->numePrieten ==  p.numePrieten) and (this->numeUser == p.numeUser));
    }

    friend ostream &operator<<(ostream &os,prietenie &p){
        os << p.numePrieten << ' '<<p.numeUser << endl;
        return os;
    }
};



#endif //SDA_PROIECT2022_PRIETENIE_H
