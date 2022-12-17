#include "Vertex.hpp"

Vertex::Vertex(std::string data)
{
    m_data = data;
}

std::string Vertex::getData()
{
    return m_data;
}

std::vector<Edge> Vertex::getEdges()
{
    return m_edges;
}

void Vertex::setData(std::string data)
{
    m_data = data;
}

void Vertex::setEdges(std::vector<Edge> edges)
{
    m_edges = edges;
}