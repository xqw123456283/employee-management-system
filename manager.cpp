#include"manager.hpp"
#include<iostream>
using namespace std;

manager::manager(int id,string name,int did){
    this->m_id=id;

    this->m_name=name;

    this->m_deptid=did;
}

void manager::showinfo(){
cout<<"职工编号： "<<this->m_id
    <<"\t职工姓名: "<<this->m_name
    <<"\t岗位: "<<this->m_deptid
    <<"\t岗位职责:完成经理交给的人物"<<endl;
}

string manager::getdeptname(){
    return string("员工");
}