#pragma once
#include "SpringCamera.h"

namespace nsPlayer { class Player; }
class Player;
class GameCamera : public IGameObject
{
public:
	GameCamera();
	~GameCamera();
	bool Start();
	void Update();

	nsPlayer::Player*		m_player = nullptr;						//�v���C���[
	Vector3					m_toCameraPos;							//�����_���王�_�Ɍ������x�N�g��
	Vector3					m_offsetPos = { 0.0f, 70.0f, -130.0f };
	Vector3					m_fixedCameraPos;	//�p�X�ړ����̃J�����̌Œ�ʒu
	Vector3					m_fixedCameraTarget;	//�p�X�ړ����̃J�����̌Œ蒍���_
	Vector3 m_fixedCameraOffset;   // �p�X�ړ����̃J�����̑��Έʒu
	Quaternion				XRot;
	Quaternion				YRot;
	SpringCamera			m_springCamera;							//�΂˃J����
	float					m_stickPowerX = 0.0f;
	float					m_stickPowerY = 0.0f;
	bool					m_isCameraFixed = false;	//�p�X�ړ����ɃJ�������Œ肷��t���O
};

