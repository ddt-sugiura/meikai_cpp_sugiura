#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K5-3
  �v�f�^��int�^�ŗv�f�����U�̔z��̑S�v�f�ɑ΂���
  �P�`�P�O�̗����������ďo�͂���v���O�������쐬����*/
int main() {
	//������ݒ�
	srand(time(NULL));
	//�z��̗v�f����萔�Ő錾
	const int LENGHT_INTEGER = 6;
	//int�^�̔z���錾
	int arrengeRand[LENGHT_INTEGER];
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�e�v�f��1�`10�̃����_���Ȑ��l����
		arrengeRand[i] = 1 + rand()%10;
	}
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�e�v�f�����ɏo�͂���
		cout << "a[" << i << "] = " << arrengeRand[i] << "\n";
	}
}