#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K5-9
�z��a�̑S�v�f��z��b�ɑ΂��ċt���ɃR�s�[����v���O�������쐬����*/
int main() {

	//�z��̗v�f����萔�Ő錾
	const int LENGHT_INTEGER = 5;
	//int�^�̔z��a��錾
	int arrengeA[LENGHT_INTEGER];
	//int�^�̔z��b��z��a�Ɠ��������Ő錾
	int arrengeB[LENGHT_INTEGER] = { 0 };
	//for���[�v�̃J�E���g�Ɣz��̗v�f���w�肷�鐔��
	int countArrenge = 0;
	//�v�f�����̃��[�v���N�����C�z��a�̊e�v�f�ɒl�����Ă���
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//�e�v�f�̒��g�����ɓ���
		cout << "a[" << countArrenge << "] : ";
		//�C�ӂ̒l��v�f�ɑ}��
		cin >> arrengeA[countArrenge];
	}
	//�v�f�����̃��[�v���N�����C�z��b�ւ̃R�s�[���s��
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//�z��b�̊e�v�f�֔z��a�̊e�v�f���t���ő}��
		arrengeB[countArrenge] = arrengeA[LENGHT_INTEGER - countArrenge - 1];
	}
	//�v�f�����̃��[�v���N����
	for (countArrenge = 0; countArrenge < LENGHT_INTEGER; countArrenge++) {
		//�z��b�̊e�v�f�̒��g�����ɏo��
		cout << "b[" << countArrenge << "] = " << arrengeB[countArrenge] << "\n";
	}
}