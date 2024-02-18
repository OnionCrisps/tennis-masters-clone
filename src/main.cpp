#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include<iostream>
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>

using namespace std;

int main(){
	
	sf::RenderWindow window(sf::VideoMode(640, 480), "MyGame",  sf::Style::Titlebar | sf::Style::Close );
	
	sf::Event ev;

	while(window.isOpen()){
		//EVENT POLLS
		while (window.pollEvent(ev)) {

			if (ev.type == sf::Event::Closed){
				window.close();
				break;
			}
		}
		
		//Update
		window.clear(sf::Color::Green);


		//Render
		window.display();

	}	


	return 0;
}
