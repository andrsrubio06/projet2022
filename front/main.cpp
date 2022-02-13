/**
 *  IN-204 Project T9 clavier
 *  main.cpp
 *  Purpose: Principal function. Run the program
 *
 *  @author Marcelo
 *  @email andres-eloy.rubio-carvajal@ensta-paris.fr
 * 	@author 
 * 	@email @ensta-paris.fr 
 */


#include <iostream>
#include <stdexcept>
#include <ctime>
#include <cstdlib>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Button.hpp"
/**
 *  @brief  Global function named main, which is the designated start of the program
 *
 *  @return int             Shows how the program exited. The normal exit of program is 
 *                          represented by zero return value. If the code has errors, 
 *                          fault etc., it will be terminated by non-zero value
 */


int main()
{

    sf::RenderWindow window(sf::VideoMode(360,640), "SFML work!");

    while(window.isOpen()){

        sf::Event event;
        

        sf::Font font;
        font.loadFromFile("fonts/Amatic-Bold.ttf");
	

         Button* a = new Button(sf::Vector2f(100,50), sf::Vector2f(100,100), "z",font);
        //sf::Vector2f sizeButton(15.0f, 30.0f);
        //sf::RectangleShape button(sf::Vector2f(20,20));
           
        //sf::Text text("hello", font);
        //text.setCharacterSize(30);
        //text.setStyle(sf::Text::Bold);
        //text.setFillColor(sf::Color::Black);

		//sf::Text texto;
		//texto.setFont(font);
        //texto.setCharacterSize(30);
        //texto.setStyle(sf::Text::Bold);
        //texto.setString("afrbrtntr");  
        //texto.setFillColor(sf::Color::White);
        //texto.setOutlineThickness(5);
        //texto.setOutlineColor(sf::Color::Red);
        //texto.setPosition(sf::Vector2f(100,100));

        
        

            while (window.pollEvent(event))
            {

                switch ( event.type ){      //SWITCH
			        case sf::Event::Closed:
			        	window.close( );

			        	break;

			        case sf::Event::MouseButtonPressed:
			        	std::cout << "Mouse button has been pressed" << std::endl;

			    switch (event.key.code){
			        	case sf::Mouse::Left:
			        		std::cout << "LEFT KEY HAS BEEN PRESSED" << std::endl;

			        		break;
			        	}

			        	break;

			        case sf::Event::MouseButtonReleased:
			        	std::cout << "Mouse button has been released" << std::endl;

			    switch (event.key.code){        //SWITCH
			        case sf::Mouse::Right:
			        		std::cout << "Right key has been released" << std::endl;

			        		break;
			        	}

			        case sf::Event::MouseWheelMoved:
			        	std::cout << "Mouse wheel has been scrolled" << std::endl;

			        	std::cout << event.mouseWheel.delta << std::endl;

			        	break;

			        case sf::Event::MouseMoved:
			        	//std::cout << "Mouse has been moved" << std::endl;

			        	//std::cout << event.mouseMove.y << std::endl;

			        	break;

			        case sf::Event::MouseEntered:
			        	std::cout << "Mouse has entered the window" << std::endl;

			        	break;

			        case sf::Event::MouseLeft:
			        	std::cout << "Mouse has left the window" << std::endl;

			        	break;
			}

            }
        
        window.clear();
        a->drawing(window);
		
        window.display();
    }
    return EXIT_SUCCESS;
}