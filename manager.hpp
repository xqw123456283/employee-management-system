#include"worker.hpp"
#include<iostream>
#pragma once
using namespace std;

class manager:public worker{
    public:
    manager(int id,string name,int did);

    virtual void showinfo();

    virtual string getdeptname();
};