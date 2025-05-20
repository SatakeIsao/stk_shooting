/**
 * アクターの状態を管理する
 */
#pragma once
#include <unordered_map>


#define appState(name)	\
public:\
	static constexpr uint32_t ID() { return Hash32(#name); }


namespace app
{
	namespace actor
	{
		IState stateA;
		IState stateB;

		stateA.test == stateB.test;
		IState.test == stateA.test;
		IState.test == stateB.test;

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



		class IdleState :public IState
		{
			appState(IdleState);


		public:
			IdleState();
			virtual ~IdleState();

			virtual void Enter() override;
			virtual void Update() override;
			virtual void Exit() override;

			virtual bool RequestState(uint32_t& request) override;
		};




		class MoveState :public IState
		{
			appState(MoveState);


		public:
			MoveState();
			~MoveState();

			virtual void Enter() override;
			virtual void Update() override;
			virtual void Exit() override;

			virtual bool RequestState(uint32_t& request) override;
		};
	}
}


