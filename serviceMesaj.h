#ifndef SDA_PROIECT2022_SERVICEMESAJ_H
#define SDA_PROIECT2022_SERVICEMESAJ_H
#include "RepositoryMesaj.h"
#include "mesaj.h"
class ServiceMesaj{
private:
    RepositoryMesaj repoMesaj;
public:
    ServiceMesaj(){
    }

    ServiceMesaj(RepositoryMesaj &r){
        this->repoMesaj = r;
    }

    ~ServiceMesaj()=default;

    void AddMesaj(string i, string user1, string user2){
        mesaj m(i, user1, user2);
        this->repoMesaj.addMesaj(m);
    }

    mesaj* getAll(){
        return this->repoMesaj.getAll();
    }

    int getNoService(){
        return this->repoMesaj.size();
    }

    void deleteMesaj(string i, string user1, string user2){
        mesaj m(i, user1, user2);
        this->repoMesaj.delMesaj(m);
    }
};



#endif //SDA_PROIECT2022_SERVICEMESAJ_H
