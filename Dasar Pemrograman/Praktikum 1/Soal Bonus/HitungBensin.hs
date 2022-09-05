module HitungBensin where
    hitungBensin :: Int -> Int -> Int 
    hitungBiaya :: Int -> Int 
    hitungBiaya a
        | a == 1 = 0
        | otherwise =
            if a `mod` 2 == 0 then 1 + hitungBiaya (a `div` 2)
            else 1 + hitungBiaya (3*a + 1)
    hitungBensin a b
        | a == b = hitungBiaya a
        | otherwise = hitungBiaya a + hitungBensin (a+1) b
    

        -- 1 -- 0
        -- 2 1 -- 1
        -- 3 10 5 16 8 4 2 1 -- 7
        -- 4 2 1 -- 2
        -- 5 16 8 4 2 1 -- 5
        -- 6 3 16 8 4 2 1 -- 6
        -- 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 -- 16
        -- 8 4 2 1 -- 3
        -- 9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 -- 19
        -- 10 5 16 8 4 2 1 -- 6