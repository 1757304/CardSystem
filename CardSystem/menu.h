// menu.h : 菜单界面的包含文件，
// 包括卡系统和车系统
// 

#pragma once
#include <iostream>
#include <fstream>//将信息保存在文件里
#include <vector>//数组
#include "Card.h"//学生卡
#include "Bus.h"//班车
#include "data.h"//文件和卡的操作

using namespace std;

void Menu(vector<Card>& c);//总菜单
void SeleteMenu(vector<Card>& c);//选择菜单
void Menu1(vector<Card>& c);//创建新卡菜单
void Menu2(vector<Card>& c);//查询信息菜单
void Menu3(vector<Card>& c);//余额充值菜单
void Menu4(vector<Card>& c);//销毁卡片菜单
void Menu0(vector<Card>& c);//退出系统
void BusMenu();//班车菜单