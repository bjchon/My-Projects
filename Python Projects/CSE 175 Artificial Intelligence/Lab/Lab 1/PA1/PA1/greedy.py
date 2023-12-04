#
# greedy.py
#
# This file provides a function implementing greedy best-first search for
# a route finding problem. Various search utilities from "route.py" are
# used in this function, including the classes RouteProblem, Node, and
# Frontier. Also, this function uses heuristic function objects defined
# in the "heuristic.py" file.
#
# I used the pseudocode from our textbook and lecture slides
# I also used this website https://www.w3schools.com/python/ref_string_replace.asp
#
# Bryant Chon 10/28/2022


from route import Node
from route import Frontier
import string



def greedy_search(problem, h, repeat_check=False):
    """Perform greedy best-first search to solve the given route finding
    problem, returning a solution node in the search tree, corresponding
    to the goal location, if a solution is found. Only perform repeated
    state checking if the provided boolean argument is true."""
    heu = h
    nodestart = Node(problem.start)
    frontier = Frontier(nodestart)
    reached = []
    reached.append(nodestart)
    count = 0

    if problem.start == problem.goal:
        return nodestart
    else:
        while not frontier.is_empty():
            node2 = frontier.pop()
            if problem.is_goal(node2.loc):
                return node2
            node3 = node2.expand(problem)
            dist = []
            tarray = []
            i = 1

            for x in node3:
                if repeat_check == True:
                    if x not in reached or node2.path_cost < x.path_cost:
                        y = str(x)
                        y = y.replace("<Node ", "")
                        y = y.replace(">", "")
                        euc = heu.h_cost(y)
                        reached.append(x)

                        dist.append(y)
                        tarray.append(euc)
                        for w in range(len(dist)):
                            num = tarray[w]
                            for z in range(len(tarray)):
                                if num < tarray[z]:
                                    tarray[z], tarray[w] = tarray[w], tarray[z]
                                    dist[z], dist[w] = dist[w], dist[z]

                        if x == node3[-1]:
                            for j in range(len(dist)):
                                temp1 = dist[j]
                                for h in range(len(node3)):
                                    temp = node3[h]
                                    y = str(temp)
                                    y = y.replace("<Node ", "")
                                    y = y.replace(">", "")
                                    if y == dist[j]:
                                        frontier.add(node3[j])

                else:
                    frontier.add(x)
                    count += 1

    return None
