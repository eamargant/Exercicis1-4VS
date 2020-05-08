#pragma once
class BasePlayer
{

protected:
	int life;
	int cates;
	

public:

	BasePlayer();
	BasePlayer(int custom_life, int custom_cates);
	~BasePlayer();
	void ReciveDamage(float damage); 
	void ReciveHealth(float health);
	void ApplyDamage(BasePlayer* punter, float damage);
	float getLife();

};