#include "stdafx.h"
#include "data.h"

//�ļ�����

//�õ��ļ������ݵ�����
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

//�õ��ļ�������
void GetData(string fname, vector<Card>& c)
{
	if (c.size() == 0)
		return;
	ifstream infile;
	infile.open(fname, ios::binary);//�Զ���ʽ���ļ�

	if (!infile)
	{
		cout << "��ʧ�ܣ�" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
		infile.read(((char*)&c[i]), sizeof(Card));//��ȡ����

	Sort(c);//����

	infile.close();//�ر��ļ�
}

//����������
void Sort(vector<Card>& c)
{
	if (c.size() < 2)
		return;
	//��������
	int i, j;
	bool flag = true;//���
	Card t;//��ʱ����

	for (i = 0; i < c.size() && flag; i++)
		for (j = 0; j < c.size() - i; j++)
		{
			flag = false;
			if (c[j].GetNum() > c[j + 1].GetNum())
			{
				t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
				flag = true;
			}
		}
}

//���ҿ�Ƭ
int Search(vector<Card>& c, string num)
{
	if (c.size() == 0)
		return -1;
	//���ֲ���
	int low = 0, high = c.size() - 1, mid;
	while (low < high)
	{
		mid = (low + high) / 2;
		if (c[mid].GetNum() == num)
			return mid;
		else if (c[mid].GetNum() > num)
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (c[low].GetNum() == num)
		return low;
	else
		return -1;//����ʧ��
}

//�����ļ�
void FlashFile(string fname, vector<Card>& c)
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
		outfile.write(((char*)&c[i]), sizeof(Card));//д������
	}

	outfile.close();
}

//��Ƭ����

//�����¿�
void CreateCard(vector<Card>& c, string num)
{
	int s = Search(c, num);
	if (s != -1)//�Ѵ���
	{
		cout << "�˿��Ѵ��ڣ�" << endl;
		return;
	}

	//����
	Card card;
	card.InputInfo(num);//������Ϣ
	card.TopUp();//��ֵ
	c.push_back(card);//��������
	Sort(c);//����
}

//��ѯ��Ϣ
void OutPutInfo(vector<Card>& c, string num)
{
	int s = Search(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		c[s].OutPutInfo();//��ʾ��Ϣ
}

//����ֵ
void TopUp(vector<Card>& c, string num)
{
	int s = Search(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		c[s].TopUp();//��ֵ
}

//���ٿ�Ƭ
void DestroyCard(vector<Card>& c, string num)
{
	int s = Search(c, num);
	if (s == -1)//û�ҵ�
		cout << "�ÿ������ڣ�" << endl;
	else
		c.erase(c.begin() + s, c.begin() + s + 1);//ɾ��Ԫ��
}
