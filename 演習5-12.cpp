#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K5-12
3�����z��̗v�f�������߂鎮��\��*/
int main() {
	//�O�����z���錾
	int threeDimension[4][5][6];
	//cout�Ŏ����o�͂��Ă���
	cout << " 3�����z��̗v�f�������߂�, \n\n";
	//�ꎟ���ڂ̗v�f��
	int firstElementSize = sizeof(threeDimension) / sizeof(threeDimension[0]);
	//�񎟌��ڂ̗v�f��
	int secondElementSize = sizeof(threeDimension[0]) / sizeof(threeDimension[0][0]);
	//�O�����ڂ̗v�f��
	int thirdErementSize = sizeof(threeDimension[0][0]) / sizeof(threeDimension[0][0][0]);
	//�S�v�f��
	int allElementSize = sizeof(threeDimension) / sizeof(threeDimension[0][0][0]);
	//�z��̊e�����̗v�f�����킩��₷���o��
	cout << " 3�����z��[" << firstElementSize << "][" << secondElementSize << "][" << thirdErementSize << "]�̗v�f����, \n\n";
	//���߂鎮���킩��悤�ɏo��
	cout << " " << firstElementSize << " �~ " << secondElementSize << " �~ " << thirdErementSize << " = " << allElementSize;
}