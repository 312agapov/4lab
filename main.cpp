#include "Stack.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char menu;
	int _size;
	int i_v =0;
	float f_v =0;
	char c_v =0;

	while (1) {
		L:
		cout << "Реализация программной интерпритации стека." << endl;
		cout << "1. Создать объект Stack(int)" << endl;
		cout << "2. Создать объект Stack(float)" << endl;
		cout << "3. Создать объект Stack(char)" << endl;
		cout << "4. Выход" << endl;
		menu = getch();
		system("cls");
		switch (menu) {
		case '1':
		{
			cout << "Размер стека: ";
			cin >> _size;
			system("cls");
			Stack<int> A(_size);
			if (_size <=0){
               			_size = 5;
               		}
                	else{
                		_size = _size;
                	}
			cout << "Создан объект Stack(int) размером " << _size << endl;
			cout << "-------------------------------------------" << endl;
			cout << "Визуализация стека: " << "\n\n";
			A.Print();
			while (1) {
				cout << "-------------------------------------------" << endl;
				cout << "1. Вернуться" << endl;
				cout << "2. Push()" << endl;
				cout << "3. Pop()" << endl;
				cout << "4. Top()" << endl;
				cout << "5. isEmpty()" << endl;
				cout << "6. Size()" << endl;
				cout << "7. Clear()" << endl;
				cout << "8. Выход" << endl;
				menu = getch();
				system("cls");
				switch (menu) {
				case '1':
					system("cls");
					goto L;
					break;
				case '2':
					cout << "Значение для пуша: ";
					cin >> i_v;
					A.Push(i_v);
					cout << "-------------------------------------------" << endl;
					break;
				case '3':
					cout << "Производим выборку" << endl;
					A.Pop();
					cout << "-------------------------------------------" << endl;
					break;
				case '4':
					cout << "Верхний элемент стека: " << A.Top() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '5':
					if (A.isEmpty()) {
						cout << "Стек пуст!" << endl;
					} else {
						cout << "Стек не пуст!" << endl;
					}
					cout << "-------------------------------------------" << endl;
					break;
				case '6':
					cout << "Размер стека: " << A.Size() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '7':
					cout << "Очищаем стек" << endl;
					A.Clear();
					cout << "-------------------------------------------" << endl;
					break;
				case '8':
					cout << "Работа программы прекращена." << endl;
					getch();
					return 0;
					break;
				}
				cout << "Визуализация стека: " << "\n\n";
				A.Print();
			}

		}
			break;
		case '2':
		{
			cout << "Размер стека: ";
			cin >> _size;
			system("cls");
			Stack<float> A(_size);
			if (_size <=0){
                		_size = 5;
                	}
                	else{
                		_size = _size;
                	}
			cout << "Создан объект Stack<float> размером " << _size  << endl;
			cout << "-------------------------------------------" << endl;
			cout << "Визуализация стека: " << "\n\n";
			A.Print();
			while (1) {
				cout << "-------------------------------------------" << endl;
				cout << "1. Вернуться" << endl;
				cout << "2. Push()" << endl;
				cout << "3. Pop()" << endl;
				cout << "4. Top()" << endl;
				cout << "5. isEmpty()" << endl;
				cout << "6. Size()" << endl;
				cout << "7. Clear()" << endl;
				cout << "8. Выход" << endl;
				menu = getch();
				system("cls");
				switch (menu) {
				case '1':
					system("cls");
					goto L;
					break;
				case '2':
					cout << "Значение для пуша: ";
					cin >> f_v;
					A.Push(f_v);
					cout << "-------------------------------------------" << endl;
					break;
				case '3':
					cout << "Производим выборку" << endl;
					A.Pop();
					cout << "-------------------------------------------" << endl;
					break;
				case '4':
					cout << "Верхний элемент стека: " << A.Top() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '5':
					if (A.isEmpty()) {
						cout << "Стек пуст!" << endl;
					}
					else {
						cout << "Стек не пуст!" << endl;
					}
					cout << "-------------------------------------------" << endl;
					break;
				case '6':
					cout << "Размер стека: " << A.Size() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '7':
					cout << "Очищаем стек" << endl;
					A.Clear();
					cout << "-------------------------------------------" << endl;
					break;
				case '8':
					cout << "Работа программы прекращена." << endl;
					return 0;
					break;
				}
				cout << "Визуализация стека: " << "\n\n";
				A.Print();
			}

		}
			break;
		case '3':
		{
			cout << "Размер стека: ";
			cin >> _size;
			system("cls");
			Stack<char> A(_size);
			if (_size <=0){
                		_size = 5;
               		}
               		else{
                		_size = _size;
                	}
			cout << "Создан объект Stack<char> размером " << _size << endl;
			cout << "-------------------------------------------" << endl;
			cout << "Визуализация стека: " << "\n\n";
			A.Print();
			while (1) {
				cout << "-------------------------------------------" << endl;
				cout << "1. Вернуться" << endl;
				cout << "2. Push()" << endl;
				cout << "3. Pop()" << endl;
				cout << "4. Top()" << endl;
				cout << "5. isEmpty()" << endl;
				cout << "6. Size()" << endl;
				cout << "7. Clear()" << endl;
				cout << "8. Выход" << endl;
				menu = getch();
				system("cls");
				switch (menu) {
				case '1':
					system("cls");
					goto L;
					break;
				case '2':
					cout << "Значение для пуша: ";
					cin >> c_v;
					A.Push(c_v);
					cout << "-------------------------------------------" << endl;
					break;
				case '3':
					cout << "Производим выборку" << endl;
					A.Pop();
					cout << "-------------------------------------------" << endl;
					break;
				case '4':
					cout << "Верхний элемент стека: " << A.Top() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '5':
					if (A.isEmpty()) {
						cout << "Стек пуст!" << endl;
					}
					else {
						cout << "Стек не пуст!" << endl;
					}
					cout << "-------------------------------------------" << endl;
					break;
				case '6':
					cout << "Размер стека: " << A.Size() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '7':
					cout << "Очищаем стек" << endl;
					A.Clear();
					cout << "-------------------------------------------" << endl;
					break;
				case '8':
					cout << "Работа программы прекращена." << endl;
					return 0;
					break;
				}
				cout << "Визуализация стека: " << "\n\n";
				A.Print();
			}

		}
		break;
		case '4':
			cout << "Работа программы прекращена." << endl;
			return 0;
		break;
		default:
			cout << "Выбран неверный пункт меню. Повторите ввод." << endl;
			getch();
			system("cls");
			break;
		}
	}

	return 0;
}
