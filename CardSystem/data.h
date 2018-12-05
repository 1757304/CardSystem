#pragma once

//文件操作等

#include <iostream>
#include <fstream>//将信息保存在文件里
#include "Bus.h"//车
#include "Student_Card.h"//学生卡
#include "Teacher_Card.h"//教师卡
#include "Restricting_Card.h"//限制卡
#include "Temporary_Card.h"//临时卡

int GetNumberFromFile(string fname);//得到文件中数据的总量
void FlashFile(string fname, Card[]);//更新文件
void Sort(Card c[], const int len);//按卡号排序
int Seach(Card c[], const int len);//查找卡片

void CreateCard(int type);//创建新卡
void OutInfo(string num);//查询信息
void TopUp(string num);//余额充值
void DestroyCard(string num);//销毁卡片
