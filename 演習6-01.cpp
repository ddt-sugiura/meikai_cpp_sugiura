#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K6-1
�󂯎����int�^�����̒l�����̒l�ł���΁|�P��,�O�ł���΂O��,
���̒l�ł���΂P��ԋp����֐� int sign_of(int n) ���쐬����*/

int sign_of(int n) {
	//n�����̒l�̏ꍇ
	if (n < 0) {
		// -1 ��Ԃ�
		return -1;
	}
	//n��0�̏ꍇ
	else if (n == 0) {
		// 0 ��Ԃ�
		return 0;
	}
	//n�����̒l�̏ꍇ
	else {
		// 1 ��Ԃ�
		return 1;
	}
}

int main() {
	//sign_of�̃e�X�g���s�����߂̕ϐ�
	int testVariable;
	//�ϐ��ɐ�������ꂳ����
	cout << "��������͂��Ă�������";
	//���͂����������i�[�����
	cin >> testVariable;
	//sign_of�̏������ʂ��o�͂���
	cout << "sign_of�� " << sign_of(testVariable) << " ��Ԃ��܂�";
}