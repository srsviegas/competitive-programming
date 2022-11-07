""" Petya loves football very much. One day, as he was watching a football
match, he was writing the players' current positions on a piece of paper.
To simplify the situation he depicted it as a string consisting of zeroes
and ones. A zero corresponds to players of one team; a one corresponds to
players of another team. If there are at least 7 players of some team
standing one after another, then the situation is considered dangerous. For
example, the situation 00100110111111101 is dangerous and 11110111011101 is
not. You are given the current situation. Determine whether it is dangerous
or not. """


def is_dangerous(string: str):
    if len(string) < 7:
        return False
    return (7*'1') in string or (7*'0') in string


if __name__ == "__main__":
    print("YES" if is_dangerous(input()) else "NO")