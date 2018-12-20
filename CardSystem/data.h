// data.h : 数据操作的包含文件，
// 包括文件操作和卡操作
// 

#pragma once
#include <fstream>//将信息保存在文件里
#include <vector>//数组
#include "Card.h"//学生卡
#include "Bus.h"//车

const string f1 = "Card.txt";//卡文件名
const string f2 = "Bus.txt";//车文件名

//文件操作

int GetNumberFromFile(string fname);//得到文件中数据的总量
void GetData(string fname, vector<Card>& c);//得到文件中数据
void Sort(vector<Card>& c);//按卡号排序
unsigned int Search(vector<Card>& c, unsigned int num);//查找卡片
void FlashFile(string fname, vector<Card>& c);//更新文件

//卡片操作

void CreateCard(vector<Card>& c, unsigned int num);//创建新卡
void OutPutInfo(vector<Card>& c, unsigned int num);//查询信息
void TopUp(vector<Card>& c, unsigned int num);//余额充值
void DestroyCard(vector<Card>& c, unsigned int num);//销毁卡片