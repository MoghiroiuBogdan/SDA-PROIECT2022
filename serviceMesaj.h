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

    void AddMesaj(const char* i){
        mesaj m(i);
        this->repoMesaj.addMesaj(m);
    }

    Array<mesaj> getAll(){
        return this->repoMesaj.getAll();
    }

    int getNoService(){
        return this->repoMesaj.size();
    }
};



#endif //SDA_PROIECT2022_SERVICEMESAJ_H
