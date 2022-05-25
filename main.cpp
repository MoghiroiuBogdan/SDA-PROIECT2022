#include "UserInterface.h"
#include "test.h"
#include <iostream>
using namespace std;
int main(){
    User u;
    u.setName("bogdan");
    u.setPassword("123b");

    Repo r;
    r.addUser(u);

    Service s;
    s.addElem(u.getName(), u.getPassword());


    test();
    ui console;
    console.runMenu();
}

