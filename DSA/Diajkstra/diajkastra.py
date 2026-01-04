import heapq
INF = 1e5 + 10

def diajkastra_Algorithm(graph, distance, source_Node, goal_Node, heuristics):
    pq = []
    heapq.heappush(pq, (0, source_Node))

    while pq:
        
        
        
        min_node_val = heapq.heappop(pq)[1]
        if min_node_val == goal_Node: 
            return
        #print(min_node_val)


        for connected in graph[min_node_val]:

            wt = graph[min_node_val][connected]
                #print(wt)

            if (distance[min_node_val] + wt + heuristics[min_node_val]) < distance[connected]:
                distance[connected] = (distance[min_node_val] + wt)
                heapq.heappush(pq, (distance[connected], connected))
                






graph = {
        'S': {'B': 1, 'C': 4},
        'B': {'D': 3, 'C': 2},
        'C': {'E': 5},
        'D': {'F': 2, 'W': 4},
        'E': {'W': 3},
        'F': {'W': 1}
    }

distance = {
    'S': 0,
    'B': INF,
    'C': INF,
    'D': INF,
    'E': INF,
    'F': INF,
    'W': INF
}

heuristics = {
    'S': 6,
    'B': 5,
    'C': 8,
    'D': 2,
    'E': 5,
    'F': 1,
    'W': 0
}

source_Node = 'S'
goal_Node = 'W'

diajkastra_Algorithm(graph, distance, source_Node, goal_Node, heuristics)

print(distance)