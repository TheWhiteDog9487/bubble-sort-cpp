#include "��ͷ.h"

int number[10]{ 10,5,6,7,985,1024,36,0,9,15 };
int length = sizeof(number) / sizeof(number[0]);

auto swap(int& number_a, int& number_b) {
	// �ǵ�ʹ�����û���ָ����Ϊ������ԭ��ֵ����ɶ���ɲ���
	int temp = number_a;
	number_a = number_b;
	number_b = temp;}

int main() {

	for (int temp = 1; temp <= length; temp++) {
		for (int temp = 0;temp < length-1;temp++) {
			if (number[temp] > number[temp + 1]){
				swap(number[temp], number[temp + 1]);}}}

	for (int index = 0; index < length; index++) {cout << number[index] << endl; }
	system("pause");}