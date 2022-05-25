#ifndef SDA_PROIECT2022_USER_H
#define SDA_PROIECT2022_USER_H
#include "string.h"
#include <iostream>
using namespace std;

class User{
private:
    string name;
    string password;
public:
    User() = default;

    User(string n, string p){
        this->name = new char[n.length() + 1];
        this->name = n;

        this->password = new char[p.length() + 1];
        this->password = p;
    }

    User(User &u){
        this->name = new char[u.name.length() + 1];
        this->name = u.name;


        this->password = new char[u.password.length() + 1];
        this->password = u.password;
    }

    ~User() = default;

    string getName(){
        return this->name;
    }

    string getPassword(){
        return this->password;
    }


    void setName(string n){
//        if(this->name)
//            delete[] this->name;
        this->name = new char[n.length() + 1];
        this->name = n;
    }


    void setPassword(string p){
//        if(this->password)
//            delete[] this->password;

        this->password = new char[p.length() + 1];
        this->password = p;
    }

    bool operator==(const User &u) {
        return ((this->name == name) and (this->password == u.password));
    }

    friend ostream &operator<<(ostream &os, User &u) {
        os << u.name << ' ' << u.password << endl;
        return os;
    }

    User& operator = (const User &u){
        if(this != &u){
            this->name = u.name;
            this->password = u.password;
        }
        return *this;
    }

};


#endif //SDA_PROIECT2022_USER_H
