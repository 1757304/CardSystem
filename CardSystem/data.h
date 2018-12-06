#pragma once

//�ļ�������

#include <iostream>
#include <fstream>//����Ϣ�������ļ���
#include <vector>//����
#include "Bus.h"//��
#include "Student_Card.h"//ѧ����
#include "Teacher_Card.h"//��ʦ��
#include "Restrict_Card.h"//���ƿ�
#include "Temporary_Card.h"//��ʱ��

const string f1 = "Student.txt";//ѧ�����ļ���
const string f2 = "Teacher.txt";//��ʦ���ļ���
const string f3 = "Restrict.txt";//���ƿ��ļ���
const string f4 = "Temporary.txt";//��ʱ���ļ���

template<class T> int GetNumberFromFile(string fname);//�õ��ļ������ݵ�����
template<class T> void GetData(string fname, vector<T> &c);//��ȡ����
template<class T> void Sort(vector<T> &c);//����������
template<class T> int Seach(vector<T> &c, string s);//���ҿ�Ƭ
template<class T>  void FlashFile(string fname, vector<T> &c);//�����ļ�

template<class T> void CreateCard(vector<T> &c);//�����¿�
template<class T> void OutInfo(vector<T> &c, string num);//��ѯ��Ϣ
template<class T> void TopUp(vector<T> &c, string num);//����ֵ
template<class T> void DestroyCard(vector<T> &c, string num);//���ٿ�Ƭ
