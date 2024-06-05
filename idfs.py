def dls(graph, node, target, depth, visited=None):
    if visited is None:
        visited = set()
    
    if depth == 0 and node == target:
        return True
    if depth > 0:
        visited.add(node)
        for neighbor in graph.get(node, []):
            if neighbor not in visited:
                if dls(graph, neighbor, target, depth-1, visited):
                    return True
        visited.remove(node)
    return False

def iddfs(graph, start, target, max_depth):
    for depth in range(max_depth + 1):
        if dls(graph, start, target, depth):
            return True
    return False

# Example usage:
graph = {
    'A': ['B', 'C', 'D'],
    'B': ['E', 'F'],
    'C': ['G'],
    'D': ['H'],
    'E': [],
    'F': [],
    'G': [],
    'H': []
}
target = 'G'
max_depth = 3
print(f"\nIDDFS traversal to find vertex {target} starting from vertex A within depth {max_depth}:")
if iddfs(graph, 'A', target, max_depth):
    print(f"Found target {target} within depth {max_depth}")
else:
    print(f"Target {target} not found within depth {max_depth}")



----------
graph = {
    'A': ['B', 'C', 'D'],
    'B': ['A', 'E', 'F'],
    'C': ['A', 'G'],
    'D': ['A','H','J'],
    'E': ['B', 'K', 'L'],
    'F': ['B'],
    'G': ['C', 'M'],
    'H': ['D', 'N', 'O'],
    'J': ['D', 'P'],
    'K': ['E'],
    'L': ['E'],
    'M': ['G'],
    'N': ['H'],
    'O': ['H'],
    'P': ['J']
}




# here i am just call ids method by passing max level. then running a loop and call dls function.
def ids(graph, start, max_limit):
    for i in range(max_limit):
        dls(graph, start, i)






def dls(graph, start,  limit):
    visited = []
    stack = [(start, 0)]  


    while stack:
        current_node, current_depth = stack.pop()


        if current_depth <=  limit:
            if current_node not in visited:
                visited.append(current_node)
                neighbors = graph[current_node]


                for neighbor in neighbors:
                    stack.append((neighbor, current_depth + 1))
    print(visited)
   


print(ids(graph, 'A', 4))
