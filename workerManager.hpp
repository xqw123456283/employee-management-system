#pragma once
#include<iostream>
#include<string>
#include"worker.hpp"
#include"employee.hpp"
#include"manager.hpp"
#include"boss.hpp"
using namespace std;

class workerManager{
public:
    workerManager();

    void showfirst();

    void quit();

    int  m_EmpNum;//记录职工人数

    worker ** m_EmpArray;

    void Add_Emp();

    ~workerManager();


};

