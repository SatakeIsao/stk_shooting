#include "stdafx.h"
#include "StateMachine.h"


namespace app
{
	namespace actor
	{
		void BattleCharacterStateMachine::Update()
		{
			// currentState�͐ݒ肳��Ă���͂�
			K2_ASSERT(currentState_ != nullptr, "���݂̏�Ԃ��ݒ肳��Ă��܂���BInitializeState���Ă�ł��������B");
			if (currentState_) {
				// TODO:��U�R�����g
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