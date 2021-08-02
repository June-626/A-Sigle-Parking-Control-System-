#pragma once
#include <string>
#include "car.h"
using namespace std;

class User :public Car
{
    public:
        string ID;
        string password;
        string IDAdmin;
        string passwordAdmin;
        void longin();
};