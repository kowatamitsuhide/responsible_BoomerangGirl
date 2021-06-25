#pragma once

/**
 * @file   MainStart.h
 * @brief  �Q�[���J�n����UI�E�t�B�[���h�E�v���C���[�\�������Ă���N���X
 * @author Mitsuhide Kowata
 * @date   2021/05/20
 */

#include"../../../BaseScene.h"
#include "../../../../../Field/FieldManager.h"
#include "../../../../../PlayerManager/PlayerManeger.h"
#include "../../../../../UI/UI.h"
class MainStart :public BaseScene
{
public:
	MainStart();
	virtual ~MainStart();
	bool Initialize() override;
	int Update() override;
	void Draw2D() override;
private:
	FieldManager* fieldmanager;
	PlayerManager* playermanager;

	CAMERA camera;
	ANIMATIONMODEL player;
	UI ui;
};