#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K5-4
�A������v�f�������l�ƂȂ�Ȃ��悤��
���K5-3�̃v���O���������ς���
(���K5-3)
  �v�f�^��int�^�ŗv�f�����U�̔z��̑S�v�f�ɑ΂���
  �P�`�P�O�̗����������ďo�͂���v���O�������쐬����*/
int main() {
	//������ݒ�
	srand(time(NULL));
	//�z��̗v�f����萔�Ő錾
	const int LENGHT_INTEGER = 6;
	//int�^�̔z���錾
	int arrengeRand[LENGHT_INTEGER];
	//���[�v�̃J�E���g�Ɣz��̗v�f���w�肷�鐔��
	int countArrenge = 0;
	//�A������v�f�������l���m�F���邽�߂̐���
	int chackBooking = 0;
	while (countArrenge < LENGHT_INTEGER) {
		//�e�v�f��1�`10�̃����_���Ȑ��l��錾
		int randNumeric = 1 + rand() % 10;
		//�`�F�b�N�p�̐����Ɣ�r�i���񎞂̂�0�������Ă��邽�ߕK���ʉ߂ł���j
		if (randNumeric != chackBooking) {
			//�錾�����l��z��ɑ������
			arrengeRand[countArrenge] = randNumeric;
			//�����l���`�F�b�N�p�ϐ��Ɋi�[�����̔z��̗v�f�Ɏg��
			chackBooking = arrengeRand[countArrenge];
			//�z��ɗv�f�����ł����ꍇ�̂݃J�E���g�ϐ������Z����
			countArrenge++;
		}
	}
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�e�v�f�����ɏo�͂���
		cout << "a[" << i << "] = " << arrengeRand[i] << "\n";
	}
}