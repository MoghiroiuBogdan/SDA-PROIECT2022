#ifndef SDA_PROIECT2022_ARRAY_H
#define SDA_PROIECT2022_ARRAY_H
#include "user.h"

template<class T>

class Array{
private:
    T *element;
    int *nr;
    int nrElements;
    int maxCapacity;
public:
    Array(){
        this ->maxCapacity = 5;
        this->element = new T[this->maxCapacity];
        this->nr = new int(this->maxCapacity);
        this->nrElements = 0;
    }

    void AddItem(T elem){

        if(this->nrElements == this->maxCapacity) {
            this->maxCapacity *= 2;
            T *temp;
            int *tempOccurences;
            temp = new T[(this->maxCapacity)];
            tempOccurences = new int(this->maxCapacity);
            for (int i=0; i < this->nrElements; i++)
            {temp[i] = this->element[i];
                tempOccurences[i]= nr[i];}
            delete []nr;
            delete []element;
            element = temp;
            nr = tempOccurences;
            delete []tempOccurences;
            delete[]temp;
        }
        bool found = false;
        int position;
        for (int i=0;i<this->nrElements and !found; i++)
            if(this->element[i] == elem){
                found = true;
                position = i;}
        if (found)
            this->nr[position]++;
        else{
            this->element[nrElements] = elem;
            this->nr[nrElements] = 1;
            this->nrElements++;
        }

    }


    int size(){
        return this->nrElements;
    }

    T* getAll(){
        return this->element;
    }

    bool search(T elem) {
        for(int i=0;i<this->nrElements;i++)
            if(this->element[i] == elem)
                return true;
        return false;
    }

    bool remove(T elem) {
        if (!search(elem))
            return false;
        bool found = false;
        int position;
        for (int i=0; i < this->nrElements and !found;i++){
            if(element[i] == elem){
                position = i;
                found= true;
            }
        }
        if (nr[position] == 1){
            for (int i=position; i<this->nrElements;i++){
                this->element[i] = this->element[i+1];
                this->nr[i] = this->nr[i+1];
            }
            this->nrElements--;
        }
        else
            this->nr[position]--;
        return true;
    }

};


#endif //SDA_PROIECT2022_ARRAY_H
