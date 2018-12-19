// data.h : ���ݲ����İ����ļ���
// �����ļ������Ϳ�����
// 

#pragma once
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
int Search(vector<Card>& c, char * num);//���ҿ�Ƭ
void FlashFile(string fname, vector<Card>& c);//�����ļ�

//��Ƭ����

void CreateCard(vector<Card>& c, char * num);//�����¿�
void OutPutInfo(vector<Card>& c, char * num);//��ѯ��Ϣ
void TopUp(vector<Card>& c, char * num);//����ֵ
void DestroyCard(vector<Card>& c, char * num);//���ٿ�Ƭ