#include"workerManager.hpp"

workerManager::workerManager(){
this->m_EmpNum=0;

this->m_EmpArray =NULL;
};

workerManager::~workerManager(){
    
};

void workerManager:: quit(){    
cout<<"欢迎下次使用"<<endl;
exit(0);
}

void workerManager::showfirst(){
    cout<<"**********************************"<<endl;
    cout<<"******按下 1 ，退出当前管理系统******"<<endl;
    cout<<"******按下 2 ,(批量)增加员工信息****"<<endl;
    cout<<"******按下 3 ，显示全部职工信息******"<<endl;
    cout<<"******按下 4 ，删除离职员工信息******"<<endl;
    cout<<"******按下 5 ，修改员工信息   ******"<<endl;
    cout<<"******按下 6 ，查找员工信息   ******"<<endl;
    cout<<"******按下 7 ，按照编号排序   ******"<<endl;
    cout<<"******按下 8 ，清空所有文件   ******"<<endl;
    cout<<"**********************************"<<endl;
}

void workerManager::Add_Emp(){
cout<<"请输入添加的人数: "<<endl;
int addNum=0;//保存用户的输入数量
cin>>addNum;

if(addNum>0){
    //添加
    //计算添加的新空间大小
    int newSize=this->m_EmpNum+addNum;

    //开辟新空间 
    worker ** newspace=new worker*[newSize];

    //将原数据放到新空间
    if(this->m_EmpArray!=NULL){
        for(int i=0;i<this->m_EmpNum;i++){
            newspace[i]=this->m_EmpArray[i];
        }
    }

    //批量添加新数据
    for(int i=0;i<addNum;i++){
        int id;
        string name;
        int dselect;

        cout<<"请输入第"<<i+1<<"个新职工编号： "<<endl;
        cin>>id;

        cout<<"请输入第"<<i+1<<"个新职工姓名： "<<endl;
        cin>>name;

        cout<<"请选择该职工岗位： "<<endl;
        cout<<"1:普通职工"<<endl;
        cout<<"2:公司经理"<<endl;
        cout<<"3:公司老板"<<endl;
        cin>>dselect;

        worker*worker=NULL;
        switch(dselect){
            case 1:
            worker=new employee(id,name,1);
            break;
            case 2:
            worker=new manager(id,name,2);
            break;
            case 3:
            worker=new boss(id,name,3);
            break;
            default:
            break;
        }

        newspace[this->m_EmpNum+i]=worker;

    }

    //释放原有空间
    delete[]this->m_EmpArray;

    //更新空间指向
    this->m_EmpArray=newspace;

    //更新新的职工人数
    this->m_EmpNum=newSize;

    cout<<"成功添加"<<addNum<<"名新职工"<<endl;


}else{
    cout<<"输入有误"<<endl;
}
}