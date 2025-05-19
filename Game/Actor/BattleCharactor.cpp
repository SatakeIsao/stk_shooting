#include "stdafx.h"
#include "BattleCharactor.h"

bool app::actor::BattleCharactor::Start()
{
	modelActor_.Init("Assets/ModelData/StoneMonster.tkm");
	modelActor_.SetPosition(position_);
	modelActor_.SetRotation(rotation_);
	modelActor_.SetScale(scale_);
	modelActor_.Update();

	return true;
}

void app::actor::BattleCharactor::Update()
{
}

void app::actor::BattleCharactor::Render(RenderContext& rc)
{
	modelActor_.Draw(rc);
}
