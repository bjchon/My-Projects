#
# astar.py
#
# This file provides a function implementing A* search for a route finding
# problem. Various search utilities from "route.py" are used in this function,
# including the classes RouteProblem, Node, and Frontier. Also, this function
# uses heuristic function objects defined in the "heuristic.py" file.
#
# I used the pseudocode from our textbook and lecture slides
# I also used this website https://www.w3schools.com/python/ref_string_replace.asp
#
# Bryant Chon 10/28/2022
#


from route import Node
from route import Frontier
from route import RoadMap


def a_star_search(problem, h, repeat_check=False):
    """Perform A-Star search to solve the given route finding problem,
    returning a solution node in the search tree, corresponding to the goal
    location, if a solution is found. Only perform repeated state checking if
    the provided boolean argument is true."""

    node1 = Node(problem.start)
    frontier = Frontier(node1)
    roadmap = RoadMap(node1)
    reached = [node1]
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
                if repeat_check == False:
                    reached.append(x)
                    frontier.add(x)
                if repeat_check == True:
                    if x in reached:
                        if x in frontier and node2.path_cost < x.path_cost:
                            frontier.__init__(x, sort_by='f')
                            frontier.__delitem__(x)
                            reached.append(x)
                            frontier.add(x)
                    else:
                        frontier.add(x)
                        reached.append(x)
    return None
