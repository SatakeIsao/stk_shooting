/**
 * アクターの状態を管理する
 */
#pragma once
#include <unordered_map>
#include "Actor/BattleCharactor.h"


namespace app
{
	namespace actor
	{
		/**
		 * キャラクターを操作する機能
		 * NOTE：前作っていたゲームではPlayerクラスが担っていた
		 *		 Playerクラスはモデルの表示とキャラの移動などの操作を担っていたが、
		 * 　　　機能を分離している
		 */
		class CharacterSteering
		{
		private:
			BattleCharacter* target_;	//操作対象のバトルキャラクター


		public:
			void SetTarget(BattleCharacter* target)
			{
				target_ = target;
			}
		};

	}
}


