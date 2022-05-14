#ifndef SDA_PROIECT2022_REPOSITORYMESAJ_H
#define SDA_PROIECT2022_REPOSITORYMESAJ_H
#include "mesaj.h"
#include "array.h"
class RepositoryMesaj{
private:
    Array<mesaj> element;
public:
    RepositoryMesaj(){
    }
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
    Array<mesaj> getAll(){
        return Array<mesaj>();
    }
};



#endif //SDA_PROIECT2022_REPOSITORYMESAJ_H
