#ifndef Player_hpp
#define Player_hpp

#include <SFML/Graphics.hpp>
#include "Animation.hpp"
#include "Collider.hpp"

class Player
{
public:
	Player(sf::Texture *texture, sf::Vector2u imageCount, float switchTime, float speed);
	~Player();

	sf::Vector2f getPosition() { return body.getPosition(); }
	void update(float deltaTime);
	void draw(sf::RenderWindow &window);

	Collider getCollider() { return Collider(body); }

private:
	sf::RectangleShape body;
	Animation animation;
	unsigned int row;
	float speed;
	bool faceRight;
};
#endif
