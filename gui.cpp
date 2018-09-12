#include <SFML/Graphics.hpp>

int main()
{	
   int scale = 1; 	//change this later to adapt to screen size
   sf::RectangleShape a[16][16];
   sf::Color grey(128,128,128);
   sf::Color darkGrey(192,192,192);
   sf::Color darkestGrey(215,215,215);
   for(int i = 0; i < 16; i++)
   {
	   for(int j = 0; j < 16; j++)
	   {
   		sf::RectangleShape shape(sf::Vector2f(50,50));
   		shape.setPosition(25+50*i*scale,150+50*j*scale);
   		shape.setFillColor(darkestGrey);
   		shape.setOutlineThickness(7*scale);
   		shape.setOutlineColor(grey);
		a[i][j] = shape;
	   }
   }

   sf::RenderWindow window(sf::VideoMode(850*scale, 975*scale), "Minesweeper");
   while(window.isOpen())
   {
	   sf::Event event;
	   while (window.pollEvent(event))
	   {
	       if (event.type == sf::Event::Closed)
	           window.close();
	   }
           window.clear(darkGrey);
	   for(int i = 0; i < 16; i++)
	   {
		   for(int j = 0; j < 16; j++)
		   {
			   window.draw(a[i][j]);
		   }
	   }
           //window.draw(shape);
	   window.display();
   }
   return 0;
}
