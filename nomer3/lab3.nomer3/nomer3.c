#include<stdio.h>
#include<Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float t;
	printf("������� ����������� � �������:");
	scanf_s("%f", &t);
	if(t<18){
		printf("�������");
	}
	if ((t >= 18)&&(t<22)) {
		printf("���������");
	}
	if ((t >= 22) && (t < 26)) {
		printf("�����");
	}
	if (t >= 26) {
		printf("�����");
	}
}