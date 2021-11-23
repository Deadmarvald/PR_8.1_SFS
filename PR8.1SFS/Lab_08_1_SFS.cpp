// Lab_08_1_SFS.cpp
// Вольвенко Іван
// Лабораторна робота № 8.1(SFS)
// Пошук та заміна символів у літерному рядку
// Варіант 13

#include <iostream>
#include <string>

using namespace std;

int Count(const string str)
{
	if (str.length() < 3)
		return -1;
	else
	{
		int k = 0;
		size_t pos = 0;

		while ((pos = str.find('!', pos)) != -1)
		{
			pos++;
			if (str[pos + 1] == '!')
				if (str[pos -1] == '!')
					k++;
		}
		return k;
	}
}

string Change(string& str)
{
	size_t pos = 0;
	while ((pos = str.find('!', pos)) != -1)
	{
		if (str[pos + 1] == '!')
			if (str[pos + 2] == '!')
				str.replace(pos, 3, "**");
	}
	return str;
}

int main()
{
	string str;

	cout << "Enter String:" << endl;
	getline(cin, str);

	if (Count(str) == -1)
		cerr << "Enter more characters" << endl;
	else
	{
		cout << "String conteined " << Count(str) << " groups of '!!!'" << endl;

		string dest = Change(str);

		cout << "Modified string (param): " << str << endl;
		cout << "Modified string (result): " << dest << endl;
	}

	return 0;
}