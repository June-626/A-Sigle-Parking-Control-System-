#include <iostream>
#include <string>
#include <cstdlib>
#include<fstream>
#include "admin.h"
using namespace std;
int i;
void Admin ::add()
{
    string licensePlate1;
    string color1;
    string model1;
    int time1;
    cout << "��ӭͣ��\n" << endl;
    if (i == 100)
    {
        cout << "�Բ���ͣ����ͣ��λ������" << endl;
    }
    else
    {
        cout << "�����복�ƺţ�";
        cin >> licensePlate1;
        a[i].licensePlate = licensePlate1;
        cout << "�����복����ɫ��";
        cin >> color1;
        a[i].color = color1;
        cout << "�����복�ͣ�";
        cin >> model1;
        a[i].model = model1;
        cout << "������ͣ��ʱ�䣺";
        cin >> time1;
        a[i].time = time1;
        i++;
        cout << "�뽫��ͣ��ͣ�����пյĳ�λ��" << endl;
    }
}
void Admin::inquire()
{
    int t;
    int k;
    string val;
    cout << "��ѡ���ѯ��ʽ" << endl;
    cout << "1.ͨ�����ƺŲ�ѯ" << endl;
    cout << "2.ͨ������ɫ��ѯ" << endl;
    cout << "3.ͨ�����Ͳ�ѯ" << endl;
    cout << "4.ͨ��ͣ��ʱ���ѯ" << endl;
    cin >> t;
    switch (t)
    {
    case 1:
        cout << "�����복�ƺ��룺";
        cin >> val;
        for (int j = 0; j < i; j++)
        {
            if (val.compare(a[j].licensePlate) == 0)
            {
                cout << "������ѯ�ĳ����ĳ��ƺ�Ϊ��" << a[j].licensePlate << endl;
                cout << "������ѯ�ĳ�������ɫΪ��" << a[j].color << endl;
                cout << "������ѯ�ĳ����ĳ���Ϊ��" << a[j].model << endl;
                cout << "������ѯ�ĳ�����ͣ��ʱ��Ϊ��" << a[j].time << endl;
            }
        }
        system("pause");
        break;
    case 2:
        cout << "�����복����ɫ��";
        cin >> val;
        for (int j = 0; j < i - 1; j++)
        {
            if (val.compare(a[j].color) == 0)
            {
                cout << "������ѯ�ĳ����ĳ��ƺ�Ϊ��" << a[j].licensePlate << endl;
                cout << "������ѯ�ĳ�������ɫΪ��" << a[j].color << endl;
                cout << "������ѯ�ĳ����ĳ���Ϊ��" << a[j].model << endl;
                cout << "������ѯ�ĳ�����ͣ��ʱ��Ϊ��" << a[j].time << endl;
            }
        }
        system("pause");
        break;
    case 3:
        cout << "�����복���ͺţ�";
        cin >> val;
        for (int j = 0; j < i - 1; j++)
        {
            if (val.compare(a[j].model) == 0)
            {
                cout << "������ѯ�ĳ����ĳ��ƺ�Ϊ��" << a[j].licensePlate << endl;
                cout << "������ѯ�ĳ�������ɫΪ��" << a[j].color << endl;
                cout << "������ѯ�ĳ����ĳ���Ϊ��" << a[j].model << endl;
                cout << "������ѯ�ĳ�����ͣ��ʱ��Ϊ��" << a[j].time << endl;
            }
        }
        system("pause");
        break;
    case 4:
        cout << "������ͣ��ʱ�䣺";
        cin >> k;
        for (int j = 0; j < i - 1; j++)
        {
            if (k == a[j].time)
            {
                cout << "������ѯ�ĳ����ĳ��ƺ�Ϊ��" << a[j].licensePlate << endl;
                cout << "������ѯ�ĳ�������ɫΪ��" << a[j].color << endl;
                cout << "������ѯ�ĳ����ĳ���Ϊ��" << a[j].model << endl;
                cout << "������ѯ�ĳ�����ͣ��ʱ��Ϊ��" << a[j].time << endl << endl;
            }
        }
        system("pause");
        break;
    }
}
void Admin::modification()
{
    string c;
    string licensePlate1;
    string color1;
    string model1;
    int time1;
    cout << "������������ѯ�ĳ��ƺ��룺" << endl;
    cin >> c;
    for (int j = 0; j < i; j++)
    {
        if (c.compare(a[j].licensePlate) == 0)
        {
            cout << a[j].licensePlate << "\t" << a[j].color << "\t" << a[j].model << "\t" << a[j].time << endl;
            cout << "�������޸ĺ�ĳ��ƺţ�";
            cin >> licensePlate1;
            a[j].licensePlate = licensePlate1;
            cout << "�������޸ĺ�ĳ�����ɫ��";
            cin >> color1;
            a[j].color = color1;
            cout << "�������޸ĺ��ͣ�";
            cin >> model1;
            a[j].model = model1;
            cout << "�������޸ĺ�ͣ��ʱ�䣺";
            cin >> time1;
            a[j].time = time1;
        }
        break;
    }
}
void Admin::del()
{
    int j;
    string c;
    cout << "��ӭ��ͣ������" << endl;
    cout << "�����������ͣ���������ĳ��ƺ��룺" << endl;
    cin >> c;
    for (j = 0; j < i; j++)
    {
        if (c.compare(a[j].licensePlate) == 0)
        {
            cout << "����ͣ��ʱ��Ϊ" << a[j].time << "Сʱ" << endl;
            cout << "�����" << a[j].time * 5 << "Ԫ��ͣ����" << endl;
            for (int k = j; k <= i; k++)
            {
                a[k] = a[k + 1];
            }
            i--;
        }
        break;
    }
}
void Admin::statistics()
{
    cout << "ͣ����ͣ������Ϊ" << i << "��" << endl;
}
void Admin::show()
{
    for (int j = 0; j < i; j++)
    {
        cout << "����" << j + 1 << "���ƺ�Ϊ��" << a[j].licensePlate << endl;
        cout << "����" << j + 1 << "����ɫΪ��" << a[j].color << endl;
        cout << "����" << j + 1 << "����Ϊ��" << a[j].model << endl;
        cout << "����" << j + 1 << "ͣ��ʱ��Ϊ��" << a[j].time << endl << endl;
    }
}
void Admin::save()
{
    ofstream inputFile;
    inputFile.open("file.txt");
    for (int j = 0; j < i; j++)
    {
        inputFile << a[j].licensePlate << endl << a[j].color << endl << a[j].model << endl << a[j].time << endl;
    }
    inputFile.close();
    ofstream zFile;
    zFile.open("number.txt");
    zFile << i;
    zFile.close();
}
void Admin::load()
{
    int j = 0;
    ifstream xFile;
    xFile.open("number.txt");
    xFile >> i;
    xFile.close();
    ifstream outFile;
    outFile.open("file.txt");
    while (!outFile.eof())
    {
        outFile >> a[j].licensePlate >> a[j].color >> a[j].model >> a[j].time;
        j++;
    }
    outFile.close();
}