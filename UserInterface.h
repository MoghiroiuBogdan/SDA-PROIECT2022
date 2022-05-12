#ifndef SDA_PROIECT2022_USERINTERFACE_H
#define SDA_PROIECT2022_USERINTERFACE_H
#include "service.h"
#include "iostream"
using namespace std;


class ui{
private:
    Service service;
public:
    ui(){

    }
    ui(Service &s){
        this->service = s;
    }
    void showDisplay(){
        cout<<"1. adauga user: "<<endl;
        cout<<"2. arata user: "<<endl;
        cout<<"3. exit!"<<endl;
    }

    void runMenu(){
        while(true){
            showDisplay();

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
                Array<User> repo;
                repo = this->service.getAll();
                for(int i = 0; i<this->service.getNoService();i++);
                    //cout << repo[i];
            }
            else if (option == 3)
                break;
        }

    }
};





#endif //SDA_PROIECT2022_USERINTERFACE_H
