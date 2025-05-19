/**
 * アクターの状態を管理する
 */
#pragma once
#include <unordered_map>


namespace app
{
	namespace actor
	{
		/**
		 * ステートの基底クラス
		 */
		class IState
		{
		public:
			IState() {}
			virtual ~IState() {}

			virtual void Enter() = 0;
			virtual void Update() = 0;
			virtual void Exit() = 0;

			virtual bool RequestState(uint32_t& request) = 0;
		};
	}
}


