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
	NewGO<app::actor::BattleCharactor>(0);

	return true;
}

void Game::Update()
{
}




void Game::Render(RenderContext& rc)
{

	
}


