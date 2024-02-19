#pragma once
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

//Tennis Engine
class Game{
	private:
		//Variables
		
		//Window 
		
		sf::RenderWindow* window;
		sf::VideoMode videoMode;
		sf::Event ev;

		//Functions
		void initVar();
		void initWin();

	public:
		//Constructors & Destructor
		Game();
		~Game();

		//Accessor

		const bool isRunning() const;
		//Event Poller:

		void pollEvents();

		//Update & Renderer:
		
		void update();
		void render();
};
