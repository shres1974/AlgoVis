#pragma once

#include <SFML/Graphics.hpp>
#include <state_elements/state_element.hpp>
#include <state_elements/panel.hpp>
#include <sketches/sketch_container.hpp>

/**
 * @class Array
 * @brief Represents a container for bars used in sorting visualizations.
 */
class Array;

class Bar
{
public:
    friend class Array;

    /**
     * @brief Constructor for the Bar class.
     * @param value Integer value of the bar.
     * @param arraySize Total number of bars in the array.
     * @param barWidth Width of the bar.
     * @param areaHeight Height of the visualization area.
     */
    Bar(int value, int arraySize, float barWidth, float areaHeight);

    /**
     * @brief Destructor for the Bar class.
     */
    ~Bar();

    /**
     * @brief Sets the color of the bar.
     * @param newColor New color to set.
     */
    void setColor(sf::Color newColor);

    /**
     * @brief Retrieves the color of the bar.
     * @return Current color of the bar.
     */
    sf::Color getColor();

    /**
     * @brief Retrieves the height of the bar.
     * @return Height of the bar.
     */
    int getHeight();

    /**
     * @brief Retrieves the width of the bar.
     * @return Width of the bar.
     */
    int getWidth();

    /**
     * @brief Retrieves the value of the bar.
     * @return Integer value of the bar.
     */
    int getValue();

    /**
     * @brief Sets the value of the bar.
     * @param newValue New integer value to set.
     */
    void setValue(int newValue);

private:
    int value; ///< Integer value of the bar.
    float height, width; ///< Dimensions of the bar.
    sf::Color color; ///< Color of the bar.
};

/**
 * @class Array
 * @brief Manages an array of Bar objects and handles sorting operations.
 */
class Array : public SketchContainer
{
public:
    /**
     * @brief Constructor for the Array class.
     * @param applicationStateManager Pointer to the state manager.
     * @param x X-coordinate position.
     * @param y Y-coordinate position.
     * @param width Width of the array container.
     * @param height Height of the array container.
     * @param action Action to be applied.
     */
    Array(StateManager *applicationStateManager, float x, float y, float width, float height, Action action);

    /**
     * @brief Destructor for the Array class.
     */
    ~Array();

    /**
     * @brief Creates the array of bars.
     */
    void create();

    /**
     * @brief Resets the array to the initial state.
     */
    void reset();

    /**
     * @brief Updates the state of the array.
     */
    void update();

private:
    void createDrawableList(); ///< Creates a list of drawable bars.
    void createFromInput(); ///< Creates the array from input data.

    int getOuter(); ///< Gets the outer index.
    int getInner(); ///< Gets the inner index.
    void setOuter(int i); ///< Sets the outer index.
    void setInner(int j); ///< Sets the inner index.

    void bubbleSort(); ///< Performs Bubble Sort on the array.
    void insertionSort(); ///< Performs Insertion Sort on the array.
    void selectionSort(); ///< Performs Selection Sort on the array.
    void shellSort(); ///< Performs Shell Sort on the array.
    void gnomeSort(); ///< Performs Gnome Sort on the array.

    std::vector<Bar *> barList; ///< List of bars in the array.
    int outer, inner; ///< Indices for sorting algorithms.
    float arrayWidth, arrayHeight; ///< Dimensions of the array.
    float barWidth, barHeight, barOffset; ///< Properties of each bar.
    float x, y; ///< Position of the array.
    Action action; ///< Action to be executed.
    int size; ///< Size of the array.
    int minimumIndex; ///< Index of the minimum value for sorting.
    bool sorted; ///< Sorting completion flag.

    int gap; ///< Gap for Shell Sort.
    bool gapSet = false; ///< Flag indicating if the gap has been set.
};
