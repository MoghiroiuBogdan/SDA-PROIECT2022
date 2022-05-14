#ifndef SDA_PROIECT2022_REPOSITORYUSER_H
#define SDA_PROIECT2022_REPOSITORYUSER_H
#include "array.h"
#include "user.h"

class Repo{
private:
    Array<User> element;
public:
    Repo(){
    }
    Repo(Repo &r){
        this->element = r.element;
    }

    void addUser(User &u){
        this->element.AddItem(u);
    }

    Array<User> getAll(){
        return Array<User>();
    }

    int size(){
        return element.size();
    }

};


#endif //SDA_PROIECT2022_REPOSITORYUSER_H
