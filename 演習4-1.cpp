#include<cctype>
#include<climits>
#include<iostream>

using namespace std;
/*���K4-1
 ���ׂĂ̕����ɂ��āC����/�p�啶��/�p������/�L�������Ȃǂ̕����񂪂킩��
 �ꗗ�\���o�͂���v���O�������쐬����*/
int main() {
	//1�s�ڂɃ^�C�g�����o�͂��ĉ��s
	cout << "�ꗗ�\\n";
	//�t�H�[�}�b�g�����̂��ߋ󔒂��o��
	cout << "   ";
	//2�s�ڂɉ��̍��ږ������
	for (int horizontal_name = 0; horizontal_name < 16; horizontal_name++) {
		//16�i���ŏo��
		cout << " " << hex << horizontal_name;
	}
	//���ږ��̉��Ɏd�؂�����邽��3�s�ڂɉ��s
	cout << "\n";
	//�t�H�[�}�b�g�����̂��ߋ󔒂��o��
	cout << "   ";
	//����������
	for (int horizontal_no = 0; horizontal_no < 16; horizontal_no++) {
		cout << "--";
	}
	//4�s�ڂ։��s
	cout << "\n";
	char onlychar;
	for (int vartical = 0; vartical <16 ; vartical++) {
		//�s�̍��ږ����o�͂��ďc��������
		cout << hex << vartical << " |";
		//��̐������J��Ԃ��o�͂��ĉ��s���郋�[�v
		for (int horizontal_no = 0; horizontal_no <16; horizontal_no++) {
			onlychar = char(vartical *16 + horizontal_no);
			switch (onlychar)
			{
				//����ȓ�������镶������������
			case '\a':cout << "\\a"; break;
			case '\b':cout << "\\b"; break;
			case '\f':cout << "\\f"; break;
			case '\n':cout << "\\n"; break;
			case '\r':cout << "\\r"; break;
			case '\t':cout << "\\t"; break;
			case '\v':cout << "\\v"; break;
				//��L�ɊY�����Ȃ��������o�͂���
			default: cout << ' ' << (isprint(onlychar) ? onlychar : ' ');
			}
			if (onlychar == CHAR_MAX) break; //���[�v���I��������
		}
		cout << "\n";
		if (onlychar == CHAR_MAX) break; //�������I��������
	}
}