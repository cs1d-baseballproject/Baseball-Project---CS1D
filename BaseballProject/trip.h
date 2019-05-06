#ifndef TRIP_H
#define TRIP_H

#include <QDebug>
#include "graph.h"
#include "adjlistgraph.h"
#include "team.h"
#include "distance.h"
#include <vector>

//------------------------------- NOTES --------------------------------
// stv - stands for stadiums to visit
//     - should be initialized with the indices of the stadiums to visit
//
// otv - stands for order to visit
//     - an empty vector of integers should be passed
//     - will be initialized with the indices of the stadiums to visit in
//       the proper order
//----------------------------------------------------------------------

class trip
{
private:
    std::vector<team>* teams;
    std::vector<Distance>* edges;
    graph<QString, int>* grph;

    // MST
    std::vector<edge<int>>* mst;

    // BFS
    std::vector<vertex<QString>>* bfsOrder;
    int bfsTotal;

    // DFS
    adjListGraph<QString, int> dfsGraph;
    std::vector<int>* dfsOrder;

public:
    // Constructor
    trip(std::vector<team>& _teams, std::vector<Distance>& _edges):
    teams{&_teams}, edges{&_edges}, grph{nullptr} {updateGraph();}


    // Dijkstra's starting at LA (trip #1)
    int losAngelesTrip(int end);

    // Custom trip in which user selects order (trip #2)
    int orderTrip(std::vector<int>& stv);

    // Visit all stadiums starting at Comerica Park (trip #3)
    int comericaParkTrip(std::vector<int>& otv);

    // Custom trip in which algorithm recursively selects next closest stadium (trip #4)
    int efficientOrder(int start, std::vector<int>& stv, std::vector<int>& otv);

    // MST (trip #5)
    int MST(std::vector<edge<int>>& otv);

    // DFS starting at Fenway Park (trip #6)
    int DFS(std::vector<QString>& otv);

    // BFS starting at Coors Field (trip #7)
    int BFS(std::vector<vertex<QString>>& otv);

    // Helper Functions
    unsigned int indexOf(QString stadium);
    void updateGraph();

    // Destructor
    ~trip();
};

#endif // TRIP_H
