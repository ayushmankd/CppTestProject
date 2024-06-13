#ifndef ClassUsingEntity_H
#define ClassUsingEntity_H
#include <iostream>
#include "Entity.h"

using namespace std;

class ClassUsingEntity
{
    private:
        Entity* entity;
    public:
        ClassUsingEntity(Entity* entity) {
            this->entity = entity;
        }
        Entity* getEntity() {
            return this->entity;
        }
};
#endif