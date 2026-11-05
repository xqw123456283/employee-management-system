#include"worker.hpp"
#include<iostream>
#pragma once
using namespace std;

class boss:public worker{
    public:
    boss(int id,string name,int did);

    virtual void showinfo();

    virtual string getdeptname();
};