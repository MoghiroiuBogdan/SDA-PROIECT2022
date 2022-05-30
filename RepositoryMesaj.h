#ifndef SDA_PROIECT2022_REPOSITORYMESAJ_H
#define SDA_PROIECT2022_REPOSITORYMESAJ_H
#include "mesaj.h"
#include "array.h"
class RepositoryMesaj{
private:
    Array<mesaj> element;
public:
    RepositoryMesaj() = default;

    RepositoryMesaj(const RepositoryMesaj &r){
        this->element = r.element;
    }
    ~RepositoryMesaj()=default;

    void addMesaj(mesaj &m){
        this->element.AddItem(m);
    }

    int size(){
        return this->element.size();
    }
    mesaj* getAll(){
        return this->element.getAll();
    }

    void delMesaj(mesaj &m){
        this->element.remove(m);
    }
};



#endif //SDA_PROIECT2022_REPOSITORYMESAJ_H
