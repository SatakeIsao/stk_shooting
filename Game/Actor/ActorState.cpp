#include "stdafx.h"
#include "ActorState.h"


namespace app
{
	namespace actor
	{
		IdleState::IdleState()
		{
		}


		IdleState::~IdleState()
		{
		}


		void IdleState::Enter() 
		{
		}


		void IdleState::Update()
		{
		}


		void IdleState::Exit()
		{
		}
		

		bool IdleState::RequestState(uint32_t& request)
		{
		}




		/**********************************/


		MoveState::MoveState()
		{
		}


		MoveState::~MoveState()
		{
		}


		void MoveState::Enter()
		{
		}


		void MoveState::Update()
		{
		}


		void MoveState::Exit()
		{
		}


		bool MoveState::RequestState(uint32_t& request)
		{
		}
	}
}