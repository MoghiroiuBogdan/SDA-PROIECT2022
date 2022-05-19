#ifndef SDA_PROIECT2022_SERVICEPRIETENIE_H
#define SDA_PROIECT2022_SERVICEPRIETENIE_H
#include "RepositoryPrietenie.h"
#include "prietenie.h"

class ServicePrietenie{
private:
    RepositoryPrietenie repoPrieten;
public:
    ServicePrietenie()=default;
    ServicePrietenie(RepositoryPrietenie &r){
        this->repoPrieten = r;
    }

    ~ServicePrietenie() = default;

    void AddPrieten(char *nume){
        prietenie p(nume);
        this->repoPrieten.addPrieten(p);
    }

    prietenie* getAll(){
        return this->repoPrieten.getAll();
    }

    int getNoService(){
        return this->repoPrieten.size();
    }

    void deletePrietenie(char *nume){
        prietenie p(nume);
        this->repoPrieten.delPrietenie(p);
    }
};


#endif //SDA_PROIECT2022_SERVICEPRIETENIE_H
