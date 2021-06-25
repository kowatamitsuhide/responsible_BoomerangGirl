#pragma once

/**
 * @file   ResultScene.h
 * @brief  �Q�[���̌��ʂ�\������N���X
 * @author Mitsuhide Kowata
 * @date   2021/05/20
 */

#include "../../../BaseScene.h"

class ResultScene :public BaseScene {
public:
	ResultScene();
	virtual ~ResultScene();
	bool Initialize() override;
	int Update() override;
	void Draw2D() override;

private:
	void SaveScore();
	FONT   font;
	SOUND  dramroll;
	MUSIC  bgm;
	SPRITE result,record;
	bool   appear_flag = false;

	int count = MIN_COUNT;

	/**
�@�@* @enum FrameCount
�@�@* ���t���[���o�ߌ�Ƀ��U���g�`��p
�@�@*/
	enum FrameCount {MIN_COUNT = 0, MAX_COUNT = 90};
protected:

};