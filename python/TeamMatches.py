__author__ = 'rodozov'

from itertools import combinations

if __name__ == "__main__":
    numberOfTeams = 30 # or whatever
    print list(combinations(range(1, numberOfTeams + 1), 2))

