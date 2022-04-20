#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K4-13
  ���ʁC�G�߁C�j���Ȃǂ�\���񋓑̂����R�ɒ�`���C
  �����p�����v���O�������쐬����*/
int main() {
	//���ʂ��
	enum EnumerationSex { e1_MAN = 1, e1_WOMAN, e1_INVALID = 0 };
	//�G�߂��
	enum EnumerationSeason { e2_SPRING = 1, e2_SUMMER, e2_AUTUMN, e2_WINTER, e2_INVALID = 0 };
	//�j�����
	enum EnumerationSevenday { e3_SUN = 1, e3_MON, e3_TUES, e3_WED, e3_THURS, e3_FRI, e3_SAT, e3_INVALID = 0 };
	//�񋓎q��I�����邽�߂̕ϐ�
	int SexNo, SeasonNo, SevenNo;
	//���[�v���s
	do {
		//�I������\��
		cout << "1:�j�� 2:����\n";
		cout << "�����̐��ʂ����,0�ŏI��:";
		//�I�����󂯎��
		cin >> SexNo;
	}
	// 0�ȏ�4�ȉ��łȂ���΂�����x�I��������
	while (SexNo < e1_INVALID || SexNo > e1_WOMAN);
	// 0�����͂��ꂽ�Ƃ��̕���
	if (SexNo == 0) {
		//�����I������
		return 0;
	}
	//���[�v���s
	do {
		//�I������\��
		cout << "1:�t 2:�� 3:�H 4:�~\n";
		cout << "�a�����̋G�߂����,0�ŏI��:";
		//�I�����󂯎��
		cin >> SeasonNo;
	}
	// 0�ȏ�4�ȉ��łȂ���΂�����x�I��������
	while (SeasonNo < e2_INVALID || SeasonNo > e2_WINTER);
	// 0�����͂��ꂽ�Ƃ��̕���
	if (SeasonNo == 0) {
		// �����I������
		return 0;
	}
	//���[�v���s
	do {
		//�I������\��
		cout << "1:�� 2:�� 3:�� 4:�� 5:�� 6:�� 7:�y\n";
		cout << "�a�����̗j�������,0�ŏI��:";
		//�I�����󂯎��
		cin >> SevenNo;
	}
	// 0�ȏ�4�ȉ��łȂ���΂�����x�I��������
	while (SevenNo < e3_INVALID || SeasonNo > e3_SAT);
	// 0�����͂��ꂽ�Ƃ��̕���
	if (SeasonNo == 0) {
		// �����I������
		return 0;
	}
	//���ʂ��o�͂��邽�߂̕ϐ�
	string ResultSlelct = "�o";
	//�񋓎q�̂����ꂩ�ŕϐ���錾�F����
	EnumerationSex SelectedSex = static_cast<EnumerationSex>(SexNo);
	//�񋓎q�̂����ꂩ�ŕϐ���錾�F�G��
	EnumerationSeason SelectedSeason = static_cast<EnumerationSeason>(SeasonNo);
	//�񋓎q�̂����ꂩ�ŕϐ���錾�F�j��
	EnumerationSevenday SelectedSeven = static_cast<EnumerationSevenday>(SevenNo);
	//�ϐ��ɂ���ďo�͓��e��ύX����
	switch (SelectedSex)
	{
		//Invalid�ȊO�̑I�����̏���������
	case e1_MAN:
		ResultSlelct += "�@�j���F";
		break;
	case e1_WOMAN:
		ResultSlelct += "�@�����F";
		break;
	default:
		break;
	}
	switch (SelectedSeason)
	{
		//Invalid�ȊO�̑I�����̏���������
	case e2_SPRING:
		ResultSlelct += "�@�t��";
		break;
	case e2_SUMMER:
		ResultSlelct += "�@�Ă�";
		break;
	case e2_AUTUMN:
		ResultSlelct += "�@�H��";
		break;
	case e2_WINTER:
		ResultSlelct += "�@�~��";
			break;
	default:
		break;
	}
	switch (SelectedSeven)
	{
		//Invalid�ȊO�̑I�����̏���������
	case e3_SUN:
		ResultSlelct += "�@�t���܂�F";
		break;
	case e3_MON:
		ResultSlelct += "�@�Đ��܂�F";
		break;
	case e3_TUES:
		ResultSlelct += "�@�H���܂�F";
		break;
	case e3_WED:
		ResultSlelct += "�@�~���܂�F";
		break;
	case e3_THURS:
		ResultSlelct += "�@�t���܂�F";
		break;
	case e3_FRI:
		ResultSlelct += "�@�Đ��܂�F";
		break;
	case e3_SAT:
		ResultSlelct += "�@�H���܂�F";
	default:
		break;
	}
	//�񋓎q�Ōv�Z�����l�Ő肢�̌��ʂ��o��
	int FortuneOfEnumeration = (SexNo+SeasonNo+SevenNo+SevenNo)%5 ;
	//�v�Z���ʂŕ�����N����
	switch (FortuneOfEnumeration) {
		//�肢���ʂ�����������
	case 0:
		ResultSlelct += "�@��g";
		break;
	case 1:
		ResultSlelct += "�@���g";
		break;
	case 2:
		ResultSlelct += "�@���g";
		break;
	case 3:
		ResultSlelct += "�@�g";
		break;
	case 4:
		ResultSlelct += "�@��";
		break;
	default:
		break;
	}
	//�Ō�Ɋ��ʂ����
	ResultSlelct += "�@}";
	//���ׂĂ̌��ʂ��o�͂���
	cout << ResultSlelct;
	return 0;
}