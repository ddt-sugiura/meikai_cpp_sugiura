#include<climits>
#include<iostream>

using namespace std;
/*���K4-7
  ���������_�^�̏���
  typeid���Z�q�ɂ���ĕ\������v���O�������쐬����*/
int main() {
	//float�^�̕ϐ���錾
	float TypeOf_F;
	//double�^�̕ϐ���錾
	double TypeOf_D;
	//long double�^�̕ϐ���錾
	long double TypeOf_L;
	//float�^�̌^�̖��O���o��
	cout << "TypeOf_F�̌^�̖��O: " << typeid(TypeOf_F).name() << "\n";
	//double�^�̌^�̖��O���o��
	cout << "TypeOf_D�̌^�̖��O: " << typeid(TypeOf_D).name() << "\n";
	//long doublet�^�̌^�̖��O���o��
	cout << "TypeOf_L�̌^�̖��O: " << typeid(TypeOf_L).name() << "\n";
}