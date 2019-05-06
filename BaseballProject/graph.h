#ifndef GRAPH_H_
#define GRAPH_H_

#include<QDebug>
#include<vector>
#include<queue>
#include<iostream>
#include<iomanip>

template<class T>
class vertex
{
private:
	// Variable Declarations
	T data;			// Data corresponding with this vertex
	bool visited;	// True if this vertex has been visited
	int id;			// Id corresponding to this vertex

public:
	// Constructor
	vertex(T& _data, int count): data{_data}, visited{false}, id{count}{}

	T& info() {return data;}

	bool isVisited() {return visited;}

	void setVisited(bool _visited) {visited = _visited;}

	int vertexID() {return id;}
};

template<class T>
class edge
{
private:
	// Variable Declarations
	T weight;	// Weight of this edge
	int from;	// Originating vertex
	int to;		// Ending vertex

public:
	// Constructor
	edge(int _from, int _to, T _weight = T()): weight{_weight}, from{_from}, to{_to}{}

	// Notes: returns inverted result since priority_queue sorts in descending order
	bool operator<(const edge& newEdge) const {return weight > newEdge.weight;}

	T& getWeight() {return weight;}

	int currentV() {return from;}

	int oppositeV() {return to;}
};

template<class T, class U>
class graph
{
private:
    const int infinity = -1;

	// Adjacency Matrix
	edge<U>*** data; // 2D array of edge objects

	// Vertex List
	vertex<T>** vertices; // Array of vertex objects

	// Dijkstra's Results
    std::vector<int>** path;	// Shortest path to each vertex
	int* weights; 		// Smallest weight to each vertex

	// Graph Maintenance Variables
	int capacity;	// capacity of the graph
	int count;		// current number of vertices in the graph

public:
	// Constructor
	graph(int size = 35): data{new edge<U>**[size]}, vertices{new vertex<T>*[size]},
                          path{new std::vector<int>*[size]}, weights{new int[size]},
						  capacity{size}, count{0}
	{
		for(int i = 0; i < size; i++)
		{
			data[i] = new edge<U>*[size];
            path[i] = new std::vector<int>;
            weights[i] = infinity;

			for(int j = 0; j < size; j++)
				data[i][j] = nullptr;
		}
	}

	/******************************************************************************
	 * insertVertex
	 * 	Description: Insert vertex into the graph with the element passed
	 ******************************************************************************/
	vertex<T>* addVertex(T& name)
	{
		if (count < capacity)
		{
			data[count][count] = new edge<U>(count, count);
			vertices[count] = new vertex<T>(name, count);

			return vertices[count++];
		}

		return nullptr;
	}

	/******************************************************************************
	 * insertEdge
	 * 	Description: Insert edge from vertex W to vertex V with the distance passed
	 ******************************************************************************/
	edge<U>* addEdge(T& start, T& end, U& weight)
	{
		if (count<capacity && weight > U())	// if the graph is not full
		{
			int indexOfStart;
			int indexOfEnd;

			// locate vertices associated with start and end
			for (int i=0;i<count;i++)
				if (vertices[i]->info() == start)
					indexOfStart = i;
				else if (vertices[i]->info() == end)
					indexOfEnd = i;

			// insert edges
			data[indexOfStart][indexOfEnd] = new edge<U>(indexOfStart, indexOfEnd, weight);

			// comment out for directional
			data[indexOfEnd][indexOfStart] =  new edge<U>(indexOfEnd, indexOfStart, weight);

			return data[indexOfStart][indexOfEnd];
		}

		return nullptr;
	}

	/******************************************************************************
	 * dijkstras
	 * 	Description: Determines shortest path to each vertex from the start vertex
	 * 				 and corresponding distance using Dijkstra's algorithm
	 ******************************************************************************/
	void dijkstras(int start)
	{
		// Variable Declarations
        std::queue<vertex<T>> spanning;			// stores visited nodes
        std::priority_queue<edge<U>> sort;		// priority queue to sort edges

		// PROCESSING - initialize spanning tree variable, weight list, and path list
		weights[start] = 0;
		spanning.push(*vertices[start]);
		path[start]->push_back(start);

		while(!spanning.empty())	// for all unvisited edges (similar to DFS)
		{
			// PROCESSING - sort edges by weight
			for(int i = 0; i < count; i++)
			{
				edge<U>* temp = data[spanning.front().vertexID()][i];
				if(temp != nullptr)
					sort.push(*temp);
			}

			while(!sort.empty())	// for all edges of the current vertex
			{
				// PROCESSING - determine new shortest route to the opposite vertex of
				// 				the current edge and new shortest path
				edge<U> shortestEdge(sort.top()); // workaround since sort.top() returns const
				int weight = shortestEdge.getWeight() + weights[shortestEdge.currentV()];
				int to = shortestEdge.oppositeV();

				// if the new overall weight (to the shortest edge) is shortest
                if(weights[to] == infinity || weight < weights[to])
				{
					// add new weight (replacing old weight)
					weights[to] = weight;

					// add new path (replacing old path)
					delete path[shortestEdge.oppositeV()];
                    path[to] = new std::vector<int>(*path[shortestEdge.currentV()]);
					path[to]->push_back(to);

					// add opposite vertex that still needs to be visited
					spanning.push(*vertices[shortestEdge.oppositeV()]);
				}
				// remove edge
				sort.pop();
			}
			// remove vertex
			spanning.pop();
		}
	}

	/******************************************************************************
	 * kruskals
	 * 	Description: Determines the Minimum Spanning Tree for this graph using
	 * 				 Kruskal's algorithm
	 ******************************************************************************/
    std::vector<edge<U>>& kruskals()
	{
		// Variable Declarations
        std::priority_queue<edge<U>> edges;	// Priority queue to sort all edges
        std::vector<edge<U>>* mst = new std::vector<edge<U>>;	// Final MST
        std::vector<int>* clusters[count];	// Clusters for all vertices

		// PROCESSING - create cluster for all vertices
		for(int i = 0; i < count; i++)
		{
            clusters[i] = new std::vector<int>;
			clusters[i]->push_back(i);
		}

		// PROCESSING - insert all edges into priority queue
		for(int i = 0; i < count; i++)
			for(int j = 0; j < count; j++)
				if(data[i][j] != nullptr && data[i][j]->getWeight() > U())
					edges.push(*data[i][j]);

		// PROCESSING - add edges to MST if they do not cause a cycle
		while(!edges.empty() && mst->size() < count - 1)
		{
			// take smallest edge
			edge<U>* shortestEdge = new edge<U>(edges.top());
			edges.pop();

			// determine end vertices u and v
			int u = shortestEdge->currentV();
			int v = shortestEdge->oppositeV();

			// if clusters are not equal
			if(clusters[u] != clusters[v])	// compare pointers
			{
				// add edge to mst
				mst->push_back(*shortestEdge);

				// Merge Clusters (combine vectors into one -> clusters point to new cluster)
				// create cluster
                std::vector<int>* temp = new std::vector<int>(*clusters[u]);
				for(unsigned int i = 0; i < clusters[v]->size(); i++)
					temp->push_back(clusters[v]->at(i));

				// modify existing clusters to point to new cluster
				for(unsigned int i = 0; i < temp->size(); i++)
				{
					delete clusters[temp->at(i)];
					clusters[temp->at(i)] = temp;
				}
			}
		}

		// delete allocated data
		for(int i = 0; i < count; i++)
			delete clusters[i];

		return *mst;
	}

	/******************************************************************************
	 * shortestPathTo
	 * 	Description: Returns shortest path to the vertex specified.
	 * 	Notes: dijkstras() must be called first to determine paths
	 ******************************************************************************/
    std::vector<vertex<T>>& shortestPathTo(/*vertex<T>& _vertex*/ int i)
	{
        std::vector<vertex<T>> temp = new std::vector<vertex<T>>;
		int id = i; // _vertex.vertexID();

		for(int i = 0; i < path[id]->size(); i++)
            temp->push_back(*vertices[path[id]->at(i)]/*->info()*/);

        return *temp;
	}

	/******************************************************************************
	 * weightTo
	 * 	Description: Returns total weight of the shortest path to the vertex
	 * 				 specified.
	 * 	Notes: dijkstras() must be called first to determine paths
	 ******************************************************************************/
	int weightTo(/*vertex<T>& _vertex*/ int i)
	{
		return weights[/*_vertex.vertexID()*/ i];
	}

	/******************************************************************************
	 * print_dijkstras_results()
	 * 	Description: Prints all paths and corresponding weights
	 * 	Notes: dijkstras() must be called first to determine paths
	 ******************************************************************************/
	void print_dijkstras_results()
	{
		int start = path[0]->at(0);
		for(int i = 0; i < count; i++)
		{
            qDebug() << "Shortest path from " << vertices[start]->info() << " to "
                 << vertices[i]->info() << ":";
			for(unsigned int j = 0; j < path[i]->size(); j++)
			{
                qDebug() << vertices[path[i]->at(j)]->info() << " -> ";
                //if(j < path[i]->size() - 1)
                //	qDebug() << " -> ";
			}
            qDebug() << endl;
            qDebug() << "Distance: " << weights[i] << "\n" << endl;
		}
	}

	/******************************************************************************
	 * print_MST_results
	 * 	Description: Determines MST (see kruskals()) and outputs the resulting
	 * 				 edges and total weight
	 ******************************************************************************/
	void print_MST_results()
	{
		// determine MST
        std::vector<edge<U>> mst = kruskals();

		U total = U();

		for(unsigned int i = 0; i < mst.size(); i++)
		{
            //cout << setw(13) << right << vertices[mst[i].currentV()]->info()
            //	 << " -> " << vertices[mst[i].oppositeV()]->info() << endl;
			total += mst[i].getWeight();
		}
        //cout << "\nTotal Distance: " << total << endl;
	}

    /******************************************************************************
     * getMSTTotal
     * 	Description: Returns total weight associated with the MST
     ******************************************************************************/
    U getMSTTotal()
    {
        std::vector<edge<U>> mst = kruskals();
        U total = U();

        for(unsigned int i = 0; i < mst.size(); i++)
            total += mst[i].getWeight();

        return total;
    }

	/******************************************************************************
	 * clearDijkstras()
	 * 	Description: clears the results of Dijkstras algorithm
	 ******************************************************************************/
	void clearDijkstras()
	{
		for(int i = 0; i < count; i++)
		{
			vertices[i]->setVisited(false);
            weights[i] = infinity;
			delete path[i];
            path[i] = new std::vector<int>;
		}
	}
	
	/******************************************************************************
	 * BFS
	 * 	Description: Perform breadth first search starting at the vertex passed. The
	 * 				 results of the search will be stored in the vector results
	 ******************************************************************************/
    std::vector<vertex<T>>& BFS(int& total, int start = 0)
	{
        std::queue<edge<U>> bfsQueue;
        std::vector<int> order;
        std::vector<vertex<T>>* result = new std::vector<vertex<T>>;
	
		// Variable Declarations
        int current;                            // current vertex
        int from;                               // previous vertex
        std::priority_queue<edge<U>> inPlaceSort;	// priority queue to sort edges

        /*if(start < 0 || start >= count) { 	// out of scope
			cout << "invalid start!!" << endl;
            return nullptr;
        }*/

		// Set up start
        total = 0;
		current = start;
        bfsQueue.push(*data[current][current]);
        order.push_back(current);
        vertices[current]->setVisited(true);

		// PROCESSING - While there are still nodes to be visited
		while(!bfsQueue.empty())
		{
			// deal with previous node
            current = bfsQueue.front().oppositeV();
            from = bfsQueue.front().currentV();
			bfsQueue.pop();

			// sort edges of current by weight
			for(int i = 0; i < count; i++)
                if(data[current][i] != nullptr && data[current][i]->getWeight() != U())
                    inPlaceSort.push(*data[current][i]);

			// PROCESSING - While there are still edges to be visited
			while(!inPlaceSort.empty())
			{
                edge<U> lowEdge(inPlaceSort.top());
                int lowest = lowEdge.oppositeV();	// index of closest vertex
                if(vertices[lowest]->isVisited()) { 	// if cross edge
                    /*if(from != lowest)
						cout << setw(14) << left << "Cross edge" << ": " << setw(13) << right << vertices[current]->name <<
                            " -> " << vertices[lowest]->name << endl;*/
				}
				else { 								// if discovery edge
					// add new visitable vertex to the queue
                    /*cout << setw(14) << left << "Discovery edge" << ": " << setw(13) << right << vertices[current]->name <<
                            " -> " << vertices[lowest]->name << endl;*/
                    order.push_back(lowest);
                    total += lowEdge.getWeight();
                    bfsQueue.push(*data[current][lowest]);
                    vertices[lowest]->setVisited(true);
				}
				inPlaceSort.pop();
			}
		}

        for(unsigned int i = 0; i < order.size(); i++)
            result->push_back(*vertices[order[i]]/*->getInfo()*/);
		
		return *result;
	}

	// Destructor
	~graph()
	{
		for(int i = 0; i < capacity; i++)
		{
			for(int j = 0; j < capacity; j++)
				delete data[i][j];
			delete[] data[i];
			delete path[i];
		}
		delete[] data;
		delete[] path;
		delete[] weights;
	}
};

#endif /* GRAPH_H_ */
