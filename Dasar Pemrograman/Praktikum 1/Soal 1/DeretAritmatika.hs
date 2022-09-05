module DeretAritmatika where
    -- DeretAritmatika - deretAritmatika(n,a,b) 
    -- Definisi dan Spesifikasi 
    deretAritmatika :: Int -> Int -> Int -> Float
        -- DeretAritmatika(n,a,b) menghasilkan jumlah n suku pertama dari barisan aritmatika tersebut
    -- Realisasi
    deretAritmatika n a b = fromIntegral (n * (2*a + (n-1)*b)) / 2
    -- Contoh aplikasi
    -- deretAritmatika 4 4 5
    -- 46.0