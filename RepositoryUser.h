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

    void updateUser(User &uv, User &un){
        User *user;
        user = this->element.getAll();

        for(int i=0;i<this->element.size();i++)
            if(user[i] == uv)
                delUser(uv);

        addUser(un);

    }


};


#endif //SDA_PROIECT2022_REPOSITORYUSER_H
