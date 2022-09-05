module ListIndex where
    -- ListIndex - listIndex(x) 
    -- Definisi dan Spesifikasi 
    listIndex :: [Int] -> (Int -> Char) -> [Char]
        -- listIndex(l,f) akan menghasilkan sebuah list of
        -- character yang melambangkan nilai-nilai indeks dari
        -- suatu list nilai integer
    -- Realisasi
    nilai :: Int -> Char
    nilai n
        | 0 <= n && n < 55 = 'E'
        | 55 <= n && n < 65 = 'D'
        | 65 <= n && n < 70 = 'C'
        | 70 <= n && n < 80 = 'B'
        | 80 <= n && n <= 100 = 'A'
    listIndex l f
        | null l = []
        | otherwise = f (head l) : listIndex (tail l) f