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
    cout << "\n\n\n\t\t\t     ��ӭʹ��ͣ��������ϵͳ��\n\n\n\n" << endl;
    cout << "\t\t\t\t���¼ϵͳ��\n" << endl;
    while (h != 3)
    {
        cout << "\t\t\t\t�û�����";
        cin >> ID1;
        cout << "\t\t\t\t���룺";
        cin >> password1;
        if (ID1.compare(User::ID) == 0 && password1.compare(User::password) == 0)
        {
            cout << "\t\t\t\t��½�ɹ���" << endl;
            system("pause");
            system("cls");
            int a;
            Admin carManage;
            User userName;
            cout << "\n\n\t\t\t   ��ӭ�����û�ͣ��ϵͳ��\n\n" << endl;
            while (1)
            {
                cout << "\t\t\t     �˵�\n\n" << endl;
                cout << " \t\t\t    1.ͣ��\n\t\t\t    2.��ͣ����\n\t\t\t    3.�˳�\n" << endl;
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
                    cout << "����������" << endl;
                    system("pause");
                    break;
                }
                }
            }
        }
        if (ID1.compare(User::IDAdmin) == 0 && password1.compare(User::passwordAdmin) == 0)
        {
            cout << "\t\t\t\t��½�ɹ���" << endl;
            system("pause");
            system("cls");
            int a;
            Admin carManage;
            User userName;
            cout << "\n\n\t\t\t   ��ӭ�������Աͣ��������ϵͳ��\n\n" << endl;
            while (1)
            {
                cout << "\t\t\t     �˵�\n\n" << endl;
                cout << " \t\t\t    1.ͣ��\n\t\t\t    2.��ѯ������Ϣ\n\t\t\t    3.��ʾ���г�����Ϣ\n\t\t\t    4.�༭������Ϣ\n\t\t\t    5.��ͣ����\n\t\t\t    6.ͳ�Ƴ���\n\t\t\t    7.�����ļ�\n\t\t\t    8.�˳�\n" << endl;
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
                    cout << "����������" << endl;
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
            cout << "\t\t\t   ������û����������" << endl;
            cout << "\t\t\t���������룬������" << 3 - h << "���������" << endl;
        }
        if (h == 3)
        {
            cout << "\t\t\t\t���������������ϵͳ��ǿ��ֹͣ" << endl;
            exit(0);
        }
    }
}
