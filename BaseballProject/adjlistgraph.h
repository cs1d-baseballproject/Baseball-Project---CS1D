#ifndef ADJLISTGRAPH_H
#define ADJLISTGRAPH_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <QDebug>

template<class T, class U>
class adjListGraph
{
public:
    class vertex;

private:
    class edge;


    // Adjacency List Structure
    struct node {
        vertex* vertexData;
        edge* edgeData;
        node* next;
        node* previous;
        node(): vertexData{nullptr}, edgeData{nullptr}, next{nullptr},
                previous{nullptr}{}
    };
    node** vertexList;	// array of vertices

    std::vector<T>* result;

    // Maintenance Variables
    node* current;		// iterator
    int count;			// number of vertices in the graph
    int capacity;		// capacity of vertices array
    U total;			// distance

    /******************************************************************************
     * resize
     * 	Description: Resize array of linked lists to the new capacity n
     ******************************************************************************/
    void resize(int n) {
        // Variable Declarations
        node** temp = new node*[n];	// new array with capacity of size n

        // PROCESSING - copy elements from the original array to the new array,
        //				delete the original and update all variables
        for(int i = 0; i < n; i++)
            *(temp + i) = (i < capacity)? *(vertexList + i): nullptr;

        // delete array
        delete[] vertexList;

        // update all variables
        vertexList = temp;
        capacity = n;
    }

public:
    // Constructor
    adjListGraph(int n = 35): vertexList{new node*[n]}, result{new std::vector<T>},
                              current{nullptr}, count{0}, capacity{n}, total{U()} {
        for(int i = 0; i < n; i++)
            vertexList[i] = nullptr;
    }

    /******************************************************************************
     * insertVertex
     * 	Description: Insert vertex into the graph with the element passed
     ******************************************************************************/
    vertex& insertVertex(T elem) {
        // Variable Declaration
        vertex* temp = new vertex(elem);	// new vertex with element passed

        // Resize if capacity is exceeded
        if(count >= capacity)
            resize(2*capacity);

        // PROCESSING - insert vertex into vertices array
        vertexList[count] = new node();
        current = vertexList[count++];
        current->vertexData = temp;

        return *temp;
    }

    /******************************************************************************
     * insertEdge
     * 	Description: Insert edge from vertex W to vertex V with the weight passed
     ******************************************************************************/
    void insertEdge(T W, T V, U weight = U()) {
        // Variable Declarations
        edge* W_to_V = new edge(weight);	// w to v edge
        edge* V_to_W = new edge(weight);	// v to w edge
        node* wNode;						// from node
        node* vNode;						// to node
        vertex* wVertex;
        vertex* vVertex;

        // Locate node associated with vertices
        for(int i = 0; i < count; i++)
            if(vertexList[i]->vertexData->getElem() == W) {
                wNode = vertexList[i];
                wVertex = vertexList[i]->vertexData;
            }
            else if(vertexList[i]->vertexData->getElem() == V) {
                vNode = vertexList[i];
                vVertex = vertexList[i]->vertexData;
            }

        // Initialize adjacency list for W
        W_to_V->to = vNode;
        V_to_W->to = wNode;
        while(wNode->next != nullptr)
            wNode = wNode->next;
        wNode->next = new node;
        wNode->next->previous = wNode;
        wNode->next->edgeData = W_to_V;
        wNode->next->vertexData = vVertex; //&V;

        // Initialize adjacency list for V
        while(vNode->next != nullptr)
            vNode = vNode->next;
        vNode->next = new node;
        vNode->next->previous = vNode;
        vNode->next->edgeData = V_to_W;
        vNode->next->vertexData = wVertex; //&W;
    }

    /******************************************************************************
     * DFS
     * 	Description: Perform a depth first traversal/search through the graph
     ******************************************************************************/
    void DFS(T&& start, node* curr = nullptr) {
        // PROCESSING - determine start node for the first run
        if(curr == nullptr) // if this is the first run
            for(int i = 0; i < count; i++)
                if(vertexList[i]->vertexData->getElem() == start) {
                    curr = vertexList[i];
                    curr->vertexData->setVisited();
                    result->push_back(curr->vertexData->getElem());
                    //cout << setw(29) << right << "From:" << "    To:\n" << setw(29) << "START";
                }
        node* thisNode = curr;

        // PROCESSING - determine next node to visit (smallest mileage and has
        //              not been visited)
        if(curr->next == nullptr) return;
        curr = curr->next;
        for(current = curr->next; current != nullptr; current = current->next)
            if((*current->edgeData < *curr->edgeData ||
                curr->vertexData->isVisited()) &&
                !current->vertexData->isVisited())
                curr = current;

        // PROCESSING - recurse on node
        //qDebug() << " -> " << thisNode->vertexData->getElem();
        if(!curr->vertexData->isVisited()) {
            curr->vertexData->setVisited();
            total += curr->edgeData->weight;
            result->push_back(curr->vertexData->getElem());
            //qDebug() << "discovery edge: " << curr->vertexData->getElem();
            DFS(T(), curr->edgeData->to);
            DFS(T(), thisNode);
        }
        //else
            //qDebug() << "back edge     : " << curr->vertexData->getElem();
    }

    std::vector<T>& getResult()
    {
        return *result;
    }

    U getTotal()
    {
        return total;
    }

    // Destructor
    ~adjListGraph() {
        // PROCESSING - delete array of linked lists
        for(int i = 0; i < count; i++)
            for(current = vertexList[i]->next; current != nullptr; current = current->next) {
                delete current->previous;
                current->previous = nullptr;
            }

        delete[] vertexList;
        delete result;
    }
};

// Edge class definition
template<class T, class U>
class adjListGraph<T, U>::edge
{
public:
    // Variable Declarations
    node* to;		// The destination of this edge
    U weight;		// The weight of this edge

    // Constructor
    edge(U _weight = U()): to{nullptr}, weight{_weight}{}

    /******************************************************************************
     * operator<
     * 	Description: This function compares the weights of two edges
     ******************************************************************************/
    bool operator<(const edge& _edge) const {
        return weight < _edge.weight;
    }
};

// Vertex class definition
template<class T, class U>
class adjListGraph<T, U>::vertex
{
private:
    // Variable Declarations
    T elem;			// Data stored at this vertex
    bool visited;	// True if this vertex has been visited

public:
    // Constructor
    vertex(T& _elem): elem{_elem}, visited{false}{}
    vertex(vertex& _vertex): elem{_vertex.elem}, visited{_vertex.visited}{}

    /******************************************************************************
     * isVisited
     * 	Description: This function will return true if this vertex has been visited
     ******************************************************************************/
    bool isVisited() const {
        return visited;
    }

    /******************************************************************************
     * setVisted
     * 	Description: This function sets this vertex as visited
     ******************************************************************************/
    void setVisited() {
        visited = true;
    }

    /******************************************************************************
     * getElem
     * 	Description: This function returns a reference to the element at this vertex
     ******************************************************************************/
    T& getElem() {
        return elem;
    }

    /******************************************************************************
     * operator==
     * 	Description: This function compares two vertices to see if they are equal
     ******************************************************************************/
    bool operator==(const vertex& _vertex) const {
        return elem == _vertex.elem;
    }
};

#endif // ADJLISTGRAPH_H
