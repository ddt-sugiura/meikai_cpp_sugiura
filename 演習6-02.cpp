#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K6-2
�O��int�^�����̒�����ŏ��l�����߂�֐�
 min(int a,int b,int c) ���쐬����*/

int min(int a, int b, int c) {
	//�Ԃ��l���i�[����ϐ��Ɉ�ڂ̈������b��I�ɑ��
	int resultInteger = a;
	//��ڂƓ�ڂ̈������r
	if (b < resultInteger) {
		//��ڂ̂ق����������Ȃ炻�̒l���㏑��
		resultInteger = b;
	}
	//�b��l�ƎO�ڂ̈����Ɣ�r
	if (c < resultInteger) {
		//�O�ڂ̂ق����������Ȃ炻�̒l���㏑��
		resultInteger = c;
	}
	//�O�̈����̒��ň�ԏ������l��Ԃ�
	return resultInteger;
}

int main() {

	//�����̐����Œ�l�Ő錾
	const int NUMBER_OF_ARGUMENTS = 3;
	//min�̃e�X�g���s�����߂̔z��
	int testArray[NUMBER_OF_ARGUMENTS];
	//�����̐��������[�v������
	for (int i = 0; i < NUMBER_OF_ARGUMENTS; i++) {
		//�ϐ��ɐ�������ꂳ����
		cout << i+1 <<"�߂̐�������͂��Ă�������";
		//���͂����������i�[�����
		cin >> testArray[i];
	}
	//min�̏������ʂ��o�͂���
	cout << "min�� " << min(testArray[0],testArray[1],testArray[2]) << " ��Ԃ��܂�";
}