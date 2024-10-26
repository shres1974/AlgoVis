#pragma once

#include <SFML/Graphics.hpp>
#include <state_elements/state_element.hpp>
#include <sketches/sketch_container.hpp>

/**
 * @class Node
 * @brief Represents a node in a graph for pathfinding and visualization.
 */
class Node : public StateElement
{
public:
    /**
     * @brief Constructs a Node.
     * @param applicationStateManager Pointer to the state manager.
     * @param value Value of the node.
     * @param x X-coordinate of the node's position.
     * @param y Y-coordinate of the node's position.
     * @param radius Radius of the node shape.
     * @param sketchWidth Width of the sketch.
     * @param sketchHeight Height of the sketch.
     */
    Node(StateManager *applicationStateManager, int value, float x, float y, float radius, float sketchWidth, float sketchHeight);

    /**
     * @brief Destructor for Node.
     */
    ~Node();

    /**
     * @brief Gets the radius of the node.
     * @return Radius of the node.
     */
    float getRadius();

    void setColor(sf::Color newColor); ///< Sets the color of the node.
    sf::Color getColor(); ///< Gets the color of the node.

    void setPosition(sf::Vector2i newPosition); ///< Sets the position of the node.
    sf::Vector2f getPosition(); ///< Gets the position of the node.
    sf::CircleShape *getNodeShape(); ///< Gets the shape of the node.
    sf::Vector2f getCenter(); ///< Gets the center position of the node.
    void update(); ///< Updates the node state.

private:
    int value; ///< Node's value.
    float radius; ///< Radius of the node.
    float areaHeight, areaWidth; ///< Dimensions of the sketch area.
    float x, y; ///< Position of the node.

    sf::CircleShape nodeShape; ///< Circle shape for the node.
    sf::Text nodeIndexText; ///< Text for node's index.
    sf::Color nodeColor; ///< Color of the node.
};

/**
 * @class Edge
 * @brief Represents an edge between two nodes in a graph.
 */
class Edge
{
public:
    Edge(Node *firstNode, Node *secondNode); ///< Constructor.
    ~Edge(); ///< Destructor.

    void setColor(sf::Color newColor); ///< Sets the color of the edge.
    void update(); ///< Updates the edge state.
    float getNewAngle(sf::Vector2f firstPoint, sf::Vector2f secondPoint); ///< Calculates angle.
    float getNewLength(sf::Vector2f firstPoint, sf::Vector2f secondPoint); ///< Calculates length.
    sf::RectangleShape *getEdgeShape(); ///< Gets the shape of the edge.

private:
    float areaHeight, areaWidth; ///< Dimensions of the area.
    float edgeWidth, edgeLength, edgeAngle; ///< Edge properties.

    Node *firstNode; ///< First node of the edge.
    Node *secondNode; ///< Second node of the edge.
    sf::Color color; ///< Edge color.
    sf::RectangleShape edgeShape; ///< Rectangle shape for the edge.
};

/**
 * @class Graph
 * @brief Manages a graph structure with nodes and edges for visualization.
 */
class Graph : public SketchContainer
{
public:
    Graph(StateManager *applicationStateManager, float x, float y, float width, float height, int size, Action action);
    ~Graph();

    void create(); ///< Creates the graph.
    void reset(); ///< Resets the graph state.
    void update(); ///< Updates the graph state.

private:
    void createDrawableList(); ///< Creates drawable elements for the graph.

    void depthFirstSearch(); ///< Performs DFS.
    void breadthFirstSearch(); ///< Performs BFS.
    void dijkstra(); ///< Performs Dijkstra's algorithm.

    std::vector<Node *> nodeList; ///< List of nodes.
    std::vector<Edge *> edgeList; ///< List of edges.

    float graphWidth, graphHeight; ///< Graph dimensions.
    float nodeRadius, edgeWidth; ///< Node and edge properties.
    int numberOfNodes, numberOfEdges; ///< Counts of nodes and edges.

    float x, y; ///< Position.
    Action action; ///< Action type.
    int size; ///< Graph size.
    bool completed; ///< Completion flag.
};
