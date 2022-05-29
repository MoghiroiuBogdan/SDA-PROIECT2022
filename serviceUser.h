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
    void addElem(string u, string p){
        User U(u, p);
        this->repo.addUser(U);
    }
    User* getAll(){
        return this->repo.getAll();
    }

    int getNoService(){
        return this->repo.size();
    }

    void deleteElem(const char *uk, char* p){
        User u(uk, p);
        this->repo.delUser(u);
    }

    void updateElem(string uv, string pv,string un,string pn){
        User Uv(uv, pv);
        User Un(un, pn);
        this->repo.updateUser(Uv, Un);
    }

    bool verifyUser(string username, string password){
        User *u = this->repo.getAll();

        for(int i=0;i<this->getNoService();i++)
            if(username == u[i].getName() and password == u[i].getPassword())
                return true;
        return false;
    }
};


#endif //SDA_PROIECT2022_SERVICEUSER_H
