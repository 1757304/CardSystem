#include "stdafx.h"
#include "People.h"
#define _CRT_SECURE_NO_WARNINGS

People::People()
{
	for (int i = 0; i < N; i++)
	{
		name[i] = position[i] = unit[i] = 0;
	}
}

//输入人的信息
void People::InputInfo(unsigned int num)
{
	int s;
	cout << "姓名：" << endl;
	cin >> name;
	cout << "性别：（男性输入0，女性输入1）" << endl;
	cin >> s;
	while (s != 0 && s != 1)
	{
		cout << "重新输入性别：（男性输入0，女性输入1）" << endl;
		cin >> s;
	}	
	cout << "职务：" << endl;
	cin >> position;
	cout << "所属单位：" << endl;
	cin >> unit;
	number = num;
	sex = (Sex)s;
}

//得到工资号/学号信息
unsigned int  People::GetNum()
{
	return number;//返回工资号/学号
}

//显示人的信息
void People::OutPutInfo()
{
	cout << "姓名：" << name << endl;
	cout << "性别：";
	if (sex == MALE)
		cout << "男" << endl;
	else
		cout << "女" << endl;
	cout << "职务：" << position << endl;
	cout << "所属单位：" << unit << endl;
	cout << "工资号/学号：" << number << endl;
}


People::~People()
{
}
