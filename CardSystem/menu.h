// menu.h : �˵�����İ����ļ���
// ������ϵͳ�ͳ�ϵͳ
// 

#pragma once
#include <iostream>
#include <fstream>//����Ϣ�������ļ���
#include <vector>//����
#include "Card.h"//ѧ����
#include "Bus.h"//�೵
#include "data.h"//�ļ��Ϳ��Ĳ���

using namespace std;

void Menu(vector<Card>& c);//�ܲ˵�
void SeleteMenu(vector<Card>& c);//ѡ��˵�
void Menu1(vector<Card>& c);//�����¿��˵�
void Menu2(vector<Card>& c);//��ѯ��Ϣ�˵�
void Menu3(vector<Card>& c);//����ֵ�˵�
void Menu4(vector<Card>& c);//���ٿ�Ƭ�˵�
void Menu0(vector<Card>& c);//�˳�ϵͳ
void BusMenu();//�೵�˵�