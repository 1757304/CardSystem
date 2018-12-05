#pragma once

// menu.h : 显示菜单界面

#include <iostream>
#include <string>

using namespace std;

int Menu();//总菜单
void CardMenu();//在屏幕上显示卡片系统初始菜单，返回操作命令
void SelectMenu(int n);//选择菜单
void Menu1();//创建新卡菜单
void Menu2();//查询信息菜单
void Menu3();//余额充值菜单
void Menu4();//销毁卡片菜单
void Menu0();//退出系统
void BusMenu();//班车菜单