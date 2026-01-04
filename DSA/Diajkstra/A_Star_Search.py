# 'heapq' is a Python library that gives us a "priority queue".
# Think of it as a magical to-do list that always keeps the
# item with the lowest score at the top, ready to be grabbed.
import heapq

# This defines our "recipe" for the A* search. It needs a map (graph),
# a start point, a goal, and the gut-feeling estimates (heuristics).
def a_star_search(graph, start, goal, heuristics):

    # First, create a master list of every single location on the map
    # to make sure our score sheet is complete.
    all_nodes = set(graph.keys())
    
    for node in graph:
        all_nodes.update(graph[node].keys())
        

    # Create a score sheet for the 'g_score' (actual travel time from start).
    # At the beginning, we don't know how to get anywhere, so all scores are infinity.
    g_scores = {node: float('inf') for node in all_nodes}
    
    # The time to get to the start node from itself is zero.
    g_scores[start] = 0

    # This is our "visited" list, for places we've already fully explored.
    closed_set = set()

    # This is our main to-do list ('open_set'). It starts with only one item:
    # our starting node. Each item contains: (f-score, g-score, node_name, path).
    open_set = [(heuristics[start], 0, start, [start])]
    print(open_set)
    
    # This loop is the engine of the algorithm. It keeps running as long
    # as there are items on our to-do list.
    while open_set:
        # Grab the most promising item (lowest f-score) from the to-do list.
        f_score, g_score, current_node, path = heapq.heappop(open_set)

        # Check if we've arrived at the goal. If so, we're done!
        if current_node == goal:
            return path, g_score

        # If we've already found a better path to this node, skip this one.
        if g_score > g_scores[current_node]:
            continue

        # Add the current spot to our "visited" list so we don't come back.
        closed_set.add(current_node)

        # Now, look at all the neighbors of the current node.
        if current_node in graph:
            for neighbor, cost in graph[current_node].items():
                # If we've already visited this neighbor, ignore it.
                if neighbor in closed_set:
                    continue

                # Calculate the travel time to this neighbor through the current node.
                tentative_g_score = g_score + cost

                # Check if this new path is a shortcut.
                if tentative_g_score < g_scores[neighbor]:
                    # It IS a shortcut! Update our records.
                    g_scores[neighbor] = tentative_g_score
                    h_score = heuristics.get(neighbor, 0)
                    f_score = tentative_g_score + h_score
                    new_path = path + [neighbor]
                    # Add the neighbor to our to-do list with its new, better score.
                    heapq.heappush(open_set, (f_score, tentative_g_score, neighbor, new_path))

    # If the to-do list becomes empty and we never found the goal, no path exists.
    return None, None

# --- This is where the script starts running ---
if __name__ == "__main__":
    # The map of intersections and travel times.
    graph = {
        'S': {'B': 1, 'C': 4},
        'B': {'D': 3, 'C': 2},
        'C': {'E': 5},
        'D': {'F': 2, 'W': 4},
        'E': {'W': 3},
        'F': {'W': 1}
    }
    # The list of gut-feeling estimates for each node.
    heuristics = {
        'S': 6, 'B': 5, 'C': 8, 'D': 2,
        'E': 5, 'F': 1, 'W': 0
    }
    start_node = 'S'
    goal_node = 'W'
    
    # Call our recipe and store the results.
    path, cost = a_star_search(graph, start_node, goal_node, heuristics)
    
    # Print the final answer.
    print(f"Path: {path}, Cost: {cost}")