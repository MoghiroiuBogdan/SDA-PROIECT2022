#ifndef SDA_PROIECT2022_REPOSITORYEVENIMENT_H
#define SDA_PROIECT2022_REPOSITORYEVENIMENT_H
#include "array.h"
#include "eveniment.h"

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
        this->element.AddItem(e);
    }

    void deleteItem(Eveniment &e){
        this->element.remove(e);
    }

    Eveniment *getAll(){
        return this->element.getAll();
    }

    int size(){
        return this->element.size();
    }
};




#endif //SDA_PROIECT2022_REPOSITORYEVENIMENT_H
