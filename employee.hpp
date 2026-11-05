#include"worker.hpp"
#include<iostream>
#pragma once
using namespace std;

class employee:public worker{
    public:
    employee(int id,string name,int did);

    virtual void showinfo();

    virtual string getdeptname();
};