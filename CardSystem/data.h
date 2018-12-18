// data.h : ���ݲ����İ����ļ���
// �����ļ������Ϳ�����
// 

#pragma once
#include <iostream>
#include <fstream>//����Ϣ�������ļ���
#include <vector>//����
#include "Card.h"//ѧ����
#include "Bus.h"//��

const string f1 = "Card.txt";//���ļ���
const string f2 = "Bus.txt";//���ļ���

//�ļ�����

int GetNumberFromFile(string fname);//�õ��ļ������ݵ�����
void GetData(string fname, vector<Card>& c);//�õ��ļ�������
void Sort(vector<Card>& c);//����������
int Search(vector<Card>& c, string num);//���ҿ�Ƭ
void FlashFile(string fname, vector<Card>& c);//�����ļ�

//��Ƭ����

void CreateCard(vector<Card>& c, string num);//�����¿�
void OutPutInfo(vector<Card>& c, string num);//��ѯ��Ϣ
void TopUp(vector<Card>& c, string num);//����ֵ
void DestroyCard(vector<Card>& c, string num);//���ٿ�Ƭ