#ifndef SDA_PROIECT2022_SERVICEEVENIMENT_H
#define SDA_PROIECT2022_SERVICEEVENIMENT_H
#include "repositoryEveniment.h"

class ServiceEveniment{
private:
    RepositoryEveniment repoEvent;
public:
    ServiceEveniment() = default;

    ServiceEveniment(RepositoryEveniment &re){
        this->repoEvent = re;
    }

    ~ServiceEveniment() = default;

    void AddItem(string s){
        Eveniment e(s);
        this->repoEvent.AddItem(e);
    }

    void deleteItem(string s ){
        Eveniment e(s);
        this->repoEvent.deleteItem(e);
    }

    Eveniment *getAll(){
        return this->repoEvent.getAll();
    }

    int getNoService(){
        return this->repoEvent.size();
    }
};



#endif //SDA_PROIECT2022_SERVICEEVENIMENT_H
