#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>


int main()
{
	int width = 800;
	int height = 800;

	sf::RenderWindow window(sf::VideoMode(width, height), "SFML works!");
	//sf::RectangleShape shape(sf::Vector2f(150, 150));
	//shape.setFillColor(sf::Color::Red);

	float angle = 0.0f;
	
	sf::VertexArray triangle(sf::TrianglesStrip, 10);

	triangle[0].position = sf::Vector2f(100.f, 100.f);
	triangle[1].position = sf::Vector2f(100.f, 200.f);
	triangle[2].position = sf::Vector2f(200.f, 100.f);
	triangle[3].position = sf::Vector2f(200.f, 200.f);
	triangle[4].position = sf::Vector2f(300.f, 150.f);
	triangle[5].position = sf::Vector2f(300.f, 250.f);
	triangle[6].position = sf::Vector2f(400.f, 150.f);
	triangle[7].position = sf::Vector2f(400.f, 250.f);
	triangle[8].position = sf::Vector2f(500.f, 200.f);
	triangle[9].position = sf::Vector2f(500.f, 300.f);


	triangle[0].color = sf::Color::Red;
	triangle[1].color = sf::Color::Blue;
	triangle[2].color = sf::Color::Yellow;
	triangle[3].color = sf::Color::White;
	triangle[4].color = sf::Color::Red;
	triangle[5].color = sf::Color::Blue;
	triangle[6].color = sf::Color::Yellow;
	triangle[7].color = sf::Color::White;
	triangle[8].color = sf::Color::Red;
	triangle[9].color = sf::Color::Blue;

	
	
	int direction = 1;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			for (size_t i = 0; i < 10; i++)
			{
				triangle[i].position.x -= 0.01f;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			for (size_t i = 0; i < 10; i++)
			{
				triangle[i].position.x += 0.01f;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			for (size_t i = 0; i < 10; i++)
			{
				triangle[i].position.y -= 0.01f;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			for (size_t i = 0; i < 10; i++)
			{
				triangle[i].position.y += 0.01f;
			}
		}


		window.clear();
		window.draw(triangle);
		window.display();
	}

	return 0;
}