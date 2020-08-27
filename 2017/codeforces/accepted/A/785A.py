#!/usr/bin/python3


faces = {
        "Tetrahedron": 4,
        "Cube": 6,
        "Octahedron": 8,
        "Dodecahedron": 12,
        "Icosahedron": 20
        }

def main():
    cases = int(input())
    _sum = 0

    while(cases):
        _sum += faces[input()]
        cases -= 1

    print(_sum)


if __name__ == "__main__": main()
