#include<stdio.h>
#include<Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float t;
	printf("Введите температуру в комнате:");
	scanf_s("%f", &t);
	if(t<18){
		printf("ХОЛОДНО");
	}
	if ((t >= 18)&&(t<22)) {
		printf("ПРОХЛАДНО");
	}
	if ((t >= 22) && (t < 26)) {
		printf("ТЕПЛО");
	}
	if (t >= 26) {
		printf("ЖАРКО");
	}
}