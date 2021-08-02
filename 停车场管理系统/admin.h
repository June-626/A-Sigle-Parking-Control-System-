#pragma once
#include <string>
#include "user.h"
using namespace std;
class Admin :public User
{
public:
    Car a[100];
    void add();
    void inquire();
    void show();
    void modification();
    void del();
    void statistics();
    void save();
    void load();
};
