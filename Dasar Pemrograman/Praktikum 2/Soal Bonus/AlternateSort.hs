module AlternateSort where
    findElmt :: [Int] -> Int -> Int
    findElmt l n            -- n = angka yg mau dicari
        | n == head l = 1
        | otherwise = 1 + findElmt (tail l) n
    delete :: [Int] -> Int -> [Int]
    delete l n
        | null l = []
        | n == 1 = tail l
        | otherwise = head l : delete (tail l) (n-1)
    sort :: [Int] -> [Int]
    sort l
        | null l = []
        | otherwise = minimum l : sort (delete l (findElmt l (minimum l)))
    -- list1 :: [Int] -> Int -> [Int]
    -- list1 l n
    --     | null l = []
    --     | n == 1 = [head l]
    --     | otherwise = head l : list1 (tail l) (n-1)
    -- list2 :: [Int] -> Int -> [Int]
    -- list2 l n
    --     | null l = []
    --     | n == 1 = [last l]
    --     | otherwise = last l : list2 (init l) (n-1)
    alternateSort :: [Int] -> [Int]
    alternateSort l
        | null l = []
        | otherwise =
            let li = sort l
            in
                if length li == 1 then li
                else head li : last li : alternateSort (delete (init li) 1)