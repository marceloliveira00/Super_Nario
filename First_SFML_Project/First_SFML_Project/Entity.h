#pragma once
#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <vector>


class Entity
{
private:
	// Variables
	// Nario
	sf::Texture nario;
	sf::Sprite narioPlayer;

	//Functions
	void InitPlayer();

protected:
	float playerMoveSpeed;

public:
	Entity();
	virtual ~Entity();

	//Variables
	float playerPosX = 50;
	float playerPosY = 483;
	float velocityPlayer;
	std::string marioDirection = "right";

	// Functions
	virtual void Move(const float& dt, const float x, const float y);

	void Render(sf::RenderWindow& window);
	void Update(const float& dt);

};
