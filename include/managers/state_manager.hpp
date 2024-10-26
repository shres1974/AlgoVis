#pragma once
#include <iostream>
#include <managers/window_manager.hpp>
#include <managers/event_manager.hpp>
#include <managers/resource_manager.hpp>

class State;

/**
 * @file StateManager.hpp
 * @brief Manages application states and transitions
 */

/**
 * @enum Action
 * @brief Enumeration of possible application actions
 */
enum class Action
{
    ChangeToMainMenu,              ///< Switch to main menu state
    ChangeToNewSketchMenu,         ///< Switch to new sketch menu
    ChangeToLoadSketchMenu,        ///< Switch to load sketch menu
    ChangeToHelpMenu,             ///< Switch to help menu
    ChangeToCreditsMenu,          ///< Switch to credits menu
    QuitApplication,              ///< Exit the application
    Array,                        ///< Array visualization action
    Graph,                        ///< Graph visualization action
    Grid,                         ///< Grid visualization action
    String,                       ///< String visualization action
    Create,                       ///< Create new item
    Reset,                        ///< Reset current state
    Run,                          ///< Run visualization
    Pause,                        ///< Pause visualization
    Back,                         ///< Return to previous state
    BubbleSort,                   ///< Bubble sort algorithm
    SelectionSort,                ///< Selection sort algorithm
    InsertionSort,                ///< Insertion sort algorithm
    ShellSort,                    ///< Shell sort algorithm
    GnomeSort,                    ///< Gnome sort algorithm
    GraphDepthFirstSearch,        ///< Graph DFS algorithm
    GraphBreadthFirstSearch,      ///< Graph BFS algorithm
    GraphDijkstra,                ///< Dijkstra's algorithm
    GridDepthFirstSearch,         ///< Grid DFS algorithm
    GridBreadthFirstSearchPathfinding, ///< Grid BFS pathfinding
    GridFloodFill,                ///< Grid flood fill algorithm
    GridAStarPathfinder           ///< A* pathfinding algorithm
};

/**
 * @class StateManager
 * @brief Manages application states and handles state transitions
 * 
 * The StateManager class coordinates between different application states,
 * handling state transitions and maintaining the current state.
 */
class StateManager
{
public:
    /** @brief Default constructor */
    StateManager();
    
    /**
     * @brief Constructor with manager references
     * @param applicationWindowManager Pointer to window manager
     * @param applicationEventManager Pointer to event manager
     * @param applicationResourceManager Pointer to resource manager
     */
    StateManager(WindowManager *applicationWindowManager, EventManager *applicationEventManager, ResourceManager *applicationResourceManager);
    
    /** @brief Destructor */
    ~StateManager();
    
    /**
     * @brief Sets the window manager reference
     * @param applicationWindowManager Pointer to window manager
     */
    void setWindowManager(WindowManager *applicationWindowManager);
    
    /**
     * @brief Sets the event manager reference
     * @param applicationEventManager Pointer to event manager
     */
    void setEventManager(EventManager *applicationEventManager);
    
    /**
     * @brief Sets the resource manager reference
     * @param applicationResourceManager Pointer to resource manager
     */
    void setResourceManager(ResourceManager *applicationResourceManager);
    
    /** @brief Starts the state manager */
    void start();
    
    /**
     * @brief Gets the current application state
     * @return Pointer to current state
     */
    State *getCurrentState();
    
    /**
     * @brief Gets the window manager reference
     * @return Pointer to window manager
     */
    WindowManager *getApplicationWindow();
    
    /**
     * @brief Gets the event manager reference
     * @return Pointer to event manager
     */
    EventManager *getEventManager();
    
    /**
     * @brief Performs the specified action
     * @param action Action to perform
     */
    void perform(Action action);
    
    /**
     * @brief Changes to a new state
     * @param newState Pointer to new state
     */
    void changeState(State *newState);
    
    /** @brief Updates the current state */
    void update();
    
    /** @brief Renders the current state */
    void render();
    
private:
    WindowManager *windowManager;      ///< Pointer to window manager
    EventManager *eventManager;        ///< Pointer to event manager
    ResourceManager *resourceManager;  ///< Pointer to resource manager
    State *currentState;              ///< Pointer to current state
};
