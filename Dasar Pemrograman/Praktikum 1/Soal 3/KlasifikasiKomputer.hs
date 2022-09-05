module KlasifikasiKomputer where
    -- KlasifikasiKomputer - klasifikasi(a,b,c) 
    -- Definisi dan Spesifikasi 
    klasifikasi :: Int -> Int -> Int -> Int 
        -- klasifikasi(c,g,h)
    -- Realisasi
    klasifikasi c g h
        | c < 2 || g < 2 || h < 2 = 1
        | c < 5 || g < 5 = 2
        | c <= 7 && g <= 7 && h <= 7 = 3
        | c <= 7 || g <= 7 || h <= 7 = 4
        | otherwise = 5
    -- Contoh aplikasi
    -- klasifikasi 8 9 4
    -- 4
    -- klasifikasi 4 10 2
    -- 2
    -- klasifikasi 6 10 1
    -- 1