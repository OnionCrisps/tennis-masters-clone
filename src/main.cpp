#include<iostream>
#include "../includes/Game.hpp"
using namespace std;

int main(){
	
	//Tennis Engine initialization(Game.hpp class)
	Game game;

	//Game loop:
	while(game.isRunning()){	
		//Update
		game.update();	
		//Render
		game.render();
	}	
	//EOP
	return 0;
}
