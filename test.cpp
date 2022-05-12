#include "test.h"
#include "user.h"
#include "Repository.h"
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

    Repo repo;
    repo.addUser(u1);
    repo.addUser(u2);
    repo.addUser(u3);

    assert(repo.size() == 3);


}