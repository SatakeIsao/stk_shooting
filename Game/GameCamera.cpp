#include "stdafx.h"
#include "GameCamera.h"

GameCamera::GameCamera()
{
}

GameCamera::~GameCamera()
{
}

bool GameCamera::Start()
{
	//�����_���王�_�܂ł̃x�N�g����ݒ�
	m_toCameraPos.Set(0.0f, 70.0f, -200.0f);
	//m_toCameraPos *= 0.5f;
	
	//�J�����̃j�A�N���b�v�ƃt�@�[�N���b�v��ݒ�
	g_camera3D->SetNear(1.0f);
	g_camera3D->SetFar(80000.0f);

	//�΂˃J�����̏�����
	m_springCamera.Init(
		*g_camera3D,	//�΂˃J�����̏������s���J�������w�肷��
		1000.0f,		//�J�����̈ړ����x�̍ő�l
		true,			//�J�����ƒn�`�Ƃ̂����蔻�����邩�ǂ����̃t���O�Btrue���Ƃ����蔻����s��
		5.0f			//�J�����ɐݒ肳��鋅�̃R���W�����̔��a�B��3������true�̎��ɗL���ɂȂ�
	);
	return true;
}

void GameCamera::Update()
{
	// �v���C���[�̈ʒu�Ɖ�]���擾
	//Vector3 target = m_player->GetPostion(); // �v���C���[�̌��݈ʒu
	//Quaternion playerRotation = m_player->GetRotation(); //�v���C���[�̉�]

	//if (m_player->GetIsPathMoving())
	//{
	//	// **�p�X�ړ����̓J�����̈ʒu���v���C���[�̑��Έʒu�ɌŒ肷�邪�A�Ǐ]����**
	//	if (!m_isCameraFixed)
	//	{
	//		// **�J�����̑��Έʒu���L�^**
	//		m_fixedCameraOffset = g_camera3D->GetPosition() - target;
	//		m_isCameraFixed = true;
	//	}

	//	// **�v���C���[�̈ʒu����������J���������̕�������**
	//	Vector3 cameraPosition = target + m_fixedCameraOffset;
	//	Vector3 cameraTarget = target + Vector3(0.0f, 70.0f, 0.0f); // �����_�̓v���C���[�̏�����

	//	m_springCamera.SetPosition(cameraPosition);
	//	m_springCamera.SetTarget(cameraTarget);
	//}
	//else
	//{
	//	// **�ʏ펞�̓v���C���[�̔w���Ǐ]**
	//	m_isCameraFixed = false; // �Œ����

	//	Vector3 offset(m_offsetPos); // �ʏ펞�̃J�����̈ʒu
	//	playerRotation.Apply(offset); // �v���C���[�̉�]��K�p

	//	Vector3 cameraPosition = target + offset;
	//	Vector3 cameraTarget = target;
	//	cameraTarget.y += 70.0f;

	//	m_springCamera.SetPosition(cameraPosition);
	//	m_springCamera.SetTarget(cameraTarget);
	//}

	m_springCamera.Update();


	//// �E�X�e�B�b�N�̓��͂ŃJ���������E�ɉ�]������
	//m_stickPowerX = g_pad[0]->GetRStickXF(); // X���̃X�e�B�b�N����
	//// �v���C���[�̎����Y����]�ŃJ�������ړ�
	//Quaternion yRotation;
	//yRotation.SetRotationDeg(Vector3::AxisY, 2.4f * m_stickPowerX); // Y������ɉ�]
	//yRotation.Apply(m_toCameraPos); // �J�����̃I�t�Z�b�g�ɉ�]��K�p

	//�v���C���[�̌������J�����������Ă�������ɂ���
	//�J�����̐��ʃx�N�g�����擾����
	//Vector3 forward = g_camera3D->GetForward();
	//�v���C���[���΂߂������Ȃ��悤��y���[���ɂ���
	//forward.y = 0.0f;
	//���K��
	//forward.Normalize();

	////�p�ӂ������Ńv���C���[�̃��[�e�[�V������p�ӂ���
	//Quaternion playerRotation;
	////���ʃx�N�g��(0,0,1)����J�����̐��ʃx�N�g���Ɍ�������]�����
	//playerRotation.SetRotation(Vector3::AxisZ, forward);
	////�v���C���[�̃��[�e�[�V�����ɓK�p����
	//m_player->SetRotation(playerRotation);
}