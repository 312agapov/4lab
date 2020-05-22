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
		cout << "���������� ����������� ������������� �����." << endl;
		cout << "1. ������� ������ Stack(int)" << endl;
		cout << "2. ������� ������ Stack(float)" << endl;
		cout << "3. ������� ������ Stack(char)" << endl;
		cout << "4. �����" << endl;
		menu = getch();
		system("cls");
		switch (menu) {
		case '1':
		{
			cout << "������ �����: ";
			cin >> _size;
			system("cls");
			Stack<int> A(_size);
			if (_size <=0){
                _size = 5;
                }
                else{
                _size = _size;
                }
			cout << "������ ������ Stack(int) �������� " << _size << endl;
			cout << "-------------------------------------------" << endl;
			cout << "������������ �����: " << "\n\n";
			A.Print();
			while (1) {
				cout << "-------------------------------------------" << endl;
				cout << "1. ���������" << endl;
				cout << "2. Push()" << endl;
				cout << "3. Pop()" << endl;
				cout << "4. Top()" << endl;
				cout << "5. isEmpty()" << endl;
				cout << "6. Size()" << endl;
				cout << "7. Clear()" << endl;
				cout << "8. �����" << endl;
				menu = getch();
				system("cls");
				switch (menu) {
				case '1':
					system("cls");
					goto L;
					break;
				case '2':
					cout << "�������� ��� ����: ";
					cin >> i_v;
					A.Push(i_v);
					cout << "-------------------------------------------" << endl;
					break;
				case '3':
					cout << "���������� �������" << endl;
					A.Pop();
					cout << "-------------------------------------------" << endl;
					break;
				case '4':
					cout << "������� ������� �����: " << A.Top() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '5':
					if (A.isEmpty()) {
						cout << "���� ����!" << endl;
					} else {
						cout << "���� �� ����!" << endl;
					}
					cout << "-------------------------------------------" << endl;
					break;
				case '6':
					cout << "������ �����: " << A.Size() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '7':
					cout << "������� ����" << endl;
					A.Clear();
					cout << "-------------------------------------------" << endl;
					break;
				case '8':
					cout << "������ ��������� ����������." << endl;
					getch();
					return 0;
					break;
				}
				cout << "������������ �����: " << "\n\n";
				A.Print();
			}

		}
			break;
		case '2':
		{
			cout << "������ �����: ";
			cin >> _size;
			system("cls");
			Stack<float> A(_size);
			if (_size <=0){
                _size = 5;
                }
                else{
                _size = _size;
                }
			cout << "������ ������ Stack<float> �������� " << _size  << endl;
			cout << "-------------------------------------------" << endl;
			cout << "������������ �����: " << "\n\n";
			A.Print();
			while (1) {
				cout << "-------------------------------------------" << endl;
				cout << "1. ���������" << endl;
				cout << "2. Push()" << endl;
				cout << "3. Pop()" << endl;
				cout << "4. Top()" << endl;
				cout << "5. isEmpty()" << endl;
				cout << "6. Size()" << endl;
				cout << "7. Clear()" << endl;
				cout << "8. �����" << endl;
				menu = getch();
				system("cls");
				switch (menu) {
				case '1':
					system("cls");
					goto L;
					break;
				case '2':
					cout << "�������� ��� ����: ";
					cin >> f_v;
					A.Push(f_v);
					cout << "-------------------------------------------" << endl;
					break;
				case '3':
					cout << "���������� �������" << endl;
					A.Pop();
					cout << "-------------------------------------------" << endl;
					break;
				case '4':
					cout << "������� ������� �����: " << A.Top() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '5':
					if (A.isEmpty()) {
						cout << "���� ����!" << endl;
					}
					else {
						cout << "���� �� ����!" << endl;
					}
					cout << "-------------------------------------------" << endl;
					break;
				case '6':
					cout << "������ �����: " << A.Size() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '7':
					cout << "������� ����" << endl;
					A.Clear();
					cout << "-------------------------------------------" << endl;
					break;
				case '8':
					cout << "������ ��������� ����������." << endl;
					return 0;
					break;
				}
				cout << "������������ �����: " << "\n\n";
				A.Print();
			}

		}
			break;
		case '3':
		{
			cout << "������ �����: ";
			cin >> _size;
			system("cls");
			Stack<char> A(_size);
			if (_size <=0){
                _size = 5;
                }
                else{
                _size = _size;
                }
			cout << "������ ������ Stack<char> �������� " << _size << endl;
			cout << "-------------------------------------------" << endl;
			cout << "������������ �����: " << "\n\n";
			A.Print();
			while (1) {
				cout << "-------------------------------------------" << endl;
				cout << "1. ���������" << endl;
				cout << "2. Push()" << endl;
				cout << "3. Pop()" << endl;
				cout << "4. Top()" << endl;
				cout << "5. isEmpty()" << endl;
				cout << "6. Size()" << endl;
				cout << "7. Clear()" << endl;
				cout << "8. �����" << endl;
				menu = getch();
				system("cls");
				switch (menu) {
				case '1':
					system("cls");
					goto L;
					break;
				case '2':
					cout << "�������� ��� ����: ";
					cin >> c_v;
					A.Push(c_v);
					cout << "-------------------------------------------" << endl;
					break;
				case '3':
					cout << "���������� �������" << endl;
					A.Pop();
					cout << "-------------------------------------------" << endl;
					break;
				case '4':
					cout << "������� ������� �����: " << A.Top() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '5':
					if (A.isEmpty()) {
						cout << "���� ����!" << endl;
					}
					else {
						cout << "���� �� ����!" << endl;
					}
					cout << "-------------------------------------------" << endl;
					break;
				case '6':
					cout << "������ �����: " << A.Size() << endl;
					cout << "-------------------------------------------" << endl;
					break;
				case '7':
					cout << "������� ����" << endl;
					A.Clear();
					cout << "-------------------------------------------" << endl;
					break;
				case '8':
					cout << "������ ��������� ����������." << endl;
					return 0;
					break;
				}
				cout << "������������ �����: " << "\n\n";
				A.Print();
			}

		}
		break;
		case '4':
			cout << "������ ��������� ����������." << endl;
			return 0;
		break;
		default:
			cout << "������ �������� ����� ����. ��������� ����." << endl;
			getch();
			system("cls");
			break;
		}
	}

	return 0;
}
