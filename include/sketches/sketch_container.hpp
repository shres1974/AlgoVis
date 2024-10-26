#pragma once
#pragma once

#include <state_elements/state_element.hpp>
#include <state_elements/panel.hpp>

/**
 * @class SketchContainer
 * @brief Abstract base class for various sketch containers used in visualizations.
 * 
 * SketchContainer provides a framework for creating, resetting, and updating 
 * graphical elements with a status panel, pause functionality, and initialization state.
 */
class SketchContainer : public StateElement
{
public:
    /**
     * @brief Constructs a SketchContainer.
     * @param applicationStateManager Pointer to the state manager.
     * @param x X-coordinate of the container position.
     * @param y Y-coordinate of the container position.
     * @param width Width of the container.
     * @param height Height of the container.
     */
    SketchContainer(StateManager *applicationStateManager, float x, float y, float width, float height);

    /**
     * @brief Destructor for SketchContainer.
     */
    ~SketchContainer();

    /**
     * @brief Checks if the container is paused.
     * @return True if paused, false otherwise.
     */
    bool isPaused();

    /**
     * @brief Sets the paused state of the container.
     * @param signal Boolean indicating the pause state (true for paused).
     */
    void setPaused(bool signal);

    /**
     * @brief Pure virtual function to create elements in the container.
     */
    virtual void create() = 0;

    /**
     * @brief Pure virtual function to reset elements in the container.
     */
    virtual void reset() = 0;

    /**
     * @brief Pure virtual function to update elements in the container.
     */
    virtual void update() = 0;

    /**
     * @brief Retrieves the status panel associated with the container.
     * @return Pointer to the status panel.
     */
    Panel *getStatusPanel();

protected:
    std::string statusMessage; ///< Message displayed on the status panel.
    Panel *statusPanel; ///< Pointer to the status panel.
    bool paused; ///< Pause state of the container.
    bool initialized; ///< Initialization state of the container.
};
