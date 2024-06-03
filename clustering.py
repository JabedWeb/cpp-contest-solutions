import random
import numpy as np

# Step 1: Generate 100 random points and 10 cluster points
num_points = 100
num_clusters = 10
points = [(random.randint(0, 99), random.randint(0, 99)) for _ in range(num_points)]
clusters = [(random.randint(0, 99), random.randint(0, 99)) for _ in range(num_clusters)]

# Save points and clusters to a file
with open('data.txt', 'w') as f:
    f.write("Points:\n")
    for point in points:
        f.write(f"{point}\n")
    f.write("Clusters:\n")
    for cluster in clusters:
        f.write(f"{cluster}\n")

# Step 2: Define Manhattan distance
def manhattan_distance(p1, p2):
    return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1])

# Step 3: Implement K-Means clustering using Manhattan distance
def kmeans(points, clusters, iterations=10):
    for _ in range(iterations):
        assignments = [[] for _ in clusters]
        for point in points:
            distances = [manhattan_distance(point, cluster) for cluster in clusters]
            min_distance_index = distances.index(min(distances))
            assignments[min_distance_index].append(point)
        
        for i, cluster in enumerate(clusters):
            if assignments[i]:
                clusters[i] = (
                    sum(p[0] for p in assignments[i]) // len(assignments[i]),
                    sum(p[1] for p in assignments[i]) // len(assignments[i])
                )
    
    return clusters, assignments

clusters, assignments = kmeans(points, clusters)

# Step 4: Create a 2D matrix and print it
matrix_size = 100
matrix = [[" " for _ in range(matrix_size)] for _ in range(matrix_size)]

for i, cluster in enumerate(clusters):
    cx, cy = cluster
    matrix[cy][cx] = str(i)

for point in points:
    px, py = point
    matrix[py][px] = "."

# Print the matrix
for row in matrix:
    print("".join(row))

# Save the matrix to a file
with open('matrix.txt', 'w') as f:
    for row in matrix:
        f.write("".join(row) + "\n")
