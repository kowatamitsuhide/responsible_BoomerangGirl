#pragma once

/**
 * @file   MainEnd.h
 * @brief  �Q�[���J�n����UI�E�t�B�[���h�E�G�E�v���C���[�\�������Ă���N���X
 * @author Mitsuhide Kowata
 * @date   2021/05/20
 */

#include"../../../BaseScene.h"
#include "../../../../../Field/FieldManager.h"
#include "../../../../../EnemyManager/EnemyManeger.h"
#include "../../../../../PlayerManager/PlayerManeger.h"
#include "../../../../../UI/UI.h"
class MainEnd :public BaseScene
{
public:
	MainEnd();
	virtual ~MainEnd();
	bool Initialize() override;
	int Update() override;
	void Draw2D() override;
private:
	//SPRITE bg;
	FieldManager* fieldmanager;
	PlayerManager* playermanager;
	EnemyManager* enemymanager;

	CAMERA camera;
	ANIMATIONMODEL player;
	UI ui;
};