module SumKelipatanX where
    -- SumKelipatanX - sumKelipatanX(m,n,x)
    -- Definisi dan Spesifikasi 
    sumKelipatanX :: Int -> Int -> Int -> Int
        -- sumKelipatanX(m,n,x)
    -- Realisasi
    sumKelipatanX m n x
        | m == n = m
        | otherwise = 
            if m `mod` x == 0 then sumKelipatanX (m+1) n x + m 
            else sumKelipatanX (m+1) n x