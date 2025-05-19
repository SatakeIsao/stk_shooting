#include "stdafx.h"
#include "BattleCharactor.h"


namespace app
{
	namespace actor
	{
		bool BattleCharacter::Start()
		{
			modelActor_.SetPosition(position_);
			modelActor_.SetRotation(rotation_);
			modelActor_.SetScale(scale_);
			modelActor_.Update();

			return true;
		}


		void BattleCharacter::Update()
		{
		}


		void BattleCharacter::Render(RenderContext& rc)
		{
			modelActor_.Draw(rc);
		}


		void BattleCharacter::Initialize(const char* filePath)
		{
			// TODO:�ォ��t�@�C���p�X�ȊO���w��ł���悤�ɂ���\��
			//      �Ⴆ�΃A�j���[�V�����Ƃ��e�Ƃ�
			modelActor_.Init(filePath, 0, 0, enModelUpAxisY, true, false);
		}
	}
}