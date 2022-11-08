""" Each car can carry at most four passengers. What minimum number of cars
will the children need if all members of each group should ride in the same
taxi (but one taxi can take more than one group)? """


from collections import Counter
from math import ceil


def min_taxis(groups):
    members = Counter(groups)
    taxis = members.get(4, 0)
    if members.get(2):
        taxis += members[2]//2
        members[2] %= 2
    while members.get(3) and members.get(1):
        taxis += 1
        members[3] -= 1
        members[1] -= 1
    taxis += members.get(3, 0)
    if members.get(2):
        taxis += 1
        members[2] = 0
        if members.get(1):
            if members[1] > 1:
                members[1] -= 2
            else:
                members[1] = 0
    if members.get(1):
        taxis += ceil(members[1]/4)
    return taxis
    

if __name__ == "__main__":
    input()     # Discard first input
    groups = [int(n) for n in input().split()]
    print(min_taxis(groups))