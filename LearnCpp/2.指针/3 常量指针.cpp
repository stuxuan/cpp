#include <iostream>

int main() 
{
	// 1. const 修饰指针
	// 指针的指向可以改, 指针指向的值不可以修改
	int a = 10;
	int b = 10;
	const int* p = &a;
	p = &b;

	// 2. const 修饰常量
	// 指针的指向不可以修改, 指针指向的值可以修改
	int* const p2 = &a;
	*p2 = 20;

	// 3. const修饰指针和常量
	// 指针的指向和值都不可以修改
	const int* const p3 = &a;

}