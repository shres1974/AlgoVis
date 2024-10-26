#pragma once

#include <state_elements/state_element.hpp>

/**
 * @class Panel
 * @brief A UI element for displaying information within the application.
 * 
 * The Panel class displays a labeled panel with customizable color, font size, and type,
 * and allows dynamic updates to its displayed text.
 */
class Panel : public StateElement
{
public:
    /**
     * @brief Constructs a Panel with specified position, size, label, font size, color, and type.
     * @param applicationStateManager Pointer to the state manager.
     * @param x X-coordinate of the panel position.
     * @param y Y-coordinate of the panel position.
     * @param width Width of the panel.
     * @param height Height of the panel.
     * @param panelLabel Label displayed on the panel.
     * @param fontSize Font size for the label.
     * @param color Color of the panel.
     * @param panelType Integer defining the type of panel.
     */
    Panel(StateManager *applicationStateManager, float x, float y, float width, float height, std::string panelLabel, int fontSize, sf::Color color, int panelType);

    /**
     * @brief Destructor for Panel.
     */
    ~Panel();

    /**
     * @brief Updates the panel's display.
     */
    void update();

    /**
     * @brief Sets a new string to display on the panel.
     * @param newString The new string to display.
     */
    void setString(std::string newString);

private:
    int panelType; ///< Integer defining the panel's type.
};
