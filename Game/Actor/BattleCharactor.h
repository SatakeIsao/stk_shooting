/**
 * 見た目が存在するオブジェクト
 */
#pragma once
#include "Actor.h"

namespace app
{
	namespace actor
	{
		/**
		 * バトルキャラクタークラス
		 */
		class BattleCharactor : public Charactor
		{
		public:
			BattleCharactor() {};
			virtual ~BattleCharactor() {};
			virtual bool Start() override;
			virtual void Update() override;
			virtual void Render(RenderContext& rc) override;
		};
		
	}
}


