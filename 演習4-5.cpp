#include<climits>
#include<iostream>

using namespace std;
/*���K4-5
  float�^�̕ϐ���double�^�̕ϐ��ɃL�[�{�[�h���琔����ǂݍ���ŁC
  ���̒l��\������v���O�������쐬����C���낢��Ȓl�œ������������*/
int main() {
	//���͂������l���󂯎��ϐ�
	// float�p�̕ϐ�
	float TypeOfFloat=0;
	// double�p�̕ϐ�
	double TypeOfDouble=0;
	// ���[�v���I�����邩���f���邽�߂̕ϐ�
	int StopFlag = 1;
	//�������[�v�ɂ���ėl�X�Ȑ��l�����
	while (StopFlag != 0) {
		//float�^�̕\������
		cout << "���l����� for float�^:";
		//float�^�Ƃ��Ď��[����
		cin >> TypeOfFloat;
		//float�^�ŏo�͂��t�H�[�}�b�g���m�F
		cout << "float�^ -> " << TypeOfFloat << "\n";
		//doublet�^�̕\������
		cout << "���l����� for double�^:";
		//double�^�Ƃ��Ď��[����
		cin >> TypeOfDouble;
		//double�^�ŏo�͂��t�H�[�}�b�g���m�F
		cout << "double�^ -> " << TypeOfDouble << "\n";
		//�������[�v���I�����邩�̔��f��������
		cout << "�I������Ȃ�0:";
		//0���󂯎�����烋�[�v�I��
		cin >> StopFlag;
	}
}