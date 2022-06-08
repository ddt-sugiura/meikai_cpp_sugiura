#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;

/*���K4-13
  ���ʁC�G�߁C�j���Ȃǂ�\���񋓑̂����R�ɒ�`���C
  �����p�����v���O�������쐬����*/

//�萔�Ő肢���ʂ̕������錾
const string FORTUNE_TEXT[5] = {"nomal","lucky","happy","fortunate","bliss"};

bool houseResultSex(string resultArange[2]) {
	//���ʂ��
	enum EnumerationSex { e1_MAN = 1, e1_WOMAN, e1_INVALID = 0 };
	//���ʂ�I�����邽�߂̐������i�[����ϐ�
	int selectNo = 0;
	//���[�v���s
	do {
		//�I������\��
		cout << "1:�j�� 2:����\n";
		//0�`2�̒l����͂�����
		cout << "�����̐��ʂ����,0�ŏI��:";
		//�I�����󂯎��
		cin >> selectNo;
	}
	// 0�ȏ�2�ȉ��łȂ���΂�����x�I��������
	while (selectNo < e1_INVALID || selectNo > e1_WOMAN);
	// 0�����͂��ꂽ�Ƃ��̕���
	if (selectNo == 0) {
		//���f���邱�Ƃ��
		cout << "���f���܂�";
		//false��Ԃ��C����̏������X���[������
		return false;
	}
	//�񋓎q�̂����ꂩ�ŕϐ���錾
	EnumerationSex SelectedSex = static_cast<EnumerationSex>(selectNo);
	//�񋓎q�ɂ�镪��ŕԂ�������̕Е������܂�
	switch (SelectedSex)
	{
		//Invalid�ȊO�̑I�����̏���������
	case e1_MAN:
		resultArange[0] = "�j";
		break;
	case e1_WOMAN:
		resultArange[0] = "��";
		break;
		//��L�ɊY�����Ȃ����false��Ԃ�(�G���[�΍�)
	default:
		return false;
		break;
	}
	//�񋓎q�̒l����Y�����镶������Z�b�g
	resultArange[1] = FORTUNE_TEXT[SelectedSex];
	//����̏����𑱍s�����邽��true��Ԃ�
	return true;
}


bool houseResultSeason(string resultArange[2]) {
	//�G�߂��
	enum EnumerationSeason { e2_SPRING = 1, e2_SUMMER, e2_AUTUMN, e2_WINTER, e2_INVALID = 0 };
	//���ʂ�I�����邽�߂̐������i�[����ϐ�
	int selectNo = 0;
	//���[�v���s
	do {
		//�I������\��
		cout << "1:�t 2:�� 3:�H 4:�~\n";
		//0�`4�̒l����͂�����
		cout << "�a�����̋G�߂����,0�ŏI��:";
		//�I�����󂯎��
		cin >> selectNo;
	}
	// 0�ȏ�4�ȉ��łȂ���΂�����x�I��������
	while (selectNo < e2_INVALID || selectNo > e2_WINTER);
	// 0�����͂��ꂽ�Ƃ��̕���
	if (selectNo == 0) {
		//���f���邱�Ƃ��
		cout << "���f���܂�";
		//false��Ԃ��C����̏������X���[������
		return false;
	}

	//�񋓎q�̂����ꂩ�ŕϐ���錾
	EnumerationSeason SelectedSeason = static_cast<EnumerationSeason>(selectNo);
	//�񋓎q�ɂ�镪��ŕԂ�������̕Е������܂�
	switch (SelectedSeason)
	{
		//Invalid�ȊO�̑I�����̏���������
	case e2_SPRING:
		resultArange[0] = "�t";
		break;
	case e2_SUMMER:
		resultArange[0] = "��";
		break;
	case e2_AUTUMN:
		resultArange[0] = "�H";
		break;
	case e2_WINTER:
		resultArange[0] = "�~";
		break;
		//��L�ɊY�����Ȃ����false��Ԃ�(�G���[�΍�)
	default:
		return false;
		break;
	}
	//�񋓎q�̒l����Y�����镶������Z�b�g
	resultArange[1] = FORTUNE_TEXT[5 - SelectedSeason];
	//����̏����𑱍s�����邽��true��Ԃ�
	return true;
}

bool houseResultSeven(string resultArange[2]) {
	//�j�����
	enum EnumerationSevenday { e3_SUN = 1, e3_MON, e3_TUES, e3_WED, e3_THURS, e3_FRI, e3_SAT, e3_INVALID = 0 };
	//���ʂ�I�����邽�߂̐������i�[����ϐ�
	int selectNo = 0;
	//���[�v���s
	do {
		//�I������\��
		cout << "1:�� 2:�� 3:�� 4:�� 5:�� 6:�� 7:�y\n";
		//0�`7�̒l����͂�����
		cout << "�a�����̗j�������,0�ŏI��:";
		//�I�����󂯎��
		cin >> selectNo;
	}
	// 0�ȏ�4�ȉ��łȂ���΂�����x�I��������
	while (selectNo < e3_INVALID || selectNo >  e3_SAT);
	// 0�����͂��ꂽ�Ƃ��̕���
	if (selectNo == 0) {
		//���f���邱�Ƃ��
		cout << "���f���܂�";
		//false��Ԃ��C����̏������X���[������
		return false;
	}
	//�񋓎q�̂����ꂩ�ŕϐ���錾�F�j��
	EnumerationSevenday SelectedSeven = static_cast<EnumerationSevenday>(selectNo);
	//�񋓎q�ɂ�镪��ŕԂ������񂪓�Ƃ����܂�
	switch (SelectedSeven)
	{
		//Invalid�ȊO�̑I�����̏���������
	case e3_SUN:
		resultArange[0] = "��";
		resultArange[1] = FORTUNE_TEXT[4];
		break;
	case e3_MON:
		resultArange[0] = "��";
		resultArange[1] = FORTUNE_TEXT[2];
		break;
	case e3_TUES:
		resultArange[0] = "��";
		resultArange[1] = FORTUNE_TEXT[2];
		break;
	case e3_WED:
		resultArange[0] = "��";
		resultArange[1] = FORTUNE_TEXT[3];
		break;
	case e3_THURS:
		resultArange[0] = "��";
		resultArange[1] = FORTUNE_TEXT[3];
		break;
	case e3_FRI:
		resultArange[0] = "��";
		resultArange[1] = FORTUNE_TEXT[4];
		break;
	case e3_SAT:
		resultArange[0] = "�y";
		resultArange[1] = FORTUNE_TEXT[1];
		break;
	default:
		//��L�ɊY�����Ȃ����false��Ԃ�(�G���[�΍�)
		return false;
		break;
	}
	//����̏����𑱍s�����邽��true��Ԃ�
	return true;
}

int FortuneNunber(string resultElement) {

	//�肢���ʂ𐔎��ŕԂ����߂̃��[�v
	for (int i = 0; i < 5; i++) {
		//�����ƒ萔�ł��񂰂񂵂��z����̕����񂪈�v�����ꍇ
		if (resultElement == FORTUNE_TEXT[i]) {
			//���[�v�̃J�E���g�������̂܂ܕԂ�
			return i;
		}
	}
	//�Y�����镶���񂪂Ȃ������ꍇ-1��Ԃ�(�G���[�΍�)
	return -1;
}

int main() {
	
	//���ʂ̕�����Ɛ肢���ʂ̕�������i�[����ϐ�
	string resultSex[2] = { "", FORTUNE_TEXT[0]};
	//�G�߂̕�����Ɛ肢���ʂ̕�������i�[����ϐ�
	string resultSeason[2] = { "", FORTUNE_TEXT[0]};
	//�j���̕�����Ɛ肢���ʂ̕�������i�[����ϐ�
	string resultSeven[2] = { "", FORTUNE_TEXT[0]};
	//�������s�����ۂ��𔻒f����t���O
	bool continueFlg = true;

	//�����̊J�n���
	cout << "�肢���n�߂܂�\n";

	//flg��true�̏ꍇ�Ɋ֐����Ăяo��
	if (continueFlg) {
		//���ʂɊւ�������󂯂Ƃ�
		continueFlg = houseResultSex(resultSex);
	}
	//flg��true�̏ꍇ�Ɋ֐����Ăяo��
	if (continueFlg) {
		//�G�߂Ɋւ�������󂯂Ƃ�
		continueFlg = houseResultSeason(resultSeason);
	}
	//flg��true�̏ꍇ�Ɋ֐����Ăяo��
	if (continueFlg) {
		//�j���Ɋւ�������󂯂Ƃ�
		continueFlg = houseResultSeven(resultSeven);
	}

	//�i�[����������̂����C�肢���ʂ������Ă���v�f��V���ɔz��Ƃ���(�j���͓��)
	string fortuneArange[4] = { resultSex[1] , resultSeason[1] , resultSeven[1] , resultSeven[1] };

	//�񋓎q�Ōv�Z�����l�Ő肢�̌��ʂ��o��
	int FortuneOfEnumeration = 0;

	//�z��̗v�f�������[�v������
	for (int i = 0; i < 4; i++) {
		//�肢���ʂ��琔������肷��
		int resultNo = FortuneNunber(fortuneArange[i]);
		//0�ȉ��̏ꍇ(�G���[�΍�)
		if (resultNo < 0) {
			//flg��false�ɂ���
			continueFlg = false;
			//�J�E���g��i�߂ă��[�v���I��������
			i = 4;
		}
		//�G���[�΍�ɂ�����Ȃ������ꍇ
		else {
			//�󂯎�������l�����Z������
			FortuneOfEnumeration += resultNo;
		}
	}
	
	//�Ō�ɏo�͂��郁�b�Z�[�W���i�[����ϐ�
	string resultMessege = "";

	//�v�Z���ʂŕ�����N����
	switch (FortuneOfEnumeration%5) {
		//�ŏI�I�Ȑ肢���ʂ�����������
	case 0:
		resultMessege = "��g";
		break;
	case 1:
		resultMessege = "���g";
		break;
	case 2:
		resultMessege = "���g";
		break;
	case 3:
		resultMessege = "�g";
		break;
	case 4:
		resultMessege = "��";
		break;
		//�Y�����Ȃ��ꍇ��flg��false�ɂ���(�G���[�΍�)
	default:
		continueFlg = false;
		break;
	}
	//flg��true�̏ꍇ�ɏ���������
	if (continueFlg) {
		//�ϐ��ɂ���ďo�͓��e��ύX����
		cout << resultSex[0] << "�� : " << resultSeason[0] << "���܂�i" << resultSeven[0] << "�j\n";
		//�肢���ʂɂ���ďo�͓��e��ύX����
		cout << "���Ȃ��́u" << resultMessege << "�v�ł�";
	}
	//�����̏I�����
	cout << "�肢���I�����܂�";
}