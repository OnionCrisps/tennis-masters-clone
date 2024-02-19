#include "../includes/Game.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Window/WindowStyle.hpp>

//PRIVATE:
void Game::initVar(){
	this->window = nullptr;
	
}
void Game::initWin(){
	this->videoMode.height = 600;
	this->videoMode.width = 800;

	this->window = new sf::RenderWindow(this->videoMode, "MyGame", sf::Style::Titlebar | sf::Style::Close);
}

//public:
//Constructor & Destructor
Game::Game(){
	this -> initVar();
	this -> initWin();
}
Game::~Game(){delete this-> window;}

 
////FUNCTIONS:

//Accessor

const bool Game::isRunning() const
{
	return this->window->isOpen();
}
//Event Poller:

void Game::pollEvents(){
	while (this->window->pollEvent(this->ev)) {
		if (this->ev.type == sf::Event::Closed){
			this->window->close();
			break;
		}
	}
}

//Updater & Renderer:

void Game::update(){
	this->pollEvents();

}

void Game::render(){
	this->window->clear(sf::Color::Green);

	this->window->display();
}
