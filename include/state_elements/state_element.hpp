#pragma once

#include <SFML/Graphics.hpp>
#include <managers/state_manager.hpp>

// Default font used globally
extern sf::Font globalFont;

/**
 * @class StateElement
 * @brief Abstract base class for GUI elements within the application.
 * 
 * StateElement provides common functionalities for positioning, alignment, and interaction 
 * for elements in the application, such as handling mouse and keyboard inputs.
 */
class StateElement
{
public:
    /**
     * @brief Constructs a StateElement with the specified position and size.
     * @param applicationStateManager Pointer to the state manager.
     * @param x X-coordinate of the element.
     * @param y Y-coordinate of the element.
     * @param width Width of the element.
     * @param height Height of the element.
     */
    StateElement(StateManager *applicationStateManager, float x, float y, float width, float height);

    /**
     * @brief Virtual destructor for StateElement.
     */
    ~StateElement();

    /**
     * @brief Pure virtual function to update the element's state.
     */
    virtual void update() = 0;

    /**
     * @brief Returns a pointer to the list of drawable objects for the element.
     * @return Pointer to the vector of drawables.
     */
    std::vector<sf::Drawable *> *getDrawableList();

    /**
     * @brief Returns a pointer to the temporary list of drawables.
     * @return Pointer to the vector of temporary drawables.
     */
    std::vector<sf::Drawable *> *getTemporaryDrawableList();

protected:
    /**
     * @brief Centers the text on the shape of the element.
     */
    void centerTextOnShape();

    /**
     * @brief Aligns the text to the left on the shape of the element.
     */
    void leftAlignTextOnShape();

    /**
     * @brief Checks if the element is hovered over by the mouse.
     * @return True if hovered, false otherwise.
     */
    bool hovered();

    /**
     * @brief Checks if the element is clicked by the mouse.
     * @return True if clicked, false otherwise.
     */
    bool clicked();

    /**
     * @brief Gets the current mouse position.
     * @return Mouse position as a 2D vector.
     */
    sf::Vector2i getMousePosition();

    /**
     * @brief Checks if the left mouse button was pressed.
     * @return True if pressed, false otherwise.
     */
    bool leftKeyPressed();

    /**
     * @brief Checks if the left mouse button was released.
     * @return True if released, false otherwise.
     */
    bool leftKeyReleased();

    /**
     * @brief Checks if the left mouse button is being held down.
     * @return True if held, false otherwise.
     */
    bool leftKeyHeld();

    /**
     * @brief Checks if the right mouse button was pressed.
     * @return True if pressed, false otherwise.
     */
    bool rightKeyPressed();

    /**
     * @brief Checks if the right mouse button was released.
     * @return True if released, false otherwise.
     */
    bool rightKeyReleased();

    /**
     * @brief Checks if the right mouse button is being held down.
     * @return True if held, false otherwise.
     */
    bool rightKeyHeld();

    /**
     * @brief Gets the text input entered by the user.
     * @return Text input as a string.
     */
    std::string getTextInput();

    StateManager *stateManager; ///< Pointer to the application state manager.
    std::vector<sf::Drawable *> drawableList; ///< List of drawable objects for the element.
    std::vector<sf::Drawable *> temporaryDrawableList; ///< List of temporary drawable objects.
    sf::Text *text; ///< Pointer to the text object.
    sf::RectangleShape *shape; ///< Pointer to the shape of the element.
};
