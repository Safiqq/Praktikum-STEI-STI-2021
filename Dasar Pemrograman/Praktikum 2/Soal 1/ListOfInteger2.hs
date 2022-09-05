module ListOfInteger where
    elmtKeN :: [Int] -> Int -> Int 
    elmtKeN l n
        | n == 1 = head l
        | otherwise = elmtKeN (tail l) (n-1)