#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K5-7
�S������������āC�c�����̖_�O���t���o�͂���v���O�������쐬����

���K5-6
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
		arrengeRand[i] = rand() % 11;
	}
	//12�񕪂̃��[�v���N�����C�e�s�̏o�͂��s��
	for (int j = 0; j < 12; j++) {
		//�̕����10�񕪂̏o�͏���
		if (j < 10) {
			//�v�f�����̃��[�v���N����
			for (int i = 0; i < LENGHT_INTEGER; i++) {
				//�}������Ă鐔�l�������琔���č��̗�ɓ͂��ꍇ
				if (arrengeRand[i] >= 10 - j) {
					//*���o��
					cout << " *";
				}
				else {
					//�󔒂��o��
					cout << "  ";
				}
			}
		}
		//11��ڂ̏o�͏���
		else if (j == 10) {
			//�v�f�����̃��[�v���N����
			for (int i = 0; i < LENGHT_INTEGER; i++) {
				//���̐����o��
				cout << "--";
			}
			//�����𒲐�
			cout << "-";
		}
		//12��ڂ̏o�͏���
		else {
			//�v�f�����̃��[�v���N����
			for (int i = 0; i < LENGHT_INTEGER; i++) {
				//10�Ŋ������]����o�͂���
				cout << " " << i%10 ;
			}
		}
		//���[�v�O�ɉ��s������
		cout << "\n";
	}
}