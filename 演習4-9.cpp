#include<climits>
#include<iostream>

using namespace std;
/*���K4-9
  3�̐����l��ǂݍ���ŁC���̍��v�ƕ��ς�\������v���O�������쐬����
  �L���X�g�L�@��p������́C�֐��I�L�@��p������́Cstatic_cast���Z�q��p������̂��쐬���邱��*/
int main() {
	//3�̐����l��ǂݍ��ނ��߂̔z���錾
	int AttributeValue[3];
	//1�ڂ�x�̒l�Ƃ���
	std::cout << "x�̒l : ";
	//1�ڂ̒l�����
	std::cin >> AttributeValue[0];
	//2�ڂ�y�̒l�Ƃ���
	std::cout << "y�̒l : ";
	//2�ڂ̒l�����
	std::cin >> AttributeValue[1];
	//3�ڂ�z�̒l�Ƃ���
	std::cout << "z�̒l : ";
	//3�ڂ̒l�����
	std::cin >> AttributeValue[2];
	//�L���X�g�L�@�ŕ��ϒl���Z�o
	double AveOfCast = (double)(AttributeValue[0] + AttributeValue[1] + AttributeValue[2]) / 3;
	//�v�Z���ʂ��o��
	std::cout << "�L���X�g�L�@�ŎZ�o : " << AveOfCast << "\n";
	//�֐��I�L�@�ŕ��ϒl���Z�o
	double AveOfFunction = double(AttributeValue[0] + AttributeValue[1] + AttributeValue[2]) / 3;
	//�v�Z���ʂ��o��
	std::cout << "�֐��I�L�@�ŎZ�o : " << AveOfFunction << "\n";
	//static_cast���Z�q�ŕ��ϒl���Z�o
	double AveOfStatic = static_cast<double>(AttributeValue[0] + AttributeValue[1] + AttributeValue[2]) / 3;
	//�v�Z���ʂ��o��
	std::cout << "static_cast���Z�q�ŎZ�o : " << AveOfStatic ;
}