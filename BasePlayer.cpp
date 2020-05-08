#include "BasePlayer.h"

BasePlayer::BasePlayer() {
	life = 100.0f;
	cates = 1;
}

BasePlayer::BasePlayer(int custom_life, int custom_cates) {
	life = custom_life;
	cates = custom_cates;
}
BasePlayer::~BasePlayer() {

}

void BasePlayer::ReciveDamage(float damage) {
	life -= damage;
}

void BasePlayer::ApplyDamage(BasePlayer* punter, float damage) {
	punter->ReciveDamage(damage);
}

float BasePlayer::getLife() {
	return life;
}

void BasePlayer::ReciveHealth(float health) {
	life += health;
}
