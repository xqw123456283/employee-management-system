#pragma once
#include<iostream>
#include<string>
using namespace std;

class worker{
public:
    int m_id;
    string m_name;
    int m_deptid;

    virtual void showinfo()=0;

    virtual string getdeptname()=0;
};