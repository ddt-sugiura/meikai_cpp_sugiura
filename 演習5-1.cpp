#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K5-1
  �v�f�^��int�^�ŗv�f�����T�̔z��ɑ΂���,�擪���珇��
  �T�`�P�������ĕ\������v���O�������쐬����*/
int main() {
	//�z��̗v�f����萔�Ő錾
	const int LENGHT_INTEGER = 5;
	//int�^�̔z���錾
	int arrengeCountDwon[LENGHT_INTEGER];
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�e�v�f�ɃJ�E���g�_�E���`���ő������
		arrengeCountDwon[i] = LENGHT_INTEGER - i;
	}
	//�v�f�����̃��[�v���N����
	for (int i = 0; i < LENGHT_INTEGER; i++) {
		//�e�v�f�����ɏo�͂���
		cout <<"a["<<i<<"] = " << arrengeCountDwon[i] << "\n";
	}
}