#
# dfs.py
#
# This file provides a function implementing depth-first search for a
# route-finding problem. Various search utilities from "route.py" are
# used in this function, including the classes RouteProblem, Node, and
# Frontier.
#
# I used the pseudocode from our textbook figure 3.9, Artificial Intelligence A Modern Approach
# Also used this website: https://favtutor.com/blogs/depth-first-search-python
#
# Bryant Chon - 10/7/2022
# 


from route import Node
from route import Frontier


def DFS(problem, repeat_check=False):
    """Perform depth-first search to solve the given route finding
    problem, returning a solution node in the search tree, corresponding
    to the goal location, if a solution is found. Only perform repeated
    state checking if the provided boolean argument is true."""

    # PLACE YOUR CODE HERE
    node1 = Node(problem.start)
    if (problem.start == problem.goal):
        return node1
    else:
        frontier = Frontier(node1, False)
        reached = []
        reached.append(node1)
        while not (frontier.is_empty()):
            node2 = frontier.pop()
            if (problem.is_goal(node2.loc)):
                return node2
            node3 = node2.expand(problem)
            for x in node3:
                if (repeat_check == True):
                    if x not in reached:
                        reached.append(x)
                        frontier.add(x)
                else:
                    frontier.add(x)
    return None
