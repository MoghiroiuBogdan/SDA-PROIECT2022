#ifndef SDA_PROIECT2022_SERVICE_H
#define SDA_PROIECT2022_SERVICE_H
#include "Repository.h"
#include "user.h"

class Service{
private:
    Repo repo;
public:
    Service(){
    }

    Service(Repo &r){
        this->repo = r;
    }
    void addElem(const char *u, int i){
        User U(u, i);
        this->repo.addUser(U);
    }
    Array<User> getAll(){
        return this->repo.getAll();
    }

    int getNoService(){
        return this->repo.size();
    }
};


#endif //SDA_PROIECT2022_SERVICE_H
