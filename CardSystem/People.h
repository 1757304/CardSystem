#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

/**
* �Ա�
* MALE ����
* FEMALE Ů��
*/
enum Sex { MALE, FEMALE };

/**
* ��
* �����˵Ļ�����Ϣ��
* �������Ա�ְ��������λ�����ʺ�/ѧ�ŵ�
*/
class People
{
public:
	People();
	void InputInfo(char * num);//�����˵���Ϣ
	char * GetNum();//�õ����ʺ�/ѧ����Ϣ
	void OutPutInfo();//��ʾ�˵���Ϣ
	~People();
private:
	char name[32];//����
	Sex sex;//�Ա�
	char position[32];//ְ��
	char unit[32];//������λ
	char number[32];//���ʺ�/ѧ��
};

