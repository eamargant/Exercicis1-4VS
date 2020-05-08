// ExempleClasse.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "BaseEnemy.h"
#include "EnrageEnemy.h"
#include "BasePlayer.h"
using namespace std;


int main()
{
  BasePlayer player;
  BaseEnemy enemy1;
  BaseEnemy enemy2(300.0f, 10.0f);
  BaseEnemy* punterAenemy1 = &enemy1;
  EnrageEnemy enemy3;
  EnrageEnemy* e3_ptr = &enemy3;

 
  
  punterAenemy1->TakeDamage(20.0f);

  cout << "Life vale " << punterAenemy1->getLife() <<  endl;


  printf("life = %f", punterAenemy1->getLife());
  
  enemy3.TakeDamage(40.0f);
  e3_ptr->TakeDamage(40.0f);
  enemy3.getLife();

  cout << "Enemy3 life vale " << enemy3.getLife() << endl;
  enemy1.TakeDamage(20.0f);
  enemy2.TakeDamage(40.0f);
  system("pause");

}


