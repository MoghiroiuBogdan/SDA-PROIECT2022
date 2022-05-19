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

    User* getAll(){
        return this->element.getAll();
    }

    int size(){
        return element.size();
    }

    void delUser(User &u){
        this->element.remove(u);
    }

//    User getUser(int id){
//        User u = this->element.getAll();
//        if(u.getId() == id)
//            return u;
//    }

};


#endif //SDA_PROIECT2022_REPOSITORYUSER_H
