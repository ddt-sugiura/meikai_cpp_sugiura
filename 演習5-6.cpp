#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K5-6
�v�f�^��int�^�ŗv�f�����P�T�̔z��S�v�f��
�P�`�P�O�̗����������C*�̖_�O���t�Œl��\������v���O�������쐬����*/
int main() {
	//������ݒ�
	srand(time(NULL));
	//�z��̗v�f����萔�Ő錾
	const int LENGHT_INTEGER = 15;
	//int�^�̔z���錾
	int arrengeRand[LENGHT_INTEGER];
	//���[�v�̃J�E���g�Ɣz��̗v�f���w�肷�鐔��
	int countArrenge = 0;
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�e�v�f��1�`10�̃����_���Ȑ��l����
		arrengeRand[i] = 1 + rand() % 10;
	}
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�o�͂��镶������i�[����ϐ�
		string exertTxt;
		//i���ꌅ�̏ꍇ
		if (i < 10) {
			//�󔒂ŉE�񂹂�����
			exertTxt = " " + to_string(i);
		}
		//i���񌅂̏ꍇ
		else {
			//i�����̂܂�string�^��
			exertTxt = to_string(i);
		}
		//�\�̍s�ɓ���������o�͂���
		cout << "a[" << exertTxt << "] = :";
		//�e�v�f�ɑ}������Ă��鐔�l���̃��[�v���N����
		for (int j = 0; j < arrengeRand[i]; j++) {
			//���[�v����*���o�͂���
			cout << "*";
		}
		//���[�v�I���O�ɉ��s������
		cout << "\n";
	}
}