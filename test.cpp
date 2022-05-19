#include "test.h"
#include "user.h"
#include "mesaj.h"
#include "RepositoryUser.h"
#include "RepositoryMesaj.h"
#include <assert.h>
#include "iostream"
using namespace std;

void test(){
    User u1;
    User u2;
    User u3;
    u1.setName("bogdan");
    u2.setName("paul");
    u3.setName("cojan");
    u1.setId(1);
    u2.setId(2);
    u3.setId(3);

    Array<User> u;
    u.AddItem(u1);
    u.AddItem(u2);
    assert(u.size() == 2);
    u.remove(u1);
    assert(u.size() == 1);



    Repo repo;
    repo.addUser(u1);
    repo.addUser(u2);
    repo.addUser(u3);

    assert(repo.size() == 3);


    mesaj m1("hellai");
    mesaj m2("ke fai");
    mesaj m3("buenas noces");

    Array<mesaj> m;
    m.AddItem(m1);
    m.AddItem(m2);
    m.AddItem(m3);
    assert(m.size() == 3);

    RepositoryMesaj repoM;
    repoM.addMesaj(m1);
    repoM.addMesaj(m2);
    assert(repoM.size() == 2);



}