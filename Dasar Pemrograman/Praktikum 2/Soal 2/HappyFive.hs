module HappyFive where
    happyFive :: [Int] -> [Int] 
    happyFive l
        | null l = []
        | otherwise = if head l `mod` 5 == 0 || head l `mod` 10 == 5 || head l `div` 10 == 5
                      then head l : happyFive (tail l)
                      else happyFive (tail l)