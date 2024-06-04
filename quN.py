def print_solution(board):
    for row in board:
        print(" ".join(str(x) for x in row))
    print()

def is_safe(board, row, col):
    # Check this row on the left side
    for i in range(col):
        if board[row][i] == 1:
            return False

    # Check upper diagonal on the left side
    i, j = row, col
    while i >= 0 and j >= 0:
        if board[i][j] == 1:
            return False
        i -= 1
        j -= 1

    # Check lower diagonal on the left side
    i, j = row, col
    while i < len(board) and j >= 0:
        if board[i][j] == 1:
            return False
        i += 1
        j -= 1

    return True

def solve_nq_util(board, col):
    if col >= len(board):
        print("All queens successfully placed:")
        print_solution(board)
        return True

    for i in range(len(board)):
        if is_safe(board, i, col):
            board[i][col] = 1
            print(f"Placed queen at ({i}, {col}):")
            print_solution(board)
            if solve_nq_util(board, col + 1):
                return True
            board[i][col] = 0
            print(f"Backtracked from ({i}, {col}):")
            print_solution(board)

    return False

def solve_nq(n):
    board = [[0 for _ in range(n)] for _ in range(n)]
    if not solve_nq_util(board, 0):
        print("Solution does not exist")
        return False

    print_solution(board)
    return True

solve_nq(8)