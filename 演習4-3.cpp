#include<climits>
#include<iostream>

using namespace std;
/*���K4-3 
  �������e���� 0 ��8�i���e�����ł��邱�Ƃ�_���I�ɐ���*/
int main() {
	//int�^��1������
	int IntInOne = 1;
	//���\��������
	cout << showbase;
	//8�i�ɕϊ����o��
	cout << "8�i��1 :";
	//�o�͌���s
	cout << oct << IntInOne << "\n";
	//10�i�ɕϊ����o��
	cout << "10�i��1 :";
	//�o�͌���s
	cout << dec << IntInOne << "\n";
	//16�i�ɕϊ����o��
	cout << "16�i��1 :";
	//�o�͌���s
	cout << hex << IntInOne << "\n";
	//���_���o��
	cout << "8�i���e�����̏ꍇ0���擪�ɂ��C" << "\n" << "����Đ������e����0��8�i���e�����ł���";
}