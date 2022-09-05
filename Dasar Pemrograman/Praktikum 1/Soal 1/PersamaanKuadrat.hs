module PersamaanKuadrat where
    -- PersamaanKuadrat - persamaanKuadrat(a,b,c,x) 
    -- Definisi dan Spesifikasi 
    persamaanKuadrat :: Int -> Int -> Int -> Int -> Int
        -- persamaanKuadrat(a,b,c,x) menghitung persamaan kuadrat yang dibentuk
        -- dari tiga buah input bilangan integer dan sebuah input integer x
    -- Realisasi
    persamaanKuadrat a b c x = a * x^2 + b * x + c
    -- Contoh aplikasi
        -- persamaanKuadrat 1 2 1 (-1)
        -- 0