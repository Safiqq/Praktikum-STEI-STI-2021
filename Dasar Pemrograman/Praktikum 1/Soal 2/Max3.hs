module Max3 where
    -- Max3 - max3(a,b,c) 
    -- Definisi dan Spesifikasi 
    max3 :: Int -> Int -> Int -> Int 
        -- max3(a,b,c) menuliskan nilai terbesar di antara ketiga input yang berupa integer
    -- Realisasi
    max3 a b c
        | (a > b) && (a > c) = a
        | (b > a) && (b > c) = b
        | (c > a) && (c > b) = c
        | otherwise = 0
    -- Contoh aplikasi
    -- max3 1 3 5
    -- 5
    -- max3 (-10) 0 (-5)
    -- 0
    -- max3 20 34 33
    -- 34