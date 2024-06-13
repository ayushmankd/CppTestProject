#ifndef Entity_H
#define Entity_H
#include <iostream>

using namespace std;

class Entity
{
    private:
        string name;
        int age;
    public:
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return this->name;
        }
        void setAge(int age) {
            this->age = age;
        }
        int getAge() {
            return this->age;
        }
};
#endif