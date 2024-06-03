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
