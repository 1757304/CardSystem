// CardSystem.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "menu.h"

int main()
{	
	int n = GetNumberFromFile(f1);
	vector<Card>c(n);
	cout << n;
	Menu(c);

    return 0;
}