#include<cctype>
#include<climits>
#include<iostream>

using namespace std;
/*���K4-1
 ���ׂĂ̕����ɂ��āC����/�p�啶��/�p������/�L�������Ȃǂ̕����񂪂킩��
 �ꗗ�\���o�͂���v���O�������쐬����*/
int main() {
	cout << "�ꗗ�\\n";
	cout << "   ";
	//���̍��ږ������
	for (int horizontal_name = 0; horizontal_name < 16; horizontal_name++) {
		cout << " " << hex << horizontal_name;
	}
	cout << "\n";
	cout << "   ";
	//����������
	for (int horizontal_no = 0; horizontal_no < 16; horizontal_no++) {
		cout << "--";
	}
	cout << "\n";
	char onlychar;
	for (int vartical = 0; vartical <16 ; vartical++) {
		cout << hex << vartical << " |"; //�c��������
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