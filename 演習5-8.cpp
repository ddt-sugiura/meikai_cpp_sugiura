#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K5-8
�z��̕��т������_���ɃV���b�t������v���O�������쐬����*/
int main() {
	//������ݒ�
	srand(time(NULL));
	//�z��̗v�f����萔�Ő錾
	const int LENGHT_INTEGER = 10;
	//int�^�̔z���錾
	int arrengeOrder[LENGHT_INTEGER];
	//for���[�v�̃J�E���g�Ɣz��̗v�f���w�肷�鐔��
	int countArrenge = 0;
	//�v�f�����̃��[�v���N����
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//�e�v�f�֏���1�`10��}��
		arrengeOrder[countArrenge] = countArrenge + 1;
		//�e�v�f�̒��g�����ɏo��
		cout << "a[" << countArrenge << "] = " << arrengeOrder[countArrenge] << "\n";
	}
	//����ւ��p�̔z��𓯂������Ő錾
	int arrengeShuf[LENGHT_INTEGER];
	//�z��̗v�f�ɓ����Ă��Ȃ��Œ�l��錾
	const int DUMMY_INTEGER = 20;
	//while���[�v�̃J�E���g�Ɣz��̗v�f���w�肷�鐔��
	int countShuf = 0;
	//�J�E���g�ϐ����z��̗v�f���ɂȂ�܂Ń��[�v����
	while (countShuf < LENGHT_INTEGER) {
		//0�`9�̃����_���Ȑ�����錾
		int randElement = rand() % 10;
		//arrengeOrde�̎w�肳�ꂽ�����_���ȗv�f�������ςݏo�Ȃ��ꍇ�ɏ������s��
		if (arrengeOrder[randElement] != DUMMY_INTEGER) {
			//arrengeShuf�֏��ɗv�f�̒l�������Ă���
			arrengeShuf[countShuf] = arrengeOrder[randElement];
			//�����ς݂̗v�f�Ƃ���arrengeOrder�̗v�f��ς���
			arrengeOrder[randElement] = DUMMY_INTEGER;
			//��A�̏����������ꍇ�ɃJ�E���g�ϐ������Z����
			countShuf++;
		}
	}
	//�v�f�����̃��[�v���N����
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//�e�v�f�֏���1�`10��}��
		arrengeOrder[countArrenge] = arrengeShuf[countArrenge];
	}
	//���ѕς������Ƃ�������o��
	cout << "�v�f�̕��т��V���b�t�����܂���\n";
	//�v�f�����̃��[�v���N����
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//�e�v�f�̒��g�����ɏo��
		cout << "a[" << countArrenge << "] = " << arrengeOrder[countArrenge] << "\n";
	}
}