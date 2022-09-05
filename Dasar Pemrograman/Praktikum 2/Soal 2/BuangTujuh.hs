module BuangTujuh where
    buangTujuh :: [Int] -> [Int] 
    buangTujuh l
        | null l = []
        | otherwise = if head l `mod` 7 /= 0 && head l `mod` 10 /= 7 && head l `div` 10 /= 7
                      then head l : buangTujuh (tail l)
                      else buangTujuh (tail l)