#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K6-4
* ���ar�̖ʐς����߂ĕԋp����֐�
 cric_area(double r) ���쐬����*/

double cric_area(double r) {
	//�~�������Œ�l�Ő錾
	double DEFAULTE_PI = 3.14;
	//���a�~���a�~�~������ԋp
	return r * r * DEFAULTE_PI;
}

int main() {
	//cric_area�̃e�X�g���s�����߂̕ϐ�
	double testVariable;
	//�ϐ��ɐ�������ꂳ����
	cout << "���a�ƂȂ鐔�l����͂��Ă�������";
	//���͂����������i�[�����
	cin >> testVariable;
	//cric_area�̏������ʂ��o�͂���
	cout << "cric_area�͉~�̖ʐςƂ��� " << cric_area(testVariable) << " ��Ԃ��܂�";
}