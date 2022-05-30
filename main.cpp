#include "UserInterface.h"
#include "test.h"
#include "RepositoryUser.h"
#include "serviceUser.h"
#include "prietenie.h"
#include "mesaj.h"
#include <iostream>
using namespace std;
int main(){
    User u1;
    u1.setName("bogdan");
    u1.setPassword("123b");

    User u2;
    u2.setName("buz");
    u2.setPassword("123buz");

    User u3;
    u3.setName("paul");
    u3.setPassword("123paul");

    User u4;
    u4.setName("mbappe");
    u4.setPassword("123mbappe");

    User u5;
    u5.setName("habibi");
    u5.setPassword("123h");

    User u6;
    u6.setName("razvan");
    u6.setPassword("123razvan");

    User u7;
    u7.setName("neymar");
    u7.setPassword("123neymar");

    User u8;
    u8.setName("messi");
    u8.setPassword("123messi");

    User u9;
    u9.setName("parvulescu");
    u9.setPassword("123parvulescu");

    User u10;
    u10.setName("rapa");
    u10.setPassword("123rapa");

    User u11;
    u11.setName("hazard");
    u11.setPassword("123hazard");

    User u12;
    u12.setName("ion");
    u12.setPassword("123ion");

    User u13;
    u13.setName("ionel");
    u13.setPassword("123ionel");

    User u14;
    u14.setName("ionut");
    u14.setPassword("123ionut");

    User u15;
    u15.setName("tyson");
    u15.setPassword("123tyson");

    Repo r;
    RepositoryEveniment re;
    RepositoryPrietenie rp;
    RepositoryMesaj rm;
    r.addUser(u1);
    r.addUser(u2);
    r.addUser(u3);
    r.addUser(u4);
    r.addUser(u5);
    r.addUser(u6);
    r.addUser(u7);
    r.addUser(u8);
    r.addUser(u9);
    r.addUser(u10);
    r.addUser(u11);
    r.addUser(u12);
    r.addUser(u13);
    r.addUser(u14);
    r.addUser(u15);

    prietenie p1(u2.getName(), u1.getName());
    prietenie p2(u1.getName(), u2.getName());
    prietenie p3(u2.getName(), u3.getName());
    prietenie p4(u2.getName(), u4.getName());
    prietenie p5(u2.getName(), u5.getName());
    prietenie p6(u2.getName(), u6.getName());
    prietenie p7(u2.getName(), u7.getName());
    prietenie p8(u2.getName(), u8.getName());
    prietenie p9(u2.getName(), u9.getName());
    prietenie p10(u2.getName(), u10.getName());
    prietenie p11(u2.getName(), u11.getName());
    prietenie p12(u2.getName(), u12.getName());
    prietenie p13(u2.getName(), u13.getName());
    prietenie p14(u2.getName(), u14.getName());
    prietenie p15(u2.getName(), u15.getName());

    rp.addPrieten(p1);
    rp.addPrieten(p2);
    rp.addPrieten(p3);
    rp.addPrieten(p4);
    rp.addPrieten(p5);
    rp.addPrieten(p6);
    rp.addPrieten(p7);
    rp.addPrieten(p8);
    rp.addPrieten(p9);
    rp.addPrieten(p10);
    rp.addPrieten(p11);
    rp.addPrieten(p12);
    rp.addPrieten(p13);
    rp.addPrieten(p14);
    rp.addPrieten(p15);

    mesaj m1("hei", u1.getName(), u2.getName());
    mesaj m2("hei cf", u8.getName(), u1.getName());
    mesaj m3("da ui", u2.getName(), u3.getName());
    mesaj m4("hei messi", u2.getName(), u4.getName());
    mesaj m5("hei hei hei", u6.getName(), u5.getName());
    mesaj m6("buna ce mai zici?", u4.getName(), u6.getName());
    mesaj m7("o berike?", u10.getName(), u7.getName());
    mesaj m8("heeeei", u10.getName(), u8.getName());
    mesaj m9("o berike?", u2.getName(), u9.getName());
    mesaj m10("stii?", u3.getName(), u10.getName());
    mesaj m11("hehehe", u3.getName(), u11.getName());
    mesaj m12("u cluj", u11.getName(), u12.getName());
    mesaj m13("du te dica", u11.getName(), u13.getName());
    mesaj m14("dani batreiu", u9.getName(), u14.getName());
    mesaj m15("gheim o tron", u1.getName(), u15.getName());


    rm.addMesaj(m1);
    rm.addMesaj(m2);
    rm.addMesaj(m3);
    rm.addMesaj(m4);
    rm.addMesaj(m5);
    rm.addMesaj(m6);
    rm.addMesaj(m7);
    rm.addMesaj(m8);
    rm.addMesaj(m9);
    rm.addMesaj(m10);
    rm.addMesaj(m11);
    rm.addMesaj(m12);
    rm.addMesaj(m13);
    rm.addMesaj(m14);
    rm.addMesaj(m15);


    Service s(r);
    ServiceEveniment se(re);
    ServicePrietenie sp(rp);
    ServiceMesaj sm(rm);


    test();
    ui console(s, sm, sp, se);
    console.runMenu();
}

