#ifndef SDA_PROIECT2022_BSC_H
#define SDA_PROIECT2022_BSC_H
#include "iostream"
using namespace std;

template <class T>

class BinarySearch{
private:
    T data;
    BinarySearch *left, *right;
public:
    BinarySearch() = default;

    BinarySearch(T elem){
        data = elem;
        left = right = NULL;
    }

    BinarySearch* add(BinarySearch* arbore, T elem){
        if(!arbore)//inseram primul nod
            return new BinarySearch(elem);
        if(elem > arbore->data)
            arbore->right = add(arbore->right, elem);//adaugam la dreapte
        else
            arbore->left = add(arbore->left, elem);//adaugam la stanga

        return arbore;
    }

    void inOrder(BinarySearch *arbore){
        //sortarea arborelui
        if(!arbore)
            return;
        inOrder(arbore->left);
        cout<<arbore->data<<endl;
        inOrder(arbore->right);
    }
};


#endif //SDA_PROIECT2022_BSC_H
