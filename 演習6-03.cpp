#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K6-3
�O��int�^�����̒����璆���l�����߂�֐�
 med(int a,int b,int c) ���쐬����*/

int med(int a, int b, int c) {
	//�Ԃ��l���i�[����ϐ���錾
	int resultInteger = -1;
	//��ڂƓ�ڂ̈������r
	if (a <= b) {
		//��ڂƎO�ڂ̈������r
		if (b <= c) {
			//��ڂ̒l�������l�ɂȂ�
			resultInteger = b;
		}
		//��ڂƎO�ڂ̈������r
		else if(c <= a){
			//��ڂ̒l�������l�ɂȂ�
			resultInteger = a;
		}
		//��L��̕���Ɉ���������Ȃ������ꍇ
		else {
			//�O�ڂ̒l�������l�ɂȂ�
			resultInteger = c;
		}
	}
	else{
		//��ڂƎO�ڂ̈������r
		if (a <= c) {
			//��ڂ̒l�������l�ɂȂ�
			resultInteger = a;
		}
		//��ڂƎO�ڂ̈������r
		else if (c <= b) {
			//��ڂ̒l�������l�ɂȂ�
			resultInteger = b;
		}
		//��L��̕���Ɉ���������Ȃ������ꍇ
		else {
			//�O�ڂ̒l�������l�ɂȂ�
			resultInteger = c;
		}
	}
	//�O�̈����̒����l��Ԃ�
	return resultInteger;
}

int main() {

	//�����̐����Œ�l�Ő錾
	const int NUMBER_OF_ARGUMENTS = 3;
	//med�̃e�X�g���s�����߂̔z��
	int testArray[NUMBER_OF_ARGUMENTS];
	//�����̐��������[�v������
	for (int i = 0; i < NUMBER_OF_ARGUMENTS; i++) {
		//�ϐ��ɐ�������ꂳ����
		cout << i + 1 << "�߂̐�������͂��Ă�������";
		//���͂����������i�[�����
		cin >> testArray[i];
	}
	//med�̏������ʂ��o�͂���
	cout << "med�� " << med(testArray[0], testArray[1], testArray[2]) << " ��Ԃ��܂�";
}