module NbKelipatanX where
    -- nbKelipatanX - nbKelipatanX(m,n,x)
    -- Definisi dan Spesifikasi 
    nbKelipatanX :: Int -> Int -> Int -> Int
        -- nbKelipatanX(m,n,x)
    -- Realisasi
    nbKelipatanX m n x
        | m == n = 0
        | otherwise = 
            if m `mod` x == 0 then 1 + nbKelipatanX (m+1) n x
            else nbKelipatanX (m+1) n x