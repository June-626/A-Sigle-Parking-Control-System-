#include <iostream>
#include <string>
#include <cstdlib>
#include<fstream>
#include "user.h"
#include "admin.h"
using namespace std;
void User::longin()
{
    User::ID = "abc";
    User::password = "abc";
    User::IDAdmin = "admin";
    User::passwordAdmin = "admin";
    int h = 0;
    string ID1;
    string password1;
    cout << "\n\n\n\t\t\t     欢迎使用停车场管理系统！\n\n\n\n" << endl;
    cout << "\t\t\t\t请登录系统！\n" << endl;
    while (h != 3)
    {
        cout << "\t\t\t\t用户名：";
        cin >> ID1;
        cout << "\t\t\t\t密码：";
        cin >> password1;
        if (ID1.compare(User::ID) == 0 && password1.compare(User::password) == 0)
        {
            cout << "\t\t\t\t登陆成功！" << endl;
            system("pause");
            system("cls");
            int a;
            Admin carManage;
            User userName;
            cout << "\n\n\t\t\t   欢迎进入用户停车系统！\n\n" << endl;
            while (1)
            {
                cout << "\t\t\t     菜单\n\n" << endl;
                cout << " \t\t\t    1.停车\n\t\t\t    2.出停车场\n\t\t\t    3.退出\n" << endl;
                cin >> a;
                switch (a)
                {
                case 1:
                {
                    system("cls");
                    carManage.add();
                    carManage.save();
                    system("cls");
                    break;
                }
                case 2:
                {
                    system("cls");
                    carManage.del();
                    carManage.save();
                    system("cls");
                    break;
                }
                case 3:
                {
                    exit(0);
                }
                default:
                {
                    cout << "请重新输入" << endl;
                    system("pause");
                    break;
                }
                }
            }
        }
        if (ID1.compare(User::IDAdmin) == 0 && password1.compare(User::passwordAdmin) == 0)
        {
            cout << "\t\t\t\t登陆成功！" << endl;
            system("pause");
            system("cls");
            int a;
            Admin carManage;
            User userName;
            cout << "\n\n\t\t\t   欢迎进入管理员停车场管理系统！\n\n" << endl;
            while (1)
            {
                cout << "\t\t\t     菜单\n\n" << endl;
                cout << " \t\t\t    1.停车\n\t\t\t    2.查询车辆信息\n\t\t\t    3.显示所有车辆信息\n\t\t\t    4.编辑车辆信息\n\t\t\t    5.出停车场\n\t\t\t    6.统计车辆\n\t\t\t    7.加载文件\n\t\t\t    8.退出\n" << endl;
                cin >> a;
                switch (a)
                {
                case 1:
                {
                    system("cls");
                    carManage.add();
                    carManage.save();
                    system("cls");
                    break;
                }
                case 2:
                {
                    system("cls");
                    carManage.inquire();
                    system("cls");
                    break;
                }
                case 3:
                {
                    system("cls");
                    carManage.show();
                    system("pause");
                    system("cls");
                    break;
                }
                case 4:
                {
                    system("cls");
                    carManage.modification();
                    carManage.save();
                    system("cls");
                    break;
                }
                case 5:
                {
                    system("cls");
                    carManage.del();
                    carManage.save();
                    system("cls");
                    break;
                }
                case 6:
                {
                    system("cls");
                    carManage.statistics();
                    system("pause");
                    system("cls");
                    break;
                }
                case 7:
                {
                    carManage.load();
                    system("cls");
                    break;
                }
                case 8:
                {
                    exit(0);
                }
                default:
                {
                    cout << "请重新输入" << endl;
                    system("pause");
                    break;
                }
                }
            }
        }
        else
        {
            h++;
            system("cls");
            cout << "\t\t\t   密码或用户名输入错误！" << endl;
            cout << "\t\t\t请重新输入，您还有" << 3 - h << "次输入机会" << endl;
        }
        if (h == 3)
        {
            cout << "\t\t\t\t您已三次输入错误，系统被强制停止" << endl;
            exit(0);
        }
    }
}
