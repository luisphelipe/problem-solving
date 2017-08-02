-- Solution in Haskell by Luis Phelipe
-- Not an optimal solution.

final :: Integer
final = sum [3, 6..999] + sum [5, 10..999] - sum [0, 15..999]

main :: IO ()
main = print final

