#ifndef SDA_PROIECT2022_USER_H
#define SDA_PROIECT2022_USER_H
#include "string.h"
#include <iostream>
using namespace std;

class User{
private:
    char *name;
    int id;
public:
    User(){
        this->name = nullptr;
        this->id = 0;
    }
    User(const char *n, int i){
//        if (this->name){
//            delete[] this->name;
//            this->name = nullptr;}
        this->name = new char[strlen(n) + 1];
        strcpy(this->name, n);
        this->id = i;
    }

    User(User &u){
//        if(this->name){
//            delete[] this->name;
//            this->name = nullptr;}
        this->name = new char[strlen(u.name) + 1];
        strcpy(this->name, u.name);
        this->id = u.id;
    }

    ~User() = default;

    char* getName(){
        return this->name;
    }

    int getId(){
        return this->id;
    }

    void setName(char *n){
        if(this->name)
            delete[] this->name;
        this->name = new char[strlen(n) + 1];
        strcpy(this->name, n);
    }

    void setId(int i){
        this->id = i;
    }

    bool operator==(const User &u) {
        return ((strcmp(this->name, u.name) == 0) and (this->id == u.id));
    }
    friend ostream &operator<<(ostream &os, User &u) {
        os << u.name << ' ' << u.id << endl;
        return os;
    }

//    User& operator = (const User &u){
//        if(this != &u){
//            if(this->name)
//                delete[] this->name;
//            this->name = new char[strlen(u.name) + 1];
//            strcpy(this->name, u.name);
//            this->id = u.id;
//        }
//        return *this;
//    }

};


#endif //SDA_PROIECT2022_USER_H
