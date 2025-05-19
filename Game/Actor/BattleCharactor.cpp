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
			// TODO:後からファイルパス以外も指定できるようにする予定
			//      例えばアニメーションとか影とか
			modelActor_.Init(filePath, 0, 0, enModelUpAxisY, true, false);
		}
	}
}