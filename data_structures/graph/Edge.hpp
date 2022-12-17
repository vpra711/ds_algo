#ifndef EDGE_HPP
#define EDGE_HPP

#include "Vertex.hpp"

class Edge
{
    Vertex m_start;
    Vertex m_destination;
    int m_weight;

    public:
    
        Edge() = default;
        Edge(Vertex start, Vertex destination, int weight);

        Vertex getStart();
        Vertex getDestination();
        int getWeight();

        void setStart(Vertex start);
        void setDestination(Vertex destination);
        void setWeight(int weight);

};

#endif