#include<climits>
#include<iomanip>
#include<iostream>
#include <format>
#include <stdio.h>
#include <string>
#include<sstream>
using namespace std;
/*���K5-11
�Z�l�̓�Ȗ�(����)�̓_����ǂݍ���ŁC�Ȗڂ��Ƃ̍��v�C����
�w�����Ƃ̍��v�C���ς����߂�v���O�������쐬����*/
int main() {
	//���k�̐����Œ�l�Ő錾
	int const STUDENTS_MAX = 6;
	//�Ȗڂ̐����Œ�l�Ő錾
	int const SUBJECT_MAX = 2;
	//�Ȗڂ̖��O���Œ�l�Ő錾
	string const SUBJECT_NAME[SUBJECT_MAX] = {"����","���w"};
	//�_�����i�[����int�^�̍s���錾
	int schoolRecordPoint[STUDENTS_MAX][SUBJECT_MAX];
	//for���[�v�̃J�E���g�Ɛ��k���w�肷��ϐ�
	int countStudent = 0;
	//for���[�v�̃J�E���g�ƉȖڂ��w�肷��ϐ�
	int countSubject = 0;
	//���k��l�̍��v�_�����i�[����z��
	int sumOneStudent[STUDENTS_MAX] = { 0 };
	//��Ȗڂ̍��v�_�����i�[����z��
	int sumOnlySubject[SUBJECT_MAX] = { 0 };

	//2�d�̃��[�v�ōs��ɐ��������
	for (countStudent = 0; countStudent < STUDENTS_MAX; countStudent++) {
			//�󌱔ԍ��͂P�Ԃ���
		cout << "�󌱔ԍ�" << countStudent + 1 << "��\n";
		//�Ȗڂ̐��Ń��[�v
		for (countSubject = 0; countSubject < SUBJECT_MAX; countSubject++) {
			//�e�Ȗڂ̓_�����͂𑣂�
			cout << SUBJECT_NAME[countSubject] << "�̓_��";
			//�s��ɓ_�����i�[����
			cin >> schoolRecordPoint[countStudent][countSubject];
		}
	}
	//���₷������悤�ɉ��s����
	cout << "\n";
	//2�d�̃��[�v�ŉȖڂ��Ƃ̍��v�ƕ��ς��o��
	for (countSubject = 0; countSubject < SUBJECT_MAX; countSubject++) {
		//���k�̐��Ń��[�v
		for (countStudent = 0; countStudent < STUDENTS_MAX; countStudent++) {
			//���k��l�̓_�������Z����
			sumOnlySubject[countSubject] += schoolRecordPoint[countStudent][countSubject];
		}
		//���v���o��
		cout << SUBJECT_NAME[countSubject] << "�̍��v�F" << sumOnlySubject[countSubject] <<"�_\n";
		//���ς��o��
		cout << SUBJECT_NAME[countSubject] << "�̕��ρF" << sumOnlySubject[countSubject] / STUDENTS_MAX << "�_\n";
	}
	//���₷������悤�ɉ��s����
	cout << "\n";
	//2�d�̃��[�v�Ŋe���k�̂̍��v�ƕ��ς��o��
	for (countStudent = 0; countStudent < STUDENTS_MAX; countStudent++) {
		//�Ȗڂ̐��Ń��[�v
		for (countSubject = 0; countSubject < SUBJECT_MAX; countSubject++) {
			//�Ȗڂ��Ƃ̓_�������Z����
			sumOneStudent[countStudent] += schoolRecordPoint[countStudent][countSubject];
		}
		//���v���o��
		cout << "�󌱔ԍ�" << countStudent + 1 << "�̍��v�F" << sumOneStudent[countStudent] << "�_\n";
		//���ς��o��
		cout << "�󌱔ԍ�" << countStudent + 1 << "�̕��ρF" << sumOneStudent[countStudent] / SUBJECT_MAX << "�_\n";
	}

}