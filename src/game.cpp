#include "../includes/Game.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/WindowStyle.hpp>

//PRIVATE:



void Game::initVar(){
	this->window = nullptr;
	
}


void Game::initWin(){
	this->videoMode.height = 600;
	this->videoMode.width = 800;

	this->window = new sf::RenderWindow(this->videoMode, "Rectangle", sf::Style::Titlebar | sf::Style::Close);

	this->window->setFramerateLimit(75);
}

void Game::initGameObject(){
	//this -> gameObject.enemy.setPosition(sf::Vector2f(100.f, 100.f));
	this -> gameObject.enemy.setSize(sf::Vector2f(200.f, 200.f));
	this -> gameObject.enemy.setFillColor(sf::Color::Blue);
	this -> gameObject.enemy.setOutlineColor(sf::Color::White);
	this -> gameObject.enemy.setOutlineThickness(5.f);

}

//public:




//Constructor & Destructor
Game::Game(){
	this -> initVar();
	this -> initWin();
	this -> initGameObject();
}
Game::~Game(){delete this-> window;}




//FUNCTIONS:




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
	this->window->clear();

	this->window->draw(gameObject.enemy);

	this->window->display();


}
