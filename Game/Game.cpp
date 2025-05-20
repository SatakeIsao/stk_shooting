#include "stdafx.h"
#include "Game.h"
#include "Actor/BattleCharactor.h"



Game::Game()
{
}

Game::~Game()
{
}

bool Game::Start()
{
	auto* battleCharacter = NewGO<app::actor::BattleCharacter>(0);
	battleCharacter->Initialize("Assets/ModelData/StoneMonster/StoneMonster.tkm");

	return true;
}

void Game::Update()
{
}




void Game::Render(RenderContext& rc)
{

	
}


