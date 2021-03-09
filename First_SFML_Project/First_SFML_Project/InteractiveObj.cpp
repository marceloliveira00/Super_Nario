#include "InteractiveObj.h"

//Private functions
void InteractiveObj::InitFloor()
{
	//Drawing left grass
	left_grass.loadFromFile("spritesheets/map.png", sf::IntRect(42, 314, 11, 11));
	floor_map.setPosition(50, 567);
	floor_map.setScale(sf::Vector2f(3, 3));
	floor_map.setTexture(left_grass);

	//Drawing mid grass
	mid_grass.loadFromFile("spritesheets/map.png", sf::IntRect(55, 314, 12, 11));
	int grassPosX = 83;
	for (int c = 0; c < 17; c++)
	{
		sf::Sprite* floor_map2 = new sf::Sprite();

		floor_map2->setPosition(grassPosX, 567);
		floor_map2->setScale(sf::Vector2f(3, 3));
		floor_map2->setTexture(mid_grass);
		grassPosX += 36;

		grassList.push_back(floor_map2);
	}

	//Drawing right grass
	right_grass.loadFromFile("spritesheets/map.png", sf::IntRect(68, 314, 12, 11));
	floor_map3.setPosition(grassPosX, 567);
	floor_map3.setScale(sf::Vector2f(3, 3));
	floor_map3.setTexture(right_grass);
}

//Constructors / Destructors
InteractiveObj::InteractiveObj()
{
	this->InitFloor();
}

InteractiveObj::~InteractiveObj()
{

}

//Public Functions
void InteractiveObj::Render(sf::RenderWindow& window)
{
	window.draw(floor_map);
	for (int c = 0; c < grassList.size(); c++)
	{
		window.draw(*grassList[c]);
	}

	window.draw(floor_map3);
}
