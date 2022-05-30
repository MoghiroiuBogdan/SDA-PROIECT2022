#ifndef SDA_PROIECT2022_ARBORE_H
#define SDA_PROIECT2022_ARBORE_H
#include "arboreNode.h"
#include "vector"
template<class T>
class ABC {
private:
    ABCNode<T> *root;
    T* all;
    void add(ABCNode<T> *ad, T* elem) {
        ///adauga  elem in arbore
        if (ad->info > elem) { // adaugam pe stanga
            if (ad->left != nullptr) {
                add(ad->left, elem);
            } else {
                ad->left = new ABCNode<T>(elem, nullptr, nullptr);
            }
        } else {  //adaugam in dreapta
            if (ad->right != nullptr) {
                add(ad->right, elem);
            } else {
                ad->right = new ABCNode<T>(elem, nullptr, nullptr);
            }
        }

    }

    ABCNode<T> *min(ABCNode<T> *ad) {
        /// returneaza elementuk minim din arbore
        ABCNode<T> *min = ad;
        while (ad->left != nullptr) {
            min = ad->left;
            ad = ad->left;
        }
        return min;
    }

    void stergere_noduri(ABCNode<T> *ad) {
        ///sterge toate nodurile arborelui
        if (ad != nullptr ) {
            stergere_noduri(ad->left);
            stergere_noduri(ad->right);
            delete ad;
        }


    }

    ABCNode<T> *del(ABCNode<T> *ad, T elem) {
        ///sterge elem din arbore
        if (ad->info > elem) {
            ad->left = del(ad->left, elem);
            return ad;
        } else if (ad->info < elem) {
            ad->right = del(ad->right, elem);
            return ad;

        } else {
            if (ad->left == nullptr && ad->right == nullptr) {
                ABCNode<T> *p = ad;
                delete p;
                return nullptr;
            } else if (ad->left != nullptr && ad->right == nullptr) {
                ABCNode<T> *p = ad;
                ABCNode<T>* aux;
                aux = ad->left;
                delete p;
                return aux;
            } else if (ad->left == nullptr && ad->right != nullptr) {
                ABCNode<T> *p = ad;
                ABCNode<T>* aux;
                aux= ad->right;
                delete p;
                return aux;
            } else if (ad->left != nullptr && ad->right != nullptr) {

                ad->info = min(ad->right)->info;
                ad->right = del(ad->right, ad->info);

            }
        }
    }

    void afisareIN(ABCNode<T> *ad) {
        ///afiseaza reprezentarea arborelui crescator
        if (ad != nullptr) {
            afisareIN(ad->left);
            cout << ad->info << endl;
            afisareIN(ad->right);
        }
    }

    bool search(ABCNode<T> *ad, T elem) {
        ///verifica daca elem se afla in arbore
        if (this->root == nullptr)
            return false;
        if (ad->info == elem)
            return true;
        if (ad->info > elem) {
            if (ad->left != nullptr) {
                return search(ad->left, elem);
            } else {
                return false;

            }
        } else {
            if (ad->right != nullptr) {
                return search(ad->right, elem);
            } else {
                return false;
            }
        }


    }
    void getAll(ABCNode<T> *ad)
    {
        if (ad != nullptr) {
            getAll(ad->left);
            all->push_back(ad->info);
            getAll(ad->right);
        }
    }

public:
    explicit ABC(ABCNode<T> *root)
    {
        getAll(root);
        root = nullptr;
        for(int i=0;i<all->size();i++)
            add(all[i]);
        all->clear();
    }
//    ABC<T>& operator=(const  ABC<T> &ad)
//    {
//        ///operator de atribuire
//        getAll(ad.root);
//        root = nullptr;
//        for(int i=0;i<all;i++)
//            add(all[i]);
//        all->clear();
//        return *this;
//    }

    ABC() {
        ///constrctor fara parametri
        this->root = nullptr; }
    ~ABC()
    {
        ///destructor
        stergere_noduri(root);

    }
    bool search(T elem)
    {
        return search(root, elem);
    }

    void del(T elem)
    {
        this->root=del(root, elem);

    }
    void add(T &elem){
        if(this->root == nullptr)
            this->root = new ABCNode<T>(elem, nullptr, nullptr);
        else add(this->root, elem);
    }

    void afisare(){
        afisareIN(this->root);
    }
    T* getAll()
    {
        /// returneaza un vector de T cu toate elementele din arbore
        all->clear();
        getAll(root);
        return all;
    }

    int size(){
        return this->all.size();
    }


};







#endif //SDA_PROIECT2022_ARBORE_H
