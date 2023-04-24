#
# ucost.py
#
# This file provides a function implementing uniform cost search for a
# route finding problem. Various search utilities from "route.py" are
# used in this function, including the classes RouteProblem, Node, and
# Frontier.
#
# I used the pseudocode from our textbook and lecture slides
# I also used this website https://www.w3schools.com/python/ref_string_replace.asp
#
# Bryant Chon 10/28/2022
#


from route import Node
from route import Frontier


def uniform_cost_search(problem, repeat_check=False):
    """Perform uniform cost search to solve the given route finding
    problem, returning a solution node in the search tree, corresponding
    to the goal location, if a solution is found. Only perform repeated
    state checking if the provided boolean argument is true."""

# Best First Search
    node1 = Node(problem.start)
    frontier = Frontier(node1)
    reached = []
    reached.append(node1)
    if problem.start == problem.goal:
        return node1
    else:
        while not frontier.is_empty():
            node2 = frontier.pop()
            if problem.is_goal(node2.loc):
                return node2
            node3 = node2.expand(problem)
            for x in node3:
                if repeat_check == True:
                    if x not in reached or node2.path_cost < x.path_cost:
                        reached.append(x)
                        frontier.add(x)
                else:
                    frontier.add(x)

    return None
