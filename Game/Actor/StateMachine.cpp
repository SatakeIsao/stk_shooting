#include "stdafx.h"
#include "StateMachine.h"


namespace app
{
	namespace actor
	{
		void BattleCharacterStateMachine::Update()
		{
			// currentStateは設定されているはず
			K2_ASSERT(currentState_ != nullptr, "現在の状態が設定されていません。InitializeStateを呼んでください。");
			if (currentState_) {
				// TODO:一旦コメント
				//uint32_t request;
				//if (currentState_->RequestState(request)) {
				//	currentState_->Exit();
				//	currentState_ = FindState(request);
				//	currentState_->Enter();
				//}
				//currentState_->Update();
			}
		}
	}
}