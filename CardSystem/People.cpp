#include "stdafx.h"
#include "People.h"


People::People()
{
}

void People::InputInfo()
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
	cout << "工资号/学号：" << endl;
	cin >> num;

	sex = (Sex)s;
}

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
