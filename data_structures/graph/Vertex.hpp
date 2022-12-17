#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <iostream>
#include <vector>
#include "Edge.hpp"

class Vertex
{
    std::string m_data;
    std::vector<Edge> m_edges;

    public:

        Vertex() = default;
        Vertex(std::string data);

        std::string getData();
        std::vector<Edge> getEdges();

        void setData(std::string data);
        void setEdges(std::vector<Edge> edges);
};

#endif