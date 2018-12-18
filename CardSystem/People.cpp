#include "stdafx.h"
#include "People.h"


People::People()
{
}

//输入人的信息
void People::InputInfo(string num)
{
	int s;
	cout << "姓名：" << endl;
	cin >> name;
	cout << "性别：（男性输入0，女性输入1）" << endl;
	cin >> s;
	cout << "职务：" << endl;
	cin >> position;
	cout << "所属单位：" << endl;
	cin >> unit;

	sex = (Sex)s;
}

//得到工资号/学号信息
string People::GetNum()
{
	return num;//返回工资号/学号
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
	cout << "工资号/学号：" << num << endl;
}


People::~People()
{
}
