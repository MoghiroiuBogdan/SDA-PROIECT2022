#ifndef SDA_PROIECT2022_MESAJ_H
#define SDA_PROIECT2022_MESAJ_H
#include "string.h"

class mesaj{
private:
    char *info;
public:
    mesaj(){
        this->info = nullptr;
    }

    mesaj(const char* i){
        this->info = new char[strlen(i) + 1];
        strcpy(this->info, i);
    }
    ~mesaj()=default;

    char* getInfo(){
        return this->info;
    }

    void setInfo(char* i){
        if(this->info)
            delete[] this->info;
        this->info = new char[strlen(i) + 1];
        strcpy(this->info, i);
    }

    bool operator ==(const mesaj &m){
        return (strcmp(this->info, m.info) == 0);
    }

    friend ostream &operator<<(ostream &os, mesaj &u) {
        os << u.info << endl;
        return os;
    }

};


#endif //SDA_PROIECT2022_MESAJ_H
