#pragma once

// menu.h : 菜单界面、功能

#include <iostream>
#include <string>
#include <fstream>//将信息保存在文件里
#include <vector>//数组
#include "Bus.h"//车
#include "StudentCard.h"//学生卡
#include "TeacherCard.h"//教师卡
#include "RestrictCard.h"//限制卡
#include "TemporaryCard.h"//临时卡

const string f1 = "Student.txt";//学生卡文件名
const string f2 = "Teacher.txt";//教师卡文件名
const string f3 = "Restrict.txt";//限制卡文件名
const string f4 = "Temporary.txt";//临时卡文件名

using namespace std;

void Menu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4);//总菜单
void CardMenu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4);//在屏幕上显示卡片系统初始菜单，返回操作命令
void SelectMenu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type, int n);//选择菜单
void Menu1(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type);//创建新卡菜单
void Menu2(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type);//查询信息菜单
void Menu3(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type);//余额充值菜单
void Menu4(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type);//销毁卡片菜单
void Menu0(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4);//退出系统
void BusMenu();//班车菜单

int GetNumberFromFile(string fname);//得到文件中数据的总量
template<class T> void GetData(string fname, vector<T *> &c);
//void GetData(string fname, vector<StudentCard *> &c);//读取数据
//void GetData(string fname, vector<TeacherCard *> &c);
//void GetData(string fname, vector<RestrictCard *> &c);
//void GetData(string fname, vector<TemporaryCard *> &c);
void Sort(vector<Card *> &c);//按卡号排序
int Search(vector<Card *> &c, string num);//查找卡片
void FlashFile(string fname, vector<Card *> &c);//更新文件

void CreateCard(vector<Card *> &c, string num, int type);//创建新卡
void OutPutInfo(vector<Card *> &c, string num);//查询信息
void TopUp(vector<Card *> &c, string num);//余额充值
void DestroyCard(vector<Card *> &c, string num);//销毁卡片
