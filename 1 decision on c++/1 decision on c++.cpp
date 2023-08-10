// 1 разбор задачки по алгоритмам

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// создаем строку
	string s;
	// вводим значение строки
	cin >> s;

	// создаем переменную пустой строки (наша самая частая буква)
	char ans = '\0';
	// создаем счетчик для подсчета символов (сколько раз она встречалась)
	int anscnt = 0;

	for (int i = 0; i < s.length(); i++) // сколько раз встречается нужная нам буква
	{
		int nowcnt = 0;
		for (int j = 0; j < s.length(); j++) // проверка строки на нужную нам букву
		{
			if (s[i] == s[j]) // если нужная нам буква
			{
				nowcnt++; // прибавляем в счетчике
			}
		}
		if (nowcnt > anscnt)  // сравниваем кол-во встречаемых символов
		{
			ans = s[i]; 
			anscnt = nowcnt;
			if (nowcnt = anscnt)
			{
				cout << "Multiple identical simvol, quantity: " << anscnt  << endl;
			}
			else {
				cout << ans << endl;
				cout << anscnt << endl; // вывод
			}
		}
	}
	
	return 0;
}
