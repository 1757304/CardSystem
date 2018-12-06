#include "stdafx.h"
#include "data.h"

template<class T> int GetNumberFromFile(string fname)
{
	int count = 0;//�������
	fstream infile(fname, ios::in | ios::binary);//�Զ���ʽ���ļ�

	if (!infile)
	{
		cout << "��ʧ�ܣ�" << endl;
		getchar();
		exit(0);
	}

	T c;
	while (infile.read((char*)&c, sizeof(c)))//ǿ������ת��Ϊ(char*),
	{
		count++;
	}
	infile.close();//�ر��ļ�

	return count;
}

template<class T> void GetData(string fname, vector<T> &c)
{
	fstream infile(fname, ios::in | ios::binary);//�Զ���ʽ���ļ�

	if (!infile)
	{
		cout << "��ʧ�ܣ�" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
		infile.read((char*)&c[i], sizeof(c[i]));//��ȡ����

	infile.close();//�ر��ļ�
}


template<class T> void Sort(vector<T> &c)
{
	int i, j;
	bool flag = true;//���
	T t;//��ʱ����

	for (i = 0; i <= c.size() - 1 && flag; i++)
		for (j = 0; j <= c.size() - 1 - i; j++)
		{
			flag = false;
			if (c[j].getNum() > c[j + 1].getNum())
			{
				t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
				flag = true;
			}
		}
}

template<class T> int Seach(vector<T> &c, string s)
{
	return 0;
}

template<class T> void FlashFile(string fname, vector<T> &c)
{
	fstream outfile(fname, ios::out | ios::trunc);//�ضϡ���д��ʽ���ļ�

	if (!outfile)
	{
		cout << "��ʧ�ܣ�" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
		outfile.write((char*)&c[i], sizeof(c[i]));//д������
}

template<class T> void CreateCard(vector<T> &c)
{
	T card;
	T.InputInfo();//������Ϣ
	T.TopUp();//��ֵ
	c.push_back(T);//��������
	Sort<T>(c);
}

template<class T> void OutInfo(vector<T> &c, string num)
{
	s = seach<T>(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		c[s].OutInfo();//��ʾ��Ϣ
}

template<class T> void TopUp(vector<T> &c, string num)
{
	s = seach<T>(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		c[s].TopUp();//��ֵ
}

template<class T> void DestroyCard(vector<T> &c, string num)
{
	s = seach<T>(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		c.erase(c.begin() + s, c.begin() + s + 1);//ɾ��Ԫ��
}

