#ifndef SDA_PROIECT2022_USERINTERFACE_H
#define SDA_PROIECT2022_USERINTERFACE_H
#include "serviceUser.h"
#include "serviceMesaj.h"
#include "iostream"
using namespace std;


class ui{
private:
    Service service;
    ServiceMesaj serviceMesaj;
public:
    ui(){

    }
    ui(Service &s, ServiceMesaj &sm){
        this->service = s;
        this->serviceMesaj = sm;
    }
    void showDisplay(){
        cout<<"1. CRUD user: "<<endl;
        cout<<"2. CRUD mesaj: "<<endl;
        cout<<"3. exit!"<<endl;
    }

    void showDisplayMesaj(){
        while(true){
            cout<<"1. adauga mesaj: "<<endl;
            cout<<"2. arata mesaj: "<<endl;
            cout<<"3. exit!"<<endl;

            int option;
            cout<<"dati optiunea: "<<endl;
            cin >> option;

            if(option == 1) {
                cout << "scrieti mesajul: " << endl;
                char *u;
                u = new char[100];
                cin >> u;
                this->serviceMesaj.AddMesaj(u);
            }
            else if(option == 2){
                Array<mesaj> mes;
            }
            else if (option == 3)
                break;
        }
    }

    void showDisplayUser(){
        while(true){
            cout<<"1. adauga user: "<<endl;
            cout<<"2. arata user: "<<endl;
            cout<<"3. exit!"<<endl;

            int option;
            cout<<"dati optiunea: "<<endl;
            cin >> option;

            if(option == 1) {
                cout << "dati numele userlui: " << endl;
                char *u;
                u = new char[100];
                cin >> u;
                cout << "dati id ul: " << endl;
                int i;
                cin >> i;
                this->service.addElem(u, i);
            }
            else if(option == 2){
                Array<User> u;
            }
            else if (option == 3)
                break;
        }
    }

    void runMenu(){
        while(true){
            showDisplay();

            int option;
            cout<<"dati optiunea: "<<endl;
            cin >> option;

            if(option == 1)
                showDisplayUser();
            else if(option == 2){
                showDisplayMesaj();
            }
            else if (option == 3)
                break;
        }

    }
};





#endif //SDA_PROIECT2022_USERINTERFACE_H
