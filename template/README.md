# Competitive programming C template

## Example usage

1. Create new problem

```
$ ncp {problem-id}
```

2. While manipulating main.c with vim, save file as solution.c and brute.c

```
:w solution.c
```

3. Compile saved files

```
$ c solution
$ c brute
```

4. Compare output differences

```
$ compare <!-- This uses "solution" and "brute" binaries as default -->
```

5. Run tests from ./test.sh file (don't test directly from terminal)

```
$ tcp
```

6. Commit solved version

```
$ git commit -am "solved {problem-id}"
```

## Bash aliases and scripts

### `alias c="compile_c"`

Main compile script

```
function compile_c() {
  gcc $1.c -o ${2:-$1}
}
```

Usage:

```
$ c main; c main solution; c main brute;
```

### `alias ncp="new_competitive_solve"`

Create a new folder copy from C template

```
function new_competitive_solve() {
  cp -r ~/competitive/template ${1}
  cd ${1}
}
```

Usage:

```
$ ncp 444C
```

### `alias compare="compare_output"`

Compare output of 2 binaries, this returns nothing if there are no diffs (correct solution)

```
function compare_output() {
  diff -w <(./${1-solution} < ${3:-input}) <(./${2:-brute} < ${3:-input})
}
```

Usage:

```
$ compare <!-- This uses "solution" and "brute" binaries as default -->
$ compare solution2
$ compare solution2 brute input2
```

### `alias tcp="./test.sh"`

Write tests on test.sh

## TODO

=justpractice
