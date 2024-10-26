#pragma once

#include <states/state.hpp>

/**
 * @file GraphAlgorithmMenu.hpp
 * @brief Menu state for graph algorithm selection
 */

/**
 * @class GraphAlgorithmMenu
 * @brief Menu state that provides graph algorithm selection options
 * 
 * GraphAlgorithmMenu is a specialized State class that presents users with
 * various graph algorithm choices for visualization and execution. This includes
 * algorithms such as depth-first search, breadth-first search, and Dijkstra's
 * algorithm. Inherits from the base State class to integrate with the state
 * management system.
 */
class GraphAlgorithmMenu : public State
{
public:
    /**
     * @brief Constructor for graph algorithm menu
     * @param applicationStateManager Pointer to the state manager handling the application states
     * 
     * Initializes the menu state with various graph algorithm options including:
     * - Depth-First Search (DFS)
     * - Breadth-First Search (BFS)
     * - Dijkstra's Shortest Path
     * and sets up the necessary UI elements for algorithm selection
     */
    GraphAlgorithmMenu(StateManager *applicationStateManager);
    
    /** 
     * @brief Destructor
     * 
     * Cleans up any resources allocated by the graph algorithm menu,
     * including UI elements and algorithm-specific components
     */
    ~GraphAlgorithmMenu();
};