from itertools import count


def counter(n):
    if n > 0:
        print(n)
        counter(n-1)


def main():
    n = int(input())
    counter(n)


main()
