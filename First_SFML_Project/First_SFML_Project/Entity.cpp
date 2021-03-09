#include "Entity.h"

//Private functions
void Entity::InitPlayer()
{
	nario.loadFromFile("spritesheets/marioMovements.png", sf::IntRect(206, 3, 15, 28));
	narioPlayer.setPosition(playerPosX, playerPosY);
	narioPlayer.setScale(sf::Vector2f(3, 3));
	narioPlayer.setTexture(nario);
}

//Constructors / Destructors
Entity::Entity()
{
	this->playerMoveSpeed = 100.f;
	InitPlayer();
}

Entity::~Entity()
{

}


//Public Functions
void Entity::Move(const float& dt, const float dir_x, const float dir_y)
{
	this->narioPlayer.move(dir_x * this->playerMoveSpeed * dt, dir_y * this->playerMoveSpeed * dt);
}

void Entity::Update(const float& dt)
{
	// TODO: Fazer o Nario andar

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		std::cout << "A has been pressed!" << std::endl;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		this->Move(dt, -1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		this->Move(dt, 1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		this->Move(dt, 0.f, -1.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		this->Move(dt, 0.f, 1.f);
}

void Entity::Render(sf::RenderWindow& window)
{
	window.draw(narioPlayer);
}