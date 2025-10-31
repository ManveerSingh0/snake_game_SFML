#include <iostream>
#include <SFML/Graphics.hpp>


int main(){
    sf::RenderWindow window(sf::VideoMode({700,700}), "Snake Game");


    while(window.isOpen()){
        while(std::optional event = window.pollEvent()){
            if(event->is<sf::Event::Closed>()){
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
