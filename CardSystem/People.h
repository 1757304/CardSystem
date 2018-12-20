#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

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
	void InputInfo(unsigned int num);//输入人的信息
	unsigned int GetNum();//得到工资号/学号信息
	void OutPutInfo();//显示人的信息
	~People();
private:
	char name[32];//姓名
	Sex sex;//性别
	char position[32];//职务
	char unit[32];//所属单位
	unsigned int number;//工资号/学号
};

