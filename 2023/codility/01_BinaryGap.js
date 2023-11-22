const { expect } = require("./_utils");

/**
 * video reference for how to convert decimal to binary (mathematically): https://www.khanacademy.org/math/algebra-home/alg-intro-to-algebra/algebra-alternate-number-bases/v/large-number-decimal-to-binary
 *
 */

/**
 * here is an alternative algorithm that uses remainder: https://www.cuemath.com/numbers/decimal-to-binary/
 */

const run_tests = () => {
  expect(javascriptSolution, 9).toEqual(2);
  expect(javascriptSolution, 529).toEqual(4);
  expect(javascriptSolution, 20).toEqual(1);
  expect(javascriptSolution, 15).toEqual(0);
  expect(javascriptSolution, 32).toEqual(0);
  expect(javascriptSolution, 1041).toEqual(5);

  expect(mathSolution, 9).toEqual(2);
  expect(mathSolution, 529).toEqual(4);
  expect(mathSolution, 20).toEqual(1);
  expect(mathSolution, 15).toEqual(0);
  expect(mathSolution, 32).toEqual(0);
  expect(mathSolution, 1041).toEqual(5);
};

// solution using javascript built-ins
const javascriptSolution = (N, debug = []) => {
  // 1. transform the number to binary
  const binary = N.toString(2);

  // 2.1 use a matching regex with lookbehing/lookahead
  const regex = /(?<=1)0*(?=1)/g;

  // 2.2 get all sequences that match
  const matches = [...binary.matchAll(regex)]
    .map((m) => m[0])
    .filter((m) => m.length);

  // 3. get it's longest sequence
  const biggestMatch = matches.reduce(
    (a, b) => (a.length > b.length ? a : b),
    ""
  );

  debug.push(`bin=${binary}, matches=[${matches.join(", ")}]`);

  // 4. return the longest sequence length
  return biggestMatch.length;
};

// solution using math
const mathSolution = (N, debug = []) => {
  let binary = "";
  let longest = 0;
  let started = false;
  let current = 0;

  // the first possible exponent is 32 (bit size of int), given the problem description
  // > "N is an integer within the range [1..2,147,483,647]."
  // POSSIBLE OPTIMIZATION: calculate the first exponent by calculating the base2 log of N
  for (let i = 32; i >= 0; i--) {
    const power_of_two = Math.pow(2, i);

    // binary digit = 1
    if (N >= power_of_two) {
      // we start counting after finding the first binary digit for N
      if (!started) {
        started = true;
      } else {
        // if we find another 1, the current sequence ends, and we can compare against the biggest sequence so far
        longest = Math.max(longest, current);
        current = 0;
      }

      // check the reference to understand how this algorithm works
      N -= power_of_two;
      binary += "1";

      // already start counting, and found binary digit = 0
    } else if (started) {
      current++;
      binary += "0";
    }
  }

  debug.push(`binary=${binary}`);

  return longest;
};

run_tests();

const solution = mathSolution;
