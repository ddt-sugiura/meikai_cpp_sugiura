#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K4-10
  float�^�̕ϐ���0.0����1.0�܂�0.001�����₵�Ă����l�q��
  int�^�̕ϐ���0����1000�܂ŃC���N�������g�����l��1000�Ŋ������l�����߂�l�q��
  ���ɕ��ׂĕ\������v���O�������쐬����*/
int main() {
	//float�^��0�ŏ�����
	float Increasedecimal = 0.0F;
	//int�^��0�ŏ�����
	int ThousandDivide = 0;  
	//���ږ����o��;
	cout << "  float      int\n";
	//�������o��
	cout << "-----------------------\n";
	//�ߒ��̈Ⴂ������ׂ邽�ߌŒ菬���_�L�@�ɂ�菬����6���ŏo��
	cout << std::fixed << std::setprecision(6);
	//1000��1�񕪂̃��[�v���s
	for (int i = 0; i <= 1000; i++) {
		//int�^��1000�Ŋ������l�Ő錾
		float CommercialSales = static_cast<float>(ThousandDivide)/1000.0F;
		//�o�������ꂼ��o�͂���
		cout << Increasedecimal << "   " << CommercialSales << "\n";
		//int�^��1�����Z
		ThousandDivide += 1;
		//float�^��0.001�����Z
		Increasedecimal += 0.001;
	}
}