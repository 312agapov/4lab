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
	T *array; //указатель на массив
	int size; //размер стека
	int top; //верхний элемент стека
public:
	Stack() : Stack(5){} //конструктор по умолчанию

	Stack(int arg_size) { //конструктор с параметрами
		if (arg_size > 0) {
			size = arg_size;
		} else {
			size = 5;
		}
		array = new T[size+1]; //выделение памяти
		for (int i = 0; i <= size; ++i) //заполнение нулями
			array[i] = 0;
		top = -1; //индикатор пустого стека
	}

	Stack(Stack & arg) {
		size = arg.size;
		top = arg.top;
		for (int i = 0; i <= size; ++i) {
			array[i] = arg.array[i];
		}
	}

	void Print() const { //выводим стек
		for (int i = size-1; i >= 0; --i) {
			cout << "|\t" << array[i] << "\t|" << endl;
		}
	}

	void Push(T arg) { //проталкиваем элементы
		if (top == size-1) {
			cout << "Stack переполнен!" << endl;
		} else {
			++top;
			array[top] = arg;
		}
		return;
	}

	void Pop() { //производим выборку
		if (top == -1) {
			cout << "Stack пуст!" << endl;
			return;
		} else {
			array[top] = 0;
			--top;
		}
	}

	T Top() { //возвращаем верхний элемент
		if (top == -1) {
			cout << "Stack пуст!" << endl;
			return -1;
		}else {
			return array[top];
		}
	}

	void Clear() { //очищаем стек (полная выборка)
		for (int i = 0; i < size; ++i)
			array[i] = 0;
		top = -1;
		return;
	}

	bool isEmpty() { //проверяем стек на пустоту
		if (top ==- 1){
            return true;
        }
        else{
        return false;
        }
	}

	int Size() { //возвращает размер стека
		return size;
	}

	Stack & operator=(const Stack &arg) {
		Stack(this->size = arg.size, this->top = arg.top);
		for (int i = 0; i <= size; ++i) {
			this->array[i] = arg.array[i];
		}
		return *this;
	}

	~Stack() { //очищаем память
		delete[]array;
	}
};

#endif //STACK_H_INCLUDED
