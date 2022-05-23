def recursion(n):
    if n > 0:
        recursion(n-1)
        print(f'Woo {n}')


def main():
    n = 3
    recursion(n)


main()
