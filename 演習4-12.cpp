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
	enum EnumerationTramp { diamond, heart, club, spade, Invalid };
	//�񋓎q��I�����邽�߂̕ϐ�
	int EnumeratorType;
	//���[�v���s
	do{
		//�I������\��
		cout << "0�c�_�C�� 1�c�n�[�g 2�c�N���u 3�c�X�y�[�h 4�c�I��\n";
		cout << "0�`4�̐��������:";
		//�I�����󂯎��
		cin >> EnumeratorType;
	}
	// 0�ȏ�4�ȉ��łȂ���΂�����x�I��������
	while (EnumeratorType < diamond || EnumeratorType > Invalid);
	// Invalid�ȊO��I�������ꍇ�ɏo�͏���������
	if (EnumeratorType != Invalid) {
		//�񋓎q�̂����ꂩ�ŕϐ���錾
		EnumerationTramp SelectedMark = static_cast<EnumerationTramp>(EnumeratorType);
		//�ϐ��ɂ���ďo�͓��e��ύX����
		switch (SelectedMark)
		{
			//Invalid�ȊO�̑I�����̏���������
		case diamond:
			//�I�������}�[�N������
			cout << "�_�C����I��";
			//switch�𔲂���
			break;

		case heart:
			//�I�������}�[�N������
			cout << "�n�[�g��I��";
			//switch�𔲂���
			break;

		case club:
			//�I�������}�[�N������
			cout << "�N���u��I��";
			//switch�𔲂���
			break;

		case spade:
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