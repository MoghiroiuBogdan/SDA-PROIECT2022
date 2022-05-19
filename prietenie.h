#ifndef SDA_PROIECT2022_PRIETENIE_H
#define SDA_PROIECT2022_PRIETENIE_H
#include "string.h"


class prietenie{
private:
    char *numePrieten;
public:
    prietenie(){
        this->numePrieten = nullptr;
    }
    prietenie(const char* np){
        this->numePrieten = new char[strlen(np) + 1];
        strcpy(this->numePrieten, np);
    }

    ~prietenie() = default;

    char *getNumePrieten(){
        return this->numePrieten;
    }

    void setNumePrieten(char *np){
        if(this->numePrieten)
            delete[] this->numePrieten;
        this->numePrieten = new char[strlen(np) + 1];
        strcpy(this->numePrieten, np);
    }

    bool operator ==(const prietenie &p){
        return (strcmp(this->numePrieten, p.numePrieten) == 0);
    }

    friend ostream &operator<<(ostream &os,prietenie &p){
        os << p.numePrieten << endl;
        return os;
    }
};



#endif //SDA_PROIECT2022_PRIETENIE_H
