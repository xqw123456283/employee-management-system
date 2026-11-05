#include<iostream>
#include<limits>
using namespace std;

#include"employee.hpp"
#include"manager.hpp"
#include"boss.hpp"
#include"worker.hpp"
#include"workerManager.hpp"

// void showfirst(){
//     cout<<"**********************************"<<endl;
//     cout<<"******按下 1 ，退出当前管理系统******"<<endl;
//     cout<<"******按下 2 ,(批量)增加员工信息****"<<endl;
//     cout<<"******按下 3 ，显示全部职工信息******"<<endl;
//     cout<<"******按下 4 ，删除离职员工信息******"<<endl;
//     cout<<"******按下 5 ，修改员工信息   ******"<<endl;
//     cout<<"******按下 6 ，查找员工信息   ******"<<endl;
//     cout<<"******按下 7 ，按照编号排序   ******"<<endl;
//     cout<<"******按下 8 ，清空所有文件   ******"<<endl;
//     cout<<"**********************************"<<endl;
// }


// void quit(){    
// cout<<"欢迎下次使用"<<endl;
// exit(0);
// }

// void ifcinwrong(int &choice){
//     if(!(cin>>choice)){
//         cout<<"输入无效，请输入数字！"<<endl;
//         cin.clear();//清除cin的错误状态标志
//         cin.ignore(numeric_limits<streamsize>::max(),'\n');//清空缓存区的脏数据
//     }
// }



int main(){

    workerManager wm;//调用函数而写

//测试职工多肽
worker*worker=NULL;
worker=new employee(1,"张三",1);
worker->showinfo();





int choice;

    while(true){
    system("clear");//清屏
    wm.showfirst();
cout<<"请输入想要完成的操作数字"<<endl;
cin>>choice;

// ifcinwrong(choice);

//cin.ignore(numeric_limits<streamsize>::max(),'\n');//如果输入了如 1 abc这种混合型只需在读取后清空行即可

switch(choice){
    case 1:
wm.quit();
    break;
    case 2:
    wm.Add_Emp();
    break;
    case 3:
    break;
    case 4:
    break;
    case 5:
    break;
    case 6:
    break;
    case 7:
    break;
    case 8:
    break;
    default:
    cout<<"输入错误"<<endl;
    break;
}
    }
}