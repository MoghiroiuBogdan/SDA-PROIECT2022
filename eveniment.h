#ifndef SDA_PROIECT2022_EVENIMENT_H
#define SDA_PROIECT2022_EVENIMENT_H
#include "iostream"
#include "cstring"
using namespace std;
class Eveniment{
private:
    string status;
public:
    Eveniment() = default;

    Eveniment(string s){
        this->status = s;
    }

    Eveniment(Eveniment &e){
        this->status = e.status;
    }

    ~Eveniment() = default;

    string getStatus(){
        return this->status;
    }

    void setStatus(string s){
        this->status = new char[s.length() + 1];
        this->status = s;
    }

    bool operator==(const Eveniment &e){
        return(this->status == e.status);
    }
};




#endif //SDA_PROIECT2022_EVENIMENT_H
