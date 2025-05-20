#include "stdafx.h"
#include "StateMachine.h"


namespace app
{
	namespace actor
	{
		void BattleCharacterStateMachine::Update()
		{
			// currentState‚ÍÝ’è‚³‚ê‚Ä‚¢‚é‚Í‚¸
			K2_ASSERT(currentState_ != nullptr, "Œ»Ý‚Ìó‘Ô‚ªÝ’è‚³‚ê‚Ä‚¢‚Ü‚¹‚ñBInitializeState‚ðŒÄ‚ñ‚Å‚­‚¾‚³‚¢B");
			if (currentState_) {
				uint32_t request;
				if (currentState_->RequestState(request)) {
					currentState_->Exit();
					currentState_ = FindState(request);
					currentState_->Enter();
				}
				currentState_->Update();
			}
		}
	}
}