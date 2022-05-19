#ifndef SDA_PROIECT2022_REPOSITORYPRIETENIE_H
#define SDA_PROIECT2022_REPOSITORYPRIETENIE_H
#include "prietenie.h"
#include "array.h"

class RepositoryPrietenie{
private:
    Array<prietenie> element;
public:
    RepositoryPrietenie() = default;
    RepositoryPrietenie(RepositoryPrietenie &rp){
        this->element = rp.element;
    }
    ~RepositoryPrietenie() = default;
    void addPrieten(prietenie &p){
        this->element.AddItem(p);
    }
    int size(){
        return this->element.size();
    }
    prietenie *getAll(){
        return this->element.getAll();
    }
    void delPrietenie(prietenie &p){
        this->element.remove(p);
    }
};



#endif //SDA_PROIECT2022_REPOSITORYPRIETENIE_H
