#pragma once

//�ļ�������

#include <iostream>
#include <fstream>//����Ϣ�������ļ���
#include "Bus.h"//��
#include "Student_Card.h"//ѧ����
#include "Teacher_Card.h"//��ʦ��
#include "Restricting_Card.h"//���ƿ�
#include "Temporary_Card.h"//��ʱ��

int GetNumberFromFile(string fname);//�õ��ļ������ݵ�����
void FlashFile(string fname, Card[]);//�����ļ�
void Sort(Card c[], const int len);//����������
int Seach(Card c[], const int len);//���ҿ�Ƭ

void CreateCard(int type);//�����¿�
void OutInfo(string num);//��ѯ��Ϣ
void TopUp(string num);//����ֵ
void DestroyCard(string num);//���ٿ�Ƭ
