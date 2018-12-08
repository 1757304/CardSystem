#include "stdafx.h"
#include "menu.h"

void Menu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4)
{
	int type;

	cout << "********************" << endl;
	cout << "***��ӭʹ�ñ�ϵͳ***" << endl;
	cout << "********************" << endl;
	cout << "��ѡ��Ҫ�����ϵͳ������Ƭ����0���೵����1��" << endl;
	cin >> type;
	if (type == 0)
		CardMenu(c1, c2, c3, c4);//���뿨Ƭϵͳ
	else
		BusMenu();//����೵ϵͳ
}

void CardMenu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4)
{
	int m;//���ز�������
	int type;//��������

	cout << "********************" << endl;
	cout << "�����뿨�����ͣ���ѧ��������1����ʦ������2�����ƿ�����3����ʱ������4��" << endl;
	cin >> type;
	cout << "��ѡ��Ҫ���еĲ�����" << endl;
	cout << "1�������¿�" << endl;
	cout << "2����ѯ��Ϣ" << endl;
	cout << "3������ֵ" << endl;
	cout << "4�����ٿ�Ƭ" << endl;
	cout << "0���뿪ϵͳ" << endl;
	cin >> m;
	cout << "********************" << endl;
	
	SelectMenu(c1, c2, c3, c4, type, m);
}

void SelectMenu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type, int m)
{
	switch (m)
	{
	case 1:
		Menu1(c1, c2, c3, c4, type);
		break;
	case 2:
		Menu2(c1, c2, c3, c4, type);
		break;
	case 3:
		Menu3(c1, c2, c3, c4, type);
		break;
	case 4:
		Menu4(c1, c2, c3, c4, type);
		break;
	default:
		Menu0(c1, c2, c3, c4);
		break;
	}
}


void Menu1(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type)
{
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	switch (type)//����ָ�����͵Ŀ�
	{
	case 1:
		CreateCard(c1, num, type);
		break;
	case 2:
		CreateCard(c2, num, type);
		break;
	case 3:
		CreateCard(c3, num, type);
		break;
	case 4:
		CreateCard(c4, num, type);
		break;
	default:
		break;
	}
	cout << endl;
	CardMenu(c1, c2, c3, c4);//���س�ʼ�˵�
}

void Menu2(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type)
{
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	switch (type)//��ѯָ�����Ϳ�����Ϣ
	{
	case 1:
		OutPutInfo(c1, num);
		break;
	case 2:
		OutPutInfo(c2, num);
		break;
	case 3:
		OutPutInfo(c3, num);
	case 4:
		OutPutInfo(c4, num);
	default:
		break;
	}
	cout << endl;
	CardMenu(c1, c2, c3, c4);//���س�ʼ�˵�
}

void Menu3(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type)
{
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	switch (type)//��ֵָ�����͵Ŀ�
	{
	case 1:
		TopUp(c1, num);
		break;
	case 2:
		TopUp(c2, num);
		break;
	case 3:
		TopUp(c3, num);
	case 4:
		TopUp(c4, num);
	default:
		break;
	}
	cout << endl;
	CardMenu(c1, c2, c3, c4);//���س�ʼ�˵�
}

void Menu4(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type)
{
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	switch (type)//����ָ�����͵Ŀ�
	{
	case 1:
		DestroyCard(c1, num);
		break;
	case 2:
		DestroyCard(c2, num);
		break;
	case 3:
		DestroyCard(c3, num);
	case 4:
		DestroyCard(c4, num);
	default:
		break;
	}
	cout << endl;
	CardMenu(c1, c2, c3, c4);//���س�ʼ�˵�
}

void Menu0(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4)
{
	//�����ļ�
	FlashFile(f1, c1);
	FlashFile(f2, c2);
	FlashFile(f3, c3);
	FlashFile(f4, c4);

	cout << "*****ʹ����죡*****" << endl;
}

void BusMenu()
{
}

int GetNumberFromFile(string fname)
{
	int count = 0;//�������
	ifstream infile;
	infile.open(fname, ios::binary);//�Զ���ʽ���ļ�

	if (!infile)
	{
		cout << "��ʧ�ܣ�" << endl;
		getchar();
		exit(0);
	}

	Card c;
	while (infile.read((char*)&c, sizeof(c)))//ǿ������ת��Ϊ(char*),
	{
		count++;
	}
	infile.close();//�ر��ļ�

	return count;
}

template<class T> void GetData(string fname, vector<T *> &c)
{
	ifstream infile;
	infile.open(fname, ios::binary);//�Զ���ʽ���ļ�

	if (!infile)
	{
		cout << "��ʧ�ܣ�" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
	{
		c[i] = new T;//����ռ�
		infile.read((char*)&(*(c[i])), sizeof(T));//��ȡ����
	}

	//Sort(c);//����

	infile.close();//�ر��ļ�
}


void Sort(vector<Card *> &c)
{
	//��������
	int i, j;
	bool flag = true;//���
	Card * t;//��ʱ����

	for (i = 0; i <= c.size() - 1 && flag; i++)
		for (j = 0; j <= c.size() - 1 - i; j++)
		{
			flag = false;
			if (c[j]->GetNum() > c[j + 1]->GetNum())
			{
				t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
				flag = true;
			}
		}
}

int Search(vector<Card *> &c, string num)
{
	//���ֲ���
	int low = 0, high = c.size() - 1, mid;
	while (low < high)
	{
		mid = (low + high) / 2;
		if (c[mid]->GetNum() == num)
			return mid;
		else if (c[mid]->GetNum() > num)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

void FlashFile(string fname, vector<Card *> &c)
{
	ofstream outfile;
	outfile.open(fname, ios::trunc);//�ضϡ���д��ʽ���ļ�

	if (!outfile)
	{
		cout << "��ʧ�ܣ�" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
	{
		outfile.write((char*)&(*(c[i])), sizeof(*(c[i])));//д������
	}

	outfile.close();
}

void CreateCard(vector<Card *> &c, string num, int type)
{
	int s = Search(c, num);
	if (s != -1)//�Ѵ���
	{
		cout << "�˿��Ѵ��ڣ�" << endl;
		return;
	}

	//����
	Card * card = nullptr;
	switch (type)//������Ϣ
	{
	case 1:
		card = new StudentCard;
		card->InputInfo(num);
		break;
	case 2:
		card = new TeacherCard;
		card->InputInfo(num);
		break;
	case 3:
		card = new RestrictCard;
		card->InputInfo(num);
		break;
	case 4:
		card = new TemporaryCard;
		card->InputInfo(num);
	default:
		break;
	}
	card->TopUp();//��ֵ
	c.push_back(card);//��������
	Sort(c);
}

void OutPutInfo(vector<Card *> &c, string num)
{
	int s = Search(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		(*(c[s])).OutPutInfo();//��ʾ��Ϣ
}

void TopUp(vector<Card *> &c, string num)
{
	int s = Search(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		(*(c[s])).TopUp();//��ֵ
}

void DestroyCard(vector<Card *> &c, string num)
{
	int s = Search(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		c.erase(c.begin() + s, c.begin() + s + 1);//ɾ��Ԫ��
}