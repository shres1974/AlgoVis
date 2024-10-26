#pragma once

#include <state_elements/state_element.hpp>

/**
 * @class Button
 * @brief Represents a clickable button element within the application.
 * 
 * The Button class handles graphical button elements with different color states 
 * and associated actions, updating based on user interaction.
 */
class Button : public StateElement
{
public:
    /**
     * @brief Constructs a Button with specified position, size, label, and action.
     * @param applicationStateManager Pointer to the state manager.
     * @param x X-coordinate of the button position.
     * @param y Y-coordinate of the button position.
     * @param width Width of the button.
     * @param height Height of the button.
     * @param buttonLabel Label displayed on the button.
     * @param action Action triggered by the button.
     */
    Button(StateManager *applicationStateManager, float x, float y, float width, float height, std::string buttonLabel, Action action);

    /**
     * @brief Destructor for Button.
     */
    ~Button();

    /**
     * @brief Updates the button's state based on user interaction.
     */
    void update();

private:
    sf::Color defaultColor; ///< Default color of the button.
    sf::Color hoverColor; ///< Color when the button is hovered over.
    sf::Color clickedColor; ///< Color when the button is clicked.
    Action buttonAction; ///< Action associated with the button.
};
