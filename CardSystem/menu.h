// menu.h : 菜单界面的包含文件，
// 包括卡系统和车系统
// 

#pragma once
#include "data.h"//文件和卡的操作

using namespace std;

void Menu();//总菜单
void SeleteMenu(vector<Card>& c);//选择菜单
void Menu1(vector<Card>& c);//创建新卡菜单
void Menu2(vector<Card>& c);//查询信息菜单
void Menu3(vector<Card>& c);//余额充值菜单
void Menu4(vector<Card>& c);//销毁卡片菜单
void BusMenu(vector<Card>& c);//班车菜单
void Menu0(vector<Card>& c);//退出系统