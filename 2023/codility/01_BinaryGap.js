const { expect } = require("./_utils");

/**
 * video reference for how to convert decimal to binary (mathematically): https://www.khanacademy.org/math/algebra-home/alg-intro-to-algebra/algebra-alternate-number-bases/v/large-number-decimal-to-binary
 *
 */

const run_tests = () => {
  expect(easySolution, 9).toEqual(2);
  expect(easySolution, 529).toEqual(4);
  expect(easySolution, 20).toEqual(1);
  expect(easySolution, 15).toEqual(0);
  expect(easySolution, 32).toEqual(0);
  expect(easySolution, 1041).toEqual(5);

  expect(mediumSolution, 9).toEqual(2);
  expect(mediumSolution, 529).toEqual(4);
  expect(mediumSolution, 20).toEqual(1);
  expect(mediumSolution, 15).toEqual(0);
  expect(mediumSolution, 32).toEqual(0);
  expect(mediumSolution, 1041).toEqual(5);
};

// solution using javascript built-ins
const easySolution = (N, debug = []) => {
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
const mediumSolution = (N, debug = []) => {
  let binary = "";
  let longest = 0;
  let started = false;
  let current = 0;

  // > "N is an integer within the range [1..2,147,483,647]."
  // unsigned int => 4 byte => max 32 length string
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

const solution = mediumSolution;
