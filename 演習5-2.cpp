#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K5-2
  �v�f�^��double�^�ŗv�f�����T�̔z��̑S�v�f�ɑ΂���
  0.0�������ďo�͂���v���O�������쐬����*/
int main() {
	//�z��̗v�f����萔�Ő錾
	const int LENGHT_INTEGER = 5;
	//int�^�̔z���錾
	double arrengeCountDwon[LENGHT_INTEGER];
	double elementDouble;
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�e�v�f��0.0��������
		arrengeCountDwon[i] = 0.0;
	}
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�e�v�f�����ɏo�͂���
		cout << "a[" << i << "] = " << arrengeCountDwon[i] << "\n";
	}
}