/**
 * 見た目が存在するオブジェクト
 */
#pragma once
#include "Actor.h"
#include "StateMachine.h"

namespace app
{
	namespace actor
	{
		/**
		 * バトルキャラクタークラス
		 */
		class BattleCharacter : public Charactor
		{
		private:
			BattleCharacterStateMachine stateMachine_;


		public:
			BattleCharacter() {};
			virtual ~BattleCharacter() {};
			virtual bool Start() override;
			virtual void Update() override;
			virtual void Render(RenderContext& rc) override;


		public:
			/**
			 * 初期化関数
			 * Note：外部からモデルのファイルパスを指定して、見た目を変えられるようにする
			 */
			void Initialize(const char* filePath);


		public:
			BattleCharacterStateMachine* GetStateMachine() { return &stateMachine_; }
		};
		
	}
}


