// data.h : ���ݲ����İ����ļ���
// �����ļ������Ϳ�����
// 

#pragma once
#include <fstream>//����Ϣ�������ļ���
#include <vector>//����
#include "Card.h"//ѧ����
#include "Bus.h"//��

const string fname = "Card.txt";//���ļ���

//�ļ�����

int GetNumberFromFile(string fname);//�õ��ļ������ݵ�����
void GetData(string fname, vector<Card>& c);//�õ��ļ�������
void Sort(vector<Card>& c);//����������
unsigned int Search(vector<Card>& c, unsigned int num);//���ҿ�Ƭ
void FlashFile(string fname, vector<Card>& c);//�����ļ�

//��Ƭ����

void CreateCard(vector<Card>& c, unsigned int num);//�����¿�
void OutPutInfo(vector<Card>& c, unsigned int num);//��ѯ��Ϣ
void TopUp(vector<Card>& c, unsigned int num);//����ֵ
void DestroyCard(vector<Card>& c, unsigned int num);//���ٿ�Ƭ