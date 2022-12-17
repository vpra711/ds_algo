#include "Edge.hpp"

Edge::Edge(Vertex start, Vertex destination, int weight)
{
    m_start = start;
    m_destination = destination;
    m_weight = weight;
}

Vertex Edge::getStart()
{
    return m_start;
}

Vertex Edge::getDestination()
{
    return m_destination;
}

int Edge::getWeight()
{
    return m_weight;
}

void Edge::setStart(Vertex start)
{
    m_start = start;
}

void Edge::setDestination(Vertex destination)
{
    m_destination = destination;
}

void Edge::setWeight(int weight)
{
    m_weight = weight;
}