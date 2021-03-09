#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include <iostream>


class InteractiveObj
{
private:
	//Variables
	//Floor
	sf::Texture left_grass;
	sf::Texture mid_grass;
	sf::Texture right_grass;

	sf::Sprite floor_map;
	sf::Sprite floor_map3;
	std::vector<sf::Sprite*> grassList;

	//Functions
	void InitFloor();

public:
	//Constructors / Destructors
	InteractiveObj();
	virtual ~InteractiveObj();

	//Functions
	void Render(sf::RenderWindow& window);
};
