#include<climits>
#include<iostream>

using namespace std;
/*���K4-1
 �ȉ��̃v���O�������쐬����
 �Eint�^�̍ŏ��l����ő�l�܂ł̑S�����l��8�i�s�E10�i�s�E16�i�s�ŕ\��
 �Eunsigned�^�̍ŏ��l����ő�l�܂ł̑S�����l��8�i�s�E10�i�s�E16�i�s�ŕ\��*/
int main() {
	cout << "�ꗗ�\\n";
	//int��8�i�s���o�͂����
	cout << "int�^8�i�s\n";
	//�������I���Ȃ����߁C�Ō��20�݂̂�\��������
	int StartIntNo = INT_MAX - 20;
	//for (int Int_go8 = 0; ; Int_go8++) {�@�{����for��
	for (int Int_go8 = StartIntNo; ; Int_go8++) {
		//8�i�s�ɕϊ�����
		cout << oct << Int_go8;
		//�ő�l�ɂȂ����珈�����I������
		if(Int_go8 == INT_MAX) break;
		//���[�v�ɖ߂�O�ɃR���}���o��
		else cout << ",";
	}
	cout << "\n";
	//int��10�i�s���o�͂����
	cout << "int�^10�i�s\n";
	//for (int Int_go10 = 0; ; Int_go10++) {
	for (int Int_go10 = StartIntNo; ; Int_go10++) {
		//10�i�s�ɕϊ�����
		cout << dec << Int_go10;
		if (Int_go10 == INT_MAX) break;
		else cout << ",";
	}
	cout << "\n";
	//int��16�i�s���o�͂����
	cout << "int�^16�i�s\n";
	//for (int Int_go16 = 0; ; Int_go16++) {
	for (int Int_go16 = StartIntNo; ; Int_go16++) {
		//16�i�s�ɕϊ�����
		cout << hex <<Int_go16;
		if (Int_go16 == INT_MAX) break;
		else cout << ",";
	}
	cout << "\n";
	//unsingint��8�i�s���o�͂����
	cout << "unsigned�^8�i�s\n";
	for (int UnsignInt_go8 = 20; UnsignInt_go8 >= 0 ; UnsignInt_go8--) {
		//�ő�l����J�E���g�֐����������l��8�i�s�ɕϊ�����
		cout << oct << unsigned(UINT_MAX - UnsignInt_go8);
		cout << ",";
	}
	cout << "\n";
	///unsingint��10�i�s���o�͂����
	cout << "unsigned�^10�i�s\n";
	for (int UnsignInt_go10 = 20; UnsignInt_go10 >= 0; UnsignInt_go10--) {
		//�ő�l����J�E���g�֐����������l��10�i�s�ɕϊ�����
		cout << dec << unsigned(UINT_MAX - UnsignInt_go10);
		cout << ",";
	}
	cout << "\n";
	///unsingint��16�i�s���o�͂����
	cout << "unsigned�^16�i�s\n";
	for (int UnsignInt_go16 = 20; UnsignInt_go16 >= 0; UnsignInt_go16--) {
		//�ő�l����J�E���g�֐����������l��16�i�s�ɕϊ�����
		cout << hex << unsigned(UINT_MAX - UnsignInt_go16);
		cout << ",";
	}
}