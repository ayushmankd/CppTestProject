#include <iostream>
#include "Entity.h"
#include "ClassUsingEntity.h"
using namespace std;

int main() {
    Entity* et = new Entity();
    et->setName("Hello World");
    et->setAge(35);
    ClassUsingEntity* ct = new ClassUsingEntity(et);
    Entity* etFromClassWithEntity = ct->getEntity();
    cout << "Name: " << etFromClassWithEntity->getName() << endl;
    cout << "Age: " << etFromClassWithEntity->getAge() << endl;
    return 0;
}