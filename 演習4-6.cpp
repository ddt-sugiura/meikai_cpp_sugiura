#include<climits>
#include<iostream>

using namespace std;
/*���K4-6
  3��ނ̕��������_�^�̑傫����
  sizeof���Z�q�ɂ���ĕ\������v���O�������쐬����*/
int main() {
	//float�^�̕ϐ���錾
	float floatpoint;
	//double�^�̕ϐ���錾
	double doublepoint;
	//long double�^�̕ϐ���錾
	long double longpoint;
	//float�^��byte�����o��
	cout << "float�^�̑傫��: " << sizeof(floatpoint) << "\n";
	//double�^��byte�����o��
	cout << "double�^�̑傫��: " << sizeof(doublepoint) << "\n";
	//long doublet�^��byte�����o��
	cout << "long double�^�̑傫��: " << sizeof(longpoint) << "\n";
}