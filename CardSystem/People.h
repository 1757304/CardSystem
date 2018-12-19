#pragma once
#include <iostream>
#include <string>

using namespace std;

/**
* 性别
* MALE 男性
* FEMALE 女性
*/
enum Sex { MALE, FEMALE };

/**
* 人
* 包括人的基本信息：
* 姓名、性别、职务、所属单位、工资号/学号等
*/
class People
{
public:
	People();
	void InputInfo(string num);//输入人的信息
	string GetNum();//得到工资号/学号信息
	void OutPutInfo();//显示人的信息
	~People();
private:
	string name;//姓名
	Sex sex;//性别
	string position;//职务
	string unit;//所属单位
	string number;//工资号/学号
};

