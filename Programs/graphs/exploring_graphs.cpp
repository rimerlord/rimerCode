#include <bits/stdc++.h>
using namespace std;

//In accordance with coursera Algorithms on Graphs
class Graph
{
	unordered_map<char, vector<char>> G;
	unordered_map<char, int> Deg;
	vector<char> DiscoveredNodes;
public:
	bool AreConnected(char A, char B);
	bool IsReachable(char A, char B);
	bool HasNbr(char A, char B);
	bool NextUnvisitedNbr(const char* C);
};
/*
	checks if A and B are connected
*/
bool Graph::AreConnected(char A, char B)
{
	DiscoveredNodes.push_back(A);
	//check if they are neighbours
	if(Deg[A] < Deg[B])
		return IsReachable(A, B);
	
	return IsReachable(B, A);
}

/*
	checks if B is reachable from A
*/
bool IsReachable(char A, char B)
{
	if(A == B)
		return true;
	if(HasNbr(A, B))
			return true;
	auto Nbrs = G[A];
	for(const auto &N : Nbrs)
	{
		if(IsReachable(N, B));
			return true;
	}

	return false;
}

/*
	checks if B is a neighbour of A
*/
bool HasNbr(char A, char B)
{
	vector<char> V = G[A];
	auto it = find(v.begin(), v.end(), B);
	if(it != v.end())
		return true;
	return false;
}