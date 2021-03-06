
#pragma once
#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

//数值掩码
#define	CARD_MASK_COLOR				0xF0								//花色掩码
#define	CARD_MASK_VALUE				0x0F								//数值掩码


class Card:public CCNode {
public:
	//扑克动画
	CCArmature *m_cpArmatureCard;
	//BYTE cardValue;
	//BYTE cardColor;
private:
	short iCardColor;
	short iCardValue;
	int iZOrder;
	//是否抬起牌
	bool isUpCard;
public:
	Card();
	~Card();
	CREATE_FUNC(Card);
	//创建扑克动画
	void createCardArmature(CCBatchNode *cardBatch, short cardColor, short cardValue, int zOrder);
	//改变牌
	void changeCard(bool isAction,short cardColor, short cardValue, int zOrder,float fScale);
	//触摸牌
	void touchCard(CCPoint pos,bool isAction);
	//抬起牌
	void upCard(bool isAction);
	//获取牌是否抬起
	bool getIsUpCard();
	void resetIsUpCard();
private:
	void showCard();
};
