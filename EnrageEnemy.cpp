#include "EnrageEnemy.h"
#include "BasePlayer.h"
#include <iostream>
using namespace std;

EnrageEnemy::EnrageEnemy() {
	BaseEnemy::BaseEnemy();
}

EnrageEnemy::EnrageEnemy(float custom_life, float custom_attack) {
	life = custom_life;
	attack = custom_attack;
}

EnrageEnemy::~EnrageEnemy() {
	BaseEnemy::~BaseEnemy();
}
float EnrageEnemy::getLife() {
	return BaseEnemy::getLife();

}
void EnrageEnemy::TakeDamage(float damage) {
	BaseEnemy::TakeDamage(damage);

	if (life < 5.0f) {
		attack *= 2.0f;
	}
}
float EnrageEnemy::getAttack() {
	return attack;

}
//bool combat(BasePLayerNew* punter, BasePLayerNew player, EnrageEnemy punterE) {
//	cout << "Vida del player: " << player.getLife() << endl;
//	cout << "Vida del enemy: " << punterE.getLife() << endl;
//	return true;
//}
