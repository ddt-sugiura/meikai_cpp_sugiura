#include<climits>
#include<iostream>

using namespace std;
/*���K4-8
  �ȉ��̎Z�p���Z���s���e����
  sizeof���Z�q��typeid���Z�q��K�p�����l��
  �\������v���O�������쐬����
  int + int   double + double   int + double   double + int*/
int main() {
	//float�^�̕ϐ���錾
	int TypeOf_I = 1;
	//double�^�̕ϐ���錾
	double TypeOf_D = 1;
	// double + double �� �e���Z�q�ɂ��o�͌���
	std::cout << "int + int : sizeof���Z�q " << sizeof(TypeOf_I + TypeOf_I) << " typeid���Z�q " << typeid(TypeOf_I + TypeOf_I).name() << "\n";
	// int+int �� �e���Z�q�ɂ��o�͌���
	std::cout << "double + double : sizeof���Z�q " << sizeof(TypeOf_D + TypeOf_D) << " typeid���Z�q " << typeid(TypeOf_D + TypeOf_D).name() << "\n";
	// int + double �� �e���Z�q�ɂ��o�͌���
	std::cout << "int + double : sizeof���Z�q " << sizeof(TypeOf_I + TypeOf_D) << " typeid���Z�q " << typeid(TypeOf_I + TypeOf_D).name() << "\n";
	// int+int �� �e���Z�q�ɂ��o�͌���
	std::cout << "double + int : sizeof���Z�q " << sizeof(TypeOf_D + TypeOf_I) << " typeid���Z�q " << typeid(TypeOf_D + TypeOf_I).name() << "\n";
}