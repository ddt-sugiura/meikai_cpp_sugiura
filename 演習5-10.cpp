#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K5-10
4�s3��̍s���3�s4��̍s��̐ς����߂�v���O�������쐬����*/
int main() {
	//�s��A�̗񐔂ƍs��B�̍s����錾
	int const NUM_OF_A = 3;
	//�s��A�̍s���ƍs��B�̗񐔂�錾
	int const NUM_OF_B = 4;
	//int�^�̍s��A��錾
	int firstMatrix[NUM_OF_B][NUM_OF_A];
	//int�^�̍s��B��錾
	int secondMatrix[NUM_OF_A][NUM_OF_B];
	//�ς��i�[����s��M��錾
	int multiMatrix[NUM_OF_B][NUM_OF_B] = { 0 };
	//for���[�v�̃J�E���g�ƍs�����w�肷�鐔��
	int countLine = 0;
	//for���[�v�̃J�E���g�Ɨ񐔂��w�肷�鐔��
	int countColumn = 0;
	//2�d�̃��[�v�ōs��A�ɐ��������
	for (countLine = 0; countLine < NUM_OF_B; countLine++) {
		for (countColumn = 0; countColumn < NUM_OF_A; countColumn++) {
			//�e�v�f�̒��g�����ɓ���
			cout << "a[" << countLine << "][" << countColumn << "] : ";
			//�C�ӂ̒l��v�f�ɑ}��
			cin >> firstMatrix[countLine][countColumn];
		}
	}
	//2�d�̃��[�v�ōs��B�ɐ��������
	for (countLine = 0; countLine < NUM_OF_A; countLine++) {
		for (countColumn = 0; countColumn < NUM_OF_B; countColumn++) {
			//�e�v�f�̒��g�����ɓ���
			cout << "b[" << countLine << "][" << countColumn << "] : ";
			//�C�ӂ̒l��v�f�ɑ}��
			cin >> secondMatrix[countLine][countColumn];
		}
	}
	//�|���Z�̂��߂ɃJ�E���g�ϐ���������錾
	int countForMul = 0;
	//2�d�̃��[�v�ōs��M�ɒl�����Ă���
	for (countLine = 0; countLine < NUM_OF_B; countLine++) {
		for (countColumn = 0; countColumn < NUM_OF_B; countColumn++) {
			//
			for (countForMul = 0; countForMul < 3; countForMul++) {
				multiMatrix[countLine][countColumn]
					+= firstMatrix[countLine][countForMul] * secondMatrix[countForMul][countColumn];
			}
		}
	}

	for (countLine = 0; countLine < NUM_OF_B; countLine++) {
		for (countColumn = 0; countColumn < NUM_OF_B; countColumn++) {
			//�e�v�f�̒��g�����ɓ���
			cout << "m[" << countLine << "][" << countColumn << "] = "
				<< multiMatrix[countLine][countColumn] << ", ";
		}
		cout << "\n";
	}

}


/*�v�f�����̃��[�v���N�����C�z��a�̊e�v�f�ɒl�����Ă���
for (countLine = 0; countLine < NUM_OF_A; countLine++) {
		cout << "  | ";
	for (countColumn = 0; countColumn < NUM_OF_B; countColumn++) {
		//�e�v�f�̒��g�����ɓ���
		cout << dete4L3C[countLine][countColumn] << " ";
	}
	cout << "| ";
	if (countLine == 1) {
		cout << "* | ";
	}
	else {
		cout << "  | ";
	}
	for (countColumn = 0; countColumn < NUM_OF_A; countColumn++) {
		//�e�v�f�̒��g�����ɓ���
		if (countLine != NUM_OF_A - 1) {
			cout << deter3L4C[countLine][countColumn] << " ";
		}
		else {
			cout << "  ";
		}

	}
	cout << "| ";
	if (countLine == 1) {
		cout << "= | ";
	}
	else {
		cout << "  | ";
	}
	for (countColumn = 0; countColumn < NUM_OF_A; countColumn++) {
		//�e�v�f�̒��g�����ɓ���
		cout << multiMatrix[countLine][countColumn] << " ";
	}
	cout << "| \n";
}*/