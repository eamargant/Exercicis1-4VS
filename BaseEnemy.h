#pragma once

/**
	* Base enemy class is a super Class for all my enemy characters
	* <ul>
	* <li> 1 -SDGDFSGDSG
	* <li> 2 -FDSGFDSGDSGFDSGDSFG
	* @see 
	* @note 
	* @note
	* @warning 
*/
class BaseEnemy
{

protected: 
	float life;
	float attack;

public:

	BaseEnemy();
	BaseEnemy(float custom_life, float custom_attack);
	~BaseEnemy();
	virtual void TakeDamage(float damage); //Metode virtual
	float getLife();

};

