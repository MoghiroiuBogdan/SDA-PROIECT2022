#ifndef SDA_PROIECT2022_USERINTERFACE_H
#define SDA_PROIECT2022_USERINTERFACE_H
#include "serviceUser.h"
#include "serviceMesaj.h"
#include "servicePrietenie.h"
#include "serviceEveniment.h"
#include <iostream>
#include <cstring>
using namespace std;


class ui{
private:
    Service service;
    ServiceMesaj serviceMesaj;
    ServicePrietenie servicePrietenie;
    ServiceEveniment serviceEveniment;
public:
    ui(){

    }
    ui(Service &s, ServiceMesaj &sm, ServicePrietenie &sp, ServiceEveniment &se){
        this->service = s;
        this->serviceMesaj = sm;
        this->servicePrietenie = sp;
        this->serviceEveniment = se;
    }
    void showDisplay(){
        cout<<"1. register"<<endl;
        cout<<"2. login"<<endl;
        cout<<"3. exit!"<<endl;
    }


    void registerUser(){
        cout << " username: " << endl;
        string un;
        cin >> un;

        bool verify = true;
        cout << " password: " << endl;
        string pass;
        while (verify) {
            cin >> pass;
            if (pass.length() < 4)
                cout << "parola trebuie sa contina cel putin 4 caracterer" << endl;
            else
                verify = false;
        }

        this->service.addElem(un, pass);
        };


    void login(){
        cout<<"enter username:"<<endl;
        string un;
        cin >> un;
        cout<<"enter password:"<<endl;
        string pas;
        cin>>pas;
        if(!this->service.verifyUser(un, pas))
            cout<<"wrong password or username!"<<endl;
        else
            this->runMenu2(un);
    }


    void runMenu(){
        while(true){
            showDisplay();

            int option;
            cout<<"dati optiunea: "<<endl;
            cin >> option;

            if(option == 1)
                registerUser();
            else if(option == 2){
                login();
            }
            else if (option == 3){
                break;
            }
        }

    }



    void runMenu2(string username){
        cout<<endl;
        while(true){
            cout<<"welcome, "<<username<<endl;
            cout<<"1.add friend"<<endl;
            cout<<"2.delete friend"<<endl;
            cout<<"3.view friends"<<endl;
            cout<<"4.write a message"<<endl;
            cout<<"5.delete message"<<endl;
            cout<<"6.view messages"<<endl;
            cout<<"7.add an event you're interested in"<<endl;
            cout<<"8.delete an event from your list"<<endl;
            cout<<"9.view events"<<endl;
            cout<<"10.edit your account"<<endl;
            cout<<"11.exit!"<<endl;

            int option;
            cout<<"dati optiunea: "<<endl;
            cin >> option;

            if (option == 1){
                cout << "numele prietenului: " << endl;
                char *u;
                u = new char[100];
                cin.get();
                cin.get(u ,100);
                this->servicePrietenie.AddPrieten(u);
                cout<<u<<' '<<"s-a imprietenit la"<<' '<<username<<endl;
            }
            else if(option == 2){
                cout<<"dati numele prietenului pe care doriti sa l stergeti: "<<endl;
                char *n = new char[100];
                cin >> n;
                this->servicePrietenie.deletePrietenie(n);
                cout<<n<<' '<<"a fost dezabonat de la"<<' '<<username<<endl;
            }

            else if(option == 3){
                prietenie *p;
                p = this->servicePrietenie.getAll();
                cout<<"lista de prieteni ai lui "<<username<<" este: "<<endl;
                for(int i=0;i<this->servicePrietenie.getNoService();i++)
                    cout<<p[i]<<endl;
            }

            else if(option == 4){
                cout<<"to ... "<<endl;
                char *p = new char[100];
                cin >> p;
                prietenie *prieten;
                prieten = this->servicePrietenie.getAll();
                bool verify = false;
                for(int i=0;i<this->servicePrietenie.getNoService();i++)
                    if(strcmp(p, prieten[i].getNumePrieten()) == 0)
                        verify = true;
                if(verify == true){
                    cout << "scrieti mesajul catre "<< p << endl;
                    char *u;
                    u = new char[100];
                    cin.get();
                    cin.get(u, 100);
                    this->serviceMesaj.AddMesaj(u);
                }
                else
                    cout<<"nu exista un prieten cu acest nume!"<<endl;

            }

            else if(option == 5){
                cout<<"scrieti mesajul pe care doriti sa il stergeti: "<<endl;
                char *m = new char[100];
                cin.get();
                cin.get(m, 100);
                this->serviceMesaj.deleteMesaj(m);
            }

            else if(option == 6){
                mesaj *mesaj;
                mesaj = this->serviceMesaj.getAll();
                for(int i=0;i<this->serviceMesaj.getNoService();i++)
                    cout << mesaj[i];

            }

            else if(option == 7){
                cout<<"scrieti evenimentul la care doriti sa participati: "<<endl;
                string e;
                cin.get();
                getline(cin, e);
                this->serviceEveniment.AddItem(e);
            }

            else if(option == 8){
                cout<<"scrieti evenimentul pe care doriti sa il stergeti: "<<endl;
                string e;
                cin.get();
                getline(cin, e);
                this->serviceEveniment.deleteItem(e);
            }

            else if(option == 9){
                Eveniment *e;
                e = this->serviceEveniment.getAll();
                for(int i=0;i<this->serviceEveniment.getNoService();i++)
                    cout << e[i].getStatus()<<endl;
            }

            else if(option == 10){
                cout<<"dati username-ul vechi: "<<endl;
                string uv;
                cin >> uv;

                cout<<"dati vechea parola: "<<endl;
                string vp;
                cin>>vp;

                cout<<"dati noul username: "<<endl;
                string nu;
                cin>>nu;
                cout<<"dati noua parola: "<<endl;
                string np;
                cin>>np;

                this->service.updateElem(uv,vp,nu,np);
                break;
            }

            else if(option == 11) {
                break;
            }
        }
    }
};





#endif //SDA_PROIECT2022_USERINTERFACE_H
