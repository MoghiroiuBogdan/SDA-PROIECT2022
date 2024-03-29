#ifndef SDA_PROIECT2022_ARBORENODE_H
#define SDA_PROIECT2022_ARBORENODE_H
#include<iostream>
using namespace std;
template<typename T>
class ABC;

template<class T>
class ABCNode{
private:
    T info;
    ABCNode<T>* left;
    ABCNode<T>* right;
public:

    ABCNode(T info) : info(info) {this->left = nullptr, this->right = nullptr;}

    ABCNode(T info, ABCNode<T> *left, ABCNode<T> *right) : info(info), left(left), right(right) {}

    friend class ABC<T>;
};



#endif //SDA_PROIECT2022_ARBORENODE_H
