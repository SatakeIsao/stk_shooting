/**
 * アクターの状態を管理する
 */
#pragma once
#include <unordered_map>


namespace app
{
	namespace actor
	{
		class IState;


		/**
		 * アクターの状態管理クラス
		 */
		class ActorStateMachine
		{
			using StateMap = std::unordered_map<uint32_t, IState*>;
			using StatePair = std::pair<uint32_t, IState*>;


		protected:
			StateMap stateMap_;
			IState* currentState_;


		public:
			ActorStateMachine()
				: currentState_(nullptr)
			{
				stateMap_.clear();
			}
			virtual ~ActorStateMachine()
			{
				for (auto it : stateMap_) {
					delete it.second;
					it.second = nullptr;
				}
				stateMap_.clear();
			}
			virtual void Update() {}


		public:
			template<typename T>
			inline void RegisterState()
			{
				stateMap_.insert(StatePair(T::ID(), new T()));
			}


			template<typename T>
			inline void InitializeState()
			{
				currentState_ = FindState(T::ID());
			}


		protected:
			inline IState* FindState(uint32_t id)
			{
				const auto& it = stateMap_.find(id);
				if (it == stateMap_.end()) {
					// ここに来ることはないはず
					return nullptr;
				}
				return it->second;
			}
		};




		/**
		 * キャラクターの状態管理クラス
		 */
		class CharacterStateMachine : public ActorStateMachine
		{
		protected:
			// 入力方向
			Vector3 inputDirection_;
			// 入力パワー
			float inputPower_;

			
		public:
			CharacterStateMachine()
				: inputDirection_(Vector3::Zero)
				, inputPower_(0.0f)
			{
			}
			virtual ~CharacterStateMachine() {}

			virtual void Update() override {}

			
		public:
			/**
			 * 入力方向の設定
			 */
			void SetInputDirection(const Vector3& inputDirection)
			{
				inputDirection_ = inputDirection;
			}

			/**
			 * 入力パワーの設定
			 */
			void SetInputPower(const float inputPower)
			{
				inputPower_ = inputPower;
			}
		};




		/**
		 * バトルキャラクター用の状態管理クラス
		 */
		class BattleCharacterStateMachine : public CharacterStateMachine
		{
		public:
			BattleCharacterStateMachine() {}
			virtual ~BattleCharacterStateMachine() {}

			void Update() override;
		};
	}
}


