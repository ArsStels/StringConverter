#include <iostream>
#include <string>
using namespace std;

string format(string text)
{
	string text2 = "";
	char now;
	int cnt = text.length();
	char textChar[999999];
	for (int i = 0; i < text.length(); i++)
		textChar[i] = tolower(text[i]);
	for (int i = 0; i < text.length(); i++)
	{
		now = textChar[i];
		cnt = 0;
		for (int j = 0; j < text.length(); j++)
			if (textChar[j] == now) cnt++;
		if (cnt == 1) text2 += "("; else text2 += ")";
		cnt = 0;
	}
	return text2;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Вводите только на латинице, не более 999999 знаков и без пробелов.\n\n";
	string text;
	cin >> text;
	cout << format(text);
	cout << "\n\nНажмите Enter для закрытия.";
	cin.get();
	cin.get();
}