#pragma once

//文件操作等

#include <iostream>
#include <fstream>//将信息保存在文件里
#include <vector>//数组
#include "Bus.h"//车
#include "Student_Card.h"//学生卡
#include "Teacher_Card.h"//教师卡
#include "Restrict_Card.h"//限制卡
#include "Temporary_Card.h"//临时卡

const string f1 = "Student.txt";//学生卡文件名
const string f2 = "Teacher.txt";//教师卡文件名
const string f3 = "Restrict.txt";//限制卡文件名
const string f4 = "Temporary.txt";//临时卡文件名

template<class T> int GetNumberFromFile(string fname);//得到文件中数据的总量
template<class T> void GetData(string fname, vector<T> &c);//读取数据
template<class T> void Sort(vector<T> &c);//按卡号排序
template<class T> int Seach(vector<T> &c, string s);//查找卡片
template<class T>  void FlashFile(string fname, vector<T> &c);//更新文件

template<class T> void CreateCard(vector<T> &c);//创建新卡
template<class T> void OutInfo(vector<T> &c, string num);//查询信息
template<class T> void TopUp(vector<T> &c, string num);//余额充值
template<class T> void DestroyCard(vector<T> &c, string num);//销毁卡片
