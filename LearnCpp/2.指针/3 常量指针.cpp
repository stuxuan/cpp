#include <iostream>

int main() 
{
	// 1. const ����ָ��
	// ָ���ָ����Ը�, ָ��ָ���ֵ�������޸�
	int a = 10;
	int b = 10;
	const int* p = &a;
	p = &b;

	// 2. const ���γ���
	// ָ���ָ�򲻿����޸�, ָ��ָ���ֵ�����޸�
	int* const p2 = &a;
	*p2 = 20;

	// 3. const����ָ��ͳ���
	// ָ���ָ���ֵ���������޸�
	const int* const p3 = &a;

}