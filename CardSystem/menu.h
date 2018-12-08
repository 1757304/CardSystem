#pragma once

// menu.h : �˵����桢����

#include <iostream>
#include <string>
#include <fstream>//����Ϣ�������ļ���
#include <vector>//����
#include "Bus.h"//��
#include "StudentCard.h"//ѧ����
#include "TeacherCard.h"//��ʦ��
#include "RestrictCard.h"//���ƿ�
#include "TemporaryCard.h"//��ʱ��

const string f1 = "Student.txt";//ѧ�����ļ���
const string f2 = "Teacher.txt";//��ʦ���ļ���
const string f3 = "Restrict.txt";//���ƿ��ļ���
const string f4 = "Temporary.txt";//��ʱ���ļ���

using namespace std;

void Menu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4);//�ܲ˵�
void CardMenu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4);//����Ļ����ʾ��Ƭϵͳ��ʼ�˵������ز�������
void SelectMenu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type, int n);//ѡ��˵�
void Menu1(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type);//�����¿��˵�
void Menu2(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type);//��ѯ��Ϣ�˵�
void Menu3(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type);//����ֵ�˵�
void Menu4(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type);//���ٿ�Ƭ�˵�
void Menu0(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4);//�˳�ϵͳ
void BusMenu();//�೵�˵�

int GetNumberFromFile(string fname);//�õ��ļ������ݵ�����
template<class T> void GetData(string fname, vector<T *> &c);
//void GetData(string fname, vector<StudentCard *> &c);//��ȡ����
//void GetData(string fname, vector<TeacherCard *> &c);
//void GetData(string fname, vector<RestrictCard *> &c);
//void GetData(string fname, vector<TemporaryCard *> &c);
void Sort(vector<Card *> &c);//����������
int Search(vector<Card *> &c, string num);//���ҿ�Ƭ
void FlashFile(string fname, vector<Card *> &c);//�����ļ�

void CreateCard(vector<Card *> &c, string num, int type);//�����¿�
void OutPutInfo(vector<Card *> &c, string num);//��ѯ��Ϣ
void TopUp(vector<Card *> &c, string num);//����ֵ
void DestroyCard(vector<Card *> &c, string num);//���ٿ�Ƭ
