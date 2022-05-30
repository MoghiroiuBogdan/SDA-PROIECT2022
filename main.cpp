#include "UserInterface.h"
#include "test.h"
#include "RepositoryUser.h"
#include "serviceUser.h"
#include <iostream>
using namespace std;
int main(){
    User u;
    u.setName("bogdan");
    u.setPassword("123b");

    Repo r;
    r.addUser(u);

    Service s;
    s.addElem("bogdan", "123b");


    test();
    ui console;
    console.runMenu();
}

