#include "trip.h"

// Dijkstra's starting at LA (trip #1)
int trip::losAngelesTrip(int end)
{
    return grph->weightTo(end);
}

// Custom trip in which user selects order (trip #2)
int trip::orderTrip(std::vector<int>& stv)
{
    int total = 0;
    for(unsigned int i = 1; i < stv.size(); i++)
    {
        grph->clearDijkstras();
        grph->dijkstras(stv[i-1]);
        total += grph->weightTo(stv[i]);
    }
    return total;
}

// Visit all stadiums starting at Comerica Park (trip #3)
int trip::comericaParkTrip(std::vector<int>& otv)
{
    // Initialize vector with the index of all teams
    std::vector<int> a(teams->size());
    std::iota(a.begin(), a.end(), 0);
    a[0]; // iota doesnt work without this

    // Determine most efficient order to visit stadiums/return distance
    return efficientOrder(static_cast<int>(indexOf("Comerica Park")), a, otv);
}

// Custom trip in which algorithm recursively selects next closest stadium (trip #4)
int trip::efficientOrder(int start, std::vector<int>& stv, std::vector<int>& otv)
{
    int total = 0;
    while(!stv.empty()) {
        // Add start (aka current) stadium to the order in which to visit the stadiums
        // then remove start from the stadiums to visit
        //qDebug() << teams->at(static_cast<unsigned int>(start)).getStadiumName();
        otv.push_back(start);
        for(auto i = stv.begin(); i != stv.end(); i++)
            if(*i == start) {
                stv.erase(i);
                break;
            }

        // Exit loop when stadiums to visit is empty
        if(stv.empty())
            break;

        // Determine distances to all other vertices from start (aka current)
        grph->clearDijkstras();
        grph->dijkstras(start);

        // Locate closest stadium that is on the list of stadiums to be visited and
        // update start to that stadium
        start = stv[0];
        int lowest = grph->weightTo(start);
        for(unsigned int i = 1; i < stv.size(); i++)
            if(grph->weightTo(stv[i]) < lowest)
            {
                start = stv[i];
                lowest = grph->weightTo(start);
            }
        total += lowest;
    }

    grph->clearDijkstras();
    grph->dijkstras(static_cast<int>(indexOf("Angel Stadium")));
    return total;
}

int trip::MST(std::vector<edge<int>>& otv)
{
    otv = *mst;
    return grph->getMSTTotal();
}

int trip::DFS(std::vector<QString>& otv)
{
    otv = dfsGraph.getResult();
    return dfsGraph.getTotal();
}

int trip::BFS(std::vector<vertex<QString>>& otv)
{
    otv = *bfsOrder;
    return bfsTotal;
}

unsigned int trip::indexOf(QString temp)
{
    unsigned int index = 0;
    for(; index < teams->size(); index++)
        if(teams->at(index).getStadiumName() == temp)
            break;

    return index;
}

void trip::updateGraph()
{
    if(grph != nullptr)
        delete grph;

    // Create Graph and Initialize graph with stadiums and edges
    grph = new graph<QString, int>;
    for(unsigned int i = 0; i < teams->size(); i++) {
        QString data = teams->at(i).getStadiumName();
        grph->addVertex(data);
        dfsGraph.insertVertex(data);
    }
    for(unsigned int i = 0; i < edges->size(); i++) {
        QString start = edges->at(i).getFrom(), end = edges->at(i).getTo();
        int weight = edges->at(i).getDist();
        grph->addEdge(start, end, weight);
        dfsGraph.insertEdge(start, end, weight);
    }

    // set up los angeles trip (trip #1)
    grph->dijkstras(static_cast<int>(indexOf("Angel Stadium")));

    // set up MST (trip #5)
    mst = &grph->kruskals();

    // set up BFS starting at Coors Field (trip #7)
    bfsOrder = &grph->BFS(bfsTotal, static_cast<int>(indexOf("Coors Field")));


    //
    dfsGraph.DFS(QString("Fenway Park"));

}

trip::~trip()
{
    delete teams;
    delete edges;
    delete grph;
    delete mst;
    delete bfsOrder;
    delete dfsOrder;
}
