#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

template <typename T>
class Stack {
private:
	T *array; //��������� �� ������
	int size; //������ �����
	int top; //������� ������� �����
public:
	Stack() : Stack(5){} //����������� �� ���������

	Stack(int arg_size) { //����������� � �����������
		if (arg_size > 0) {
			size = arg_size;
		} else {
			size = 5;
		}
		array = new T[size+1]; //��������� ������
		for (int i = 0; i <= size; ++i) //���������� ������
			array[i] = 0;
		top = -1; //��������� ������� �����
	}

	Stack(Stack & arg) {
		size = arg.size;
		top = arg.top;
		for (int i = 0; i <= size; ++i) {
			array[i] = arg.array[i];
		}
	}

	void Print() const { //������� ����
		for (int i = size-1; i >= 0; --i) {
			cout << "|\t" << array[i] << "\t|" << endl;
		}
	}

	void Push(T arg) { //������������ ��������
		if (top == size-1) {
			cout << "Stack ����������!" << endl;
		} else {
			++top;
			array[top] = arg;
		}
		return;
	}

	void Pop() { //���������� �������
		if (top == -1) {
			cout << "Stack ����!" << endl;
			return;
		} else {
			array[top] = 0;
			--top;
		}
	}

	T Top() { //���������� ������� �������
		if (top == -1) {
			cout << "Stack ����!" << endl;
			return -1;
		}else {
			return array[top];
		}
	}

	void Clear() { //������� ���� (������ �������)
		for (int i = 0; i < size; ++i)
			array[i] = 0;
		top = -1;
		return;
	}

	bool isEmpty() { //��������� ���� �� �������
		if (top ==- 1){
            return true;
        }
        else{
        return false;
        }
	}

	int Size() { //���������� ������ �����
		return size;
	}

	Stack & operator=(const Stack &arg) {
		Stack(this->size = arg.size, this->top = arg.top);
		for (int i = 0; i <= size; ++i) {
			this->array[i] = arg.array[i];
		}
		return *this;
	}

	~Stack() { //������� ������
		delete[]array;
	}
};

#endif //STACK_H_INCLUDED
