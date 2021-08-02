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
    cout << "欢迎停车\n" << endl;
    if (i == 100)
    {
        cout << "对不起，停车场停车位已满！" << endl;
    }
    else
    {
        cout << "请输入车牌号：";
        cin >> licensePlate1;
        a[i].licensePlate = licensePlate1;
        cout << "请输入车辆颜色：";
        cin >> color1;
        a[i].color = color1;
        cout << "请输入车型：";
        cin >> model1;
        a[i].model = model1;
        cout << "请输入停车时间：";
        cin >> time1;
        a[i].time = time1;
        i++;
        cout << "请将车停到停车场中空的车位！" << endl;
    }
}
void Admin::inquire()
{
    int t;
    int k;
    string val;
    cout << "请选择查询方式" << endl;
    cout << "1.通过车牌号查询" << endl;
    cout << "2.通过车颜色查询" << endl;
    cout << "3.通过车型查询" << endl;
    cout << "4.通过停车时间查询" << endl;
    cin >> t;
    switch (t)
    {
    case 1:
        cout << "请输入车牌号码：";
        cin >> val;
        for (int j = 0; j < i; j++)
        {
            if (val.compare(a[j].licensePlate) == 0)
            {
                cout << "您所查询的车辆的车牌号为：" << a[j].licensePlate << endl;
                cout << "您所查询的车辆的颜色为：" << a[j].color << endl;
                cout << "您所查询的车辆的车型为：" << a[j].model << endl;
                cout << "您所查询的车辆的停车时间为：" << a[j].time << endl;
            }
        }
        system("pause");
        break;
    case 2:
        cout << "请输入车的颜色：";
        cin >> val;
        for (int j = 0; j < i - 1; j++)
        {
            if (val.compare(a[j].color) == 0)
            {
                cout << "您所查询的车辆的车牌号为：" << a[j].licensePlate << endl;
                cout << "您所查询的车辆的颜色为：" << a[j].color << endl;
                cout << "您所查询的车辆的车型为：" << a[j].model << endl;
                cout << "您所查询的车辆的停车时间为：" << a[j].time << endl;
            }
        }
        system("pause");
        break;
    case 3:
        cout << "请输入车的型号：";
        cin >> val;
        for (int j = 0; j < i - 1; j++)
        {
            if (val.compare(a[j].model) == 0)
            {
                cout << "您所查询的车辆的车牌号为：" << a[j].licensePlate << endl;
                cout << "您所查询的车辆的颜色为：" << a[j].color << endl;
                cout << "您所查询的车辆的车型为：" << a[j].model << endl;
                cout << "您所查询的车辆的停车时间为：" << a[j].time << endl;
            }
        }
        system("pause");
        break;
    case 4:
        cout << "请输入停车时间：";
        cin >> k;
        for (int j = 0; j < i - 1; j++)
        {
            if (k == a[j].time)
            {
                cout << "您所查询的车辆的车牌号为：" << a[j].licensePlate << endl;
                cout << "您所查询的车辆的颜色为：" << a[j].color << endl;
                cout << "您所查询的车辆的车型为：" << a[j].model << endl;
                cout << "您所查询的车辆的停车时间为：" << a[j].time << endl << endl;
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
    cout << "请输入您所查询的车牌号码：" << endl;
    cin >> c;
    for (int j = 0; j < i; j++)
    {
        if (c.compare(a[j].licensePlate) == 0)
        {
            cout << a[j].licensePlate << "\t" << a[j].color << "\t" << a[j].model << "\t" << a[j].time << endl;
            cout << "请输入修改后的车牌号：";
            cin >> licensePlate1;
            a[j].licensePlate = licensePlate1;
            cout << "请输入修改后的车辆颜色：";
            cin >> color1;
            a[j].color = color1;
            cout << "请输入修改后车型：";
            cin >> model1;
            a[j].model = model1;
            cout << "请输入修改后停车时间：";
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
    cout << "欢迎出停车场！" << endl;
    cout << "请输入您想出停车场车辆的车牌号码：" << endl;
    cin >> c;
    for (j = 0; j < i; j++)
    {
        if (c.compare(a[j].licensePlate) == 0)
        {
            cout << "您的停车时间为" << a[j].time << "小时" << endl;
            cout << "请缴纳" << a[j].time * 5 << "元的停车费" << endl;
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
    cout << "停车场停车总数为" << i << "辆" << endl;
}
void Admin::show()
{
    for (int j = 0; j < i; j++)
    {
        cout << "车辆" << j + 1 << "车牌号为：" << a[j].licensePlate << endl;
        cout << "车辆" << j + 1 << "车颜色为：" << a[j].color << endl;
        cout << "车辆" << j + 1 << "车型为：" << a[j].model << endl;
        cout << "车辆" << j + 1 << "停车时间为：" << a[j].time << endl << endl;
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