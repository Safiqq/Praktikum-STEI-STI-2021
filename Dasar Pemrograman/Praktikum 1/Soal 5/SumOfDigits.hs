module SumOfDigits where
    -- SumOfDigits - sumOfDigits(n) 
    -- Definisi dan Spesifikasi 
    sumOfDigits :: Int -> Int
        -- sumOfDigits(n) menghitung hasil penjumlahan dari setiap bilangan tunggal
        -- yang terdapat di dalam sebuah bilangan integer positif atau 0
    -- Realisasi
    sumOfDigits n
        | n == 0 = 0
        | otherwise = n `mod` 10 + sumOfDigits (n `div` 10)
    -- Contoh aplikasi
        -- sumOfDigits 123
        -- 6
        -- sumOfDigits 234
        -- 9
        -- sumOfDigits 1234
        -- 10