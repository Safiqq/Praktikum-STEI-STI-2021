module LuasLayang where
    -- LuasLayang - layang(d1,d2) 
    -- Definisi dan Spesifikasi 
    layang :: Int -> Int -> Float
        -- luasLayang(d1,d2) menghasilkan luas layang-layang tersebut dengan rumus: 1/2 * d1 * d2
    -- Realisasi
    layang d1 d2 = fromIntegral (d1 * d2) / 2
    -- Contoh aplikasi
    -- layang 3 7
    -- 10.5