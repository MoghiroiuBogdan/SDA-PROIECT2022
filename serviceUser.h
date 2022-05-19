#ifndef SDA_PROIECT2022_SERVICEUSER_H
#define SDA_PROIECT2022_SERVICEUSER_H
#include "RepositoryUser.h"
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
    User* getAll(){
        return this->repo.getAll();
    }

    int getNoService(){
        return this->repo.size();
    }

    void deleteElem(const char *uk, int id){
        User u(uk, id);
        this->repo.delUser(u);
    }
};


#endif //SDA_PROIECT2022_SERVICEUSER_H
