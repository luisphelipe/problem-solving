#!/usr/bin/python3


def relevant(val):
    cpy = val
    divs = []
    div = 2

    while val > 1:
        if not val % div:
            val /= div
            divs.append(div)
        else:
            div += 1

    if len(set(divs)) > 1 or divs[0] == cpy:
        return True
    return False


def main():
    data = [x for x in range(20, 1, -1) if relevant(x)]
    mult = 1

    for val in data:
        if mult % val:
            mult *= val

    print(data, mult)


if __name__ == "__main__": main()
