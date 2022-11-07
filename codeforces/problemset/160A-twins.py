""" So you decided to act like that: pick for yourself some subset of coins so
that the sum of values of your coins is strictly larger than the sum of values
of the remaining coins that your twin will have. However, you correctly thought
that if you take too many coins, the twin will suspect the deception. So, you've
decided to stick to the following strategy to avoid suspicions: you take the
minimum number of coins, whose sum of values is strictly more than the sum of
values of the remaining coins. On this basis, determine what minimum number of
coins you need to take to divide them in the described manner."""


def minimum_coins(coins):
    coins = sorted(int(c) for c in coins)
    for i in range(len(coins), 0, -1):
        if sum(coins[i:]) > sum(coins[:i]):
            return len(coins[i:])
    return len(coins)


if __name__ == "__main__":
    input()     # Discard first input
    print(minimum_coins(input().split()))