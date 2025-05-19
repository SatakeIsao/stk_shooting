シューティングゲーム
・命名規則
　名前空間→小文字
　例：namespace app →アプリケーション側に絶対つける
			エンジンにはつけない
　アプリケーションの中に、名前空間を入れていく。
　例：namespace actor →　役者という意味見た目がついているものすべて該当

　クラス（関数）構造体名→UpperCamelCase(アッパーキャメルケース）
　
　変数→camelCase
　　1文字目だけ小文字

　定数→UpperSnakeCase
    全部大文字、単語区切りアンダーバー（_）

　メンバ変数→private、protectedの場合：最後にアンダーバー
			例：camelCase_

		publicの場合：そのまま,アンダーバーなし
			例：camelCase

ファイル構成
　・Actor→見た目が存在するオブジェクトすべて継承
　　・Character→キャラクターとなるもの
　　　・BattleCharacter→バトル中に存在するキャラクター例；Playerとか
　　　・EnemyCharacter→バトル中に存在する敵

	
　・CharacterSteering→キャラ操作するためのクラス、操作対象のバトルキャラクターのポインタを参照する

　・StateMachine→ステートマシン、各キャラが持つステートを操作する
　　・CharacterStateMachine
　　　・BattleCharacterStateMachine


文字化け
visualStudio
エクスプローラー