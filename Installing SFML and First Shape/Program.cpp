#include "Program.h"

Program::Program(int width, int height) : w(width), h(width), window(sf::VideoMode(width, height), "SFML Tutorial")

{

}

int Program::mainLoop()

{
	sf::Event events;

	sf::RectangleShape rect(sf::Vector2f(200, 100));

	rect.setPosition(w/2, h/2);

	if (!window.isOpen())

	{
		std::cout << "WINDOW DID NOT OPEN" << std::endl;
		return EXIT_FAILURE;
	}

	while (window.isOpen())

	{

		while (window.pollEvent(events))

		{
			if (events.type == sf::Event::EventType::Closed)

			{
				window.close();
			}
		}

		//Clear
		window.clear(sf::Color::Black);
		//Draw

		window.draw(rect);


		//Display
		window.display();
	}

	return EXIT_SUCCESS;
}