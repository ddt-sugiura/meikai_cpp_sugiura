#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K5-5
�قȂ�v�f�������l�ƂȂ�Ȃ��悤��
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
	//�J�E���g���z��̗v�f���ɂȂ�܂Ń��[�v
	while (countArrenge < LENGHT_INTEGER) {
		//�l�̏d���̊m�F���ʂ��i�[����ϐ�
		bool bookingFlg = true;
		//�l�̏d���̊m�F�p�J�E���g�ϐ�
		int countCheck = 0;
		//�e�v�f��1�`10�̃����_���Ȑ��l��錾
		int randNumeric = 1 + rand() % 10;
		//�l���������Ă���z��̗v�f���̓��[�v�ł���l�ɂ���
		while (countCheck < countArrenge && bookingFlg) {
			//�l���d�����Ă��邩�m�F����
			if (arrengeRand[countCheck] == randNumeric) {
				//�d�����Ă���ꍇ�̓��[�v�̒��f�����˂�flg��false�ɂ���
				bookingFlg = false;
			}
			//�m�F�p�J�E���g�����Z������;
			countCheck++;
		}
		//�d���`�F�b�N�����ׂĒʉ߂ł����ꍇ�ɏ�������
		if (bookingFlg) {
			//�錾���������_���Ȓl��z��ɑ������
			arrengeRand[countArrenge] = randNumeric;
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