#include<climits>
#include<iomanip>
#include<iostream>

using namespace std;
/*���K4-12
  �g�����v�̋L���̎l�̗񋓎q�����񋓑̂��`����
  �e�񋓎q�̒l�͏���0123�Ƃ��C
  ��蓯�l�L�[�{�[�h����l��ǂݍ��ݕ\�����邱��*/
int main() {
	//���Ƀ_�C���C�n�[�g�C�N���u�C�X�y�[�h���
	enum EnumerationTramp { e_DIAMOND, e_HEART, e_CLUB, e_SPADE, e_INVALID };
	//�񋓎q��I�����邽�߂̕ϐ�
	int EnumeratorType = 0;
	//���[�v���s
	do{
		//�I������\��
		cout << "0�c�_�C�� 1�c�n�[�g 2�c�N���u 3�c�X�y�[�h 4�c�I��\n";
		cout << "0�`4�̐��������:";
		//�I�����󂯎��
		cin >> EnumeratorType;
	}
	// 0�ȏ�4�ȉ��łȂ���΂�����x�I��������
	while (EnumeratorType < e_DIAMOND || EnumeratorType > e_INVALID);
	// Invalid�ȊO��I�������ꍇ�ɏo�͏���������
	if (EnumeratorType != e_INVALID) {
		//�񋓎q�̂����ꂩ�ŕϐ���錾
		EnumerationTramp SelectedMark = static_cast<EnumerationTramp>(EnumeratorType);
		//�ϐ��ɂ���ďo�͓��e��ύX����
		switch (SelectedMark)
		{
			//Invalid�ȊO�̑I�����̏���������
		case e_DIAMOND:
			//�I�������}�[�N������
			cout << "�_�C����I��";
			//switch�𔲂���
			break;

		case e_HEART:
			//�I�������}�[�N������
			cout << "�n�[�g��I��";
			//switch�𔲂���
			break;

		case e_CLUB:
			//�I�������}�[�N������
			cout << "�N���u��I��";
			//switch�𔲂���
			break;

		case e_SPADE:
			//�I�������}�[�N������
			cout << "�X�y�[�h��I��";
			//switch�𔲂���
			break;
			//��O�̏ꍇ�̓X���[
		default:
			//switch�𔲂���
			break;
		}
	}
}