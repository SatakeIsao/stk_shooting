/**
 * 見た目が存在するオブジェクト
 */
#pragma once


namespace app
{
	namespace actor
	{
		/**
		 * 見た目が存在するオブジェクトすべての基底クラス
		 */
		class Actor : public IGameObject
		{
		protected:
			ModelRender modelActor_;	//アクターのモデルレンダー
			Vector3		position_;		//アクターの座標
			Quaternion  rotation_;		//アクターの回転
			Vector3		scale_;			//アクターの拡大率


		public:
			Actor()
				: position_(Vector3::Zero)
				, rotation_(Quaternion::Identity)
				, scale_(Vector3::One)
			{
			}
			virtual ~Actor() {}
		};




		/**
		 * キャラクターの基底クラス
		 */
		class Charactor : public Actor
		{
		public:
			Charactor()
				: Actor()
			{
			}
			virtual ~Charactor() {}
			virtual bool Start() override;
			virtual void Update() override;
			virtual void Render(RenderContext& rc) override;
		};
	}
}


