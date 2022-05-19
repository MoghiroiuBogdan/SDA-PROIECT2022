#ifndef SDA_PROIECT2022_USERINTERFACE_H
#define SDA_PROIECT2022_USERINTERFACE_H
#include "serviceUser.h"
#include "serviceMesaj.h"
#include "servicePrietenie.h"
#include <iostream>
#include <string.h>
using namespace std;


class ui{
private:
    Service service;
    ServiceMesaj serviceMesaj;
    ServicePrietenie servicePrietenie;
public:
    ui(){

    }
    ui(Service &s, ServiceMesaj &sm, ServicePrietenie &sp){
        this->service = s;
        this->serviceMesaj = sm;
        this->servicePrietenie = sp;
    }
    void showDisplay(){
        cout<<"1. CRUD user: "<<endl;
        cout<<"2. CRUD mesaj: "<<endl;
        cout<<"3. CRUD prietenie: "<<endl;
        cout<<"4. exit!"<<endl;
    }

    void showDisplayMesaj(){
        while(true){
            cout<<"1. adauga mesaj: "<<endl;
            cout<<"2. arata mesaj: "<<endl;
            cout<<"3. sterge mesaj: "<<endl;
            cout<<"4. exit!"<<endl;

            int option;
            cout<<"dati optiunea: "<<endl;
            cin >> option;

            if(option == 1) {
                cout << "scrieti mesajul: " << endl;
                char *u;
                u = new char[100];
                cin.get();
                cin.get(u, 100);
                this->serviceMesaj.AddMesaj(u);
            }
            else if(option == 2){
                mesaj *mesaj;
                mesaj = this->serviceMesaj.getAll();
                for(int i=0;i<this->serviceMesaj.getNoService();i++)
                    cout << mesaj[i];

            }
            else if(option == 3){
                cout<<"scrieti mesajul pe care doriti sa il stergeti: "<<endl;
                char *m = new char[100];
                this->serviceMesaj.deleteMesaj(m);
            }
            else if (option == 4)
                break;
        }
    }

    void showDisplayUser(){
        while(true){
            cout<<"1. adauga user: "<<endl;
            cout<<"2. sterge user: "<<endl;
            cout<<"3. arata user: "<<endl;
            cout<<"4. exit!"<<endl;

            int option;
            cout<<"dati optiunea: "<<endl;
            cin >> option;

            if(option == 1) {
                cout << "dati numele userlui: " << endl;
                char *u;
                u = new char[100];
                cin.get();
                cin.get(u, 100);
                cout << "dati id ul: " << endl;
                int i;
                cin >> i;
                this->service.addElem(u, i);
            }
            else if(option == 2){
                cout<<"dati id ul userlului pe care doriti sa il stergeti: "<<endl;
                int id;
                cin >> id;
                cout<<"dati numele ul userlului pe care doriti sa il stergeti: "<<endl;
                char *nume;
                nume = new char[100];
                cin >> nume;
                this->service.deleteElem(nume, id);

            }
            else if(option == 3){
                User *u;
                u = this->service.getAll();
                for(int i=0;i < this->service.getNoService();i++)
                    cout << u[i];
            }
            else if (option == 4)
                break;
        }
    }

    void showDisplayPrieten(){
        while(true){
            cout<<"1. adauga prieten: "<<endl;
            cout<<"2. arata prieten: "<<endl;
            cout<<"3. sterge prieten: "<<endl;
            cout<<"4. exit!"<<endl;

            int option;
            cout<<"dati optiunea: "<<endl;
            cin >> option;

            if(option == 1) {
                cout << "numele prietenului: " << endl;
                char *u;
                u = new char[100];
                cin.get();
                cin.get(u ,100);
                this->servicePrietenie.AddPrieten(u);
            }
            else if(option == 2){
                prietenie *p;
                p = this->servicePrietenie.getAll();
                for(int i=0;i<this->servicePrietenie.getNoService();i++)
                    cout << p[i];
            }
            else if(option == 3){
                cout<<"dati numele prietenului pe care doriti sa l stergeti: "<<endl;
                char *n = new char[100];
                cin >> n;
                this->servicePrietenie.deletePrietenie(n);
            }

            else if (option == 4)
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
            else if (option == 3){
                showDisplayPrieten();
            }
            else if (option == 4)
                break;
        }

    }
};





#endif //SDA_PROIECT2022_USERINTERFACE_H
