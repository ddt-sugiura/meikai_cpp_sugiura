#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K4-11
  float�^�̕ϐ���0.0����1.0�܂�0.001�����₵�Ȃ���
  ���̒l�Ƃ��̒l��2���\������v���O�������쐬����*/
int main() {
	//float�^��0�ŏ�����
	float Increasedecimal = 0.0F;
	//���ږ����o��;
	cout << "    ���̒l         2��̒l\n";
	//�������o��
	cout << "--------------------------------\n";
	//���m�Ȓl���m�F���邽�ߌŒ菬���_�L�@�ɂ�菬����12���ŏo��
	cout << std::fixed << std::setprecision(12);
	//1000��1�񕪂̃��[�v���s
	for (int i = 0; i <= 1000; i++) {
		//�o�������ꂼ��o�͂���
		cout << Increasedecimal << "  " << Increasedecimal* Increasedecimal << "\n";
		//���ƂȂ�ϐ���0.001�����Z
		Increasedecimal += 0.001F;
	}
}