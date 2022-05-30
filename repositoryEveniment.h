#ifndef SDA_PROIECT2022_REPOSITORYEVENIMENT_H
#define SDA_PROIECT2022_REPOSITORYEVENIMENT_H
#include "array.h"
#include "eveniment.h"
#include "bsc.h"

class RepositoryEveniment{
private:
    Array<Eveniment> element;
public:
    RepositoryEveniment() = default;

    RepositoryEveniment(const RepositoryEveniment &re){
        this->element = re.element;
    }

    ~RepositoryEveniment() = default;

    void AddItem(Eveniment &e){
        ///adaugare o entitate de tip Eveniment
        this->element.AddItem(e);
    }

    void deleteItem(Eveniment &e){
        ///stegerea unei entitati de tip Eveniment
        this->element.remove(e);
    }

    Eveniment *getAll(){
        ///retunreaza toate elementele
        return this->element.getAll();
    }

    int size(){
        ///returneaza dimensiunea entitatii
        return this->element.size();
    }
};




#endif //SDA_PROIECT2022_REPOSITORYEVENIMENT_H
