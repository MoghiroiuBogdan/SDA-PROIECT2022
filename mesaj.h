#ifndef SDA_PROIECT2022_MESAJ_H
#define SDA_PROIECT2022_MESAJ_H
#include "string.h"

class mesaj{
private:
    string info;
    string user1;
    string user2;
public:
    mesaj() = default;

    mesaj(string i, string user1, string user2){
        this->info =  i;
        this->user1 = user1;
        this->user2 = user2;
    }
    ~mesaj()=default;

    string getInfo(){
        return this->info;
    }

    string getUser1(){
        return this->user1;
    }

    string getUser2(){
        return this->user2;
    }

    void setInfo(string i){
        this->info = new char[i.length() + 1];
        this->info = i;
    }

    void setUser1(string user1){
        this->user1 = user1;
    }

    void setUser2(string user2){
        this->user2 = user2;
    }

    bool operator == (const mesaj &m){
        return ((this->info ==  m.info) and (this->user1 == m.user1) and (this->user2 == m.user2));
    }

    friend ostream &operator<<(ostream &os, mesaj &u) {
        os << "to" <<' '<<u.user1<<' '<<"from"<<' '<<u.user2 <<' '<<"message: "<<u.info<<endl;
        return os;
    }

};


#endif //SDA_PROIECT2022_MESAJ_H
