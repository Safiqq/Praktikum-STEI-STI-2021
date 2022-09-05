module KonversiSuhu where
    -- KonversiSuhu - konversiSuhu(t,k) 
    -- Definisi dan Spesifikasi 
    konversiSuhu :: Float -> Char -> Float 
        -- konversiSuhu(t,k) mengkonversi suhu dari satuan Celcius ke satuan
        -- suhu yang lain (Fahrenheit, Reamur, Kelvin)
    -- Realisasi
    konversiSuhu t k
        | k == 'R' = 4/5 * t
        | k == 'F' = (9/5 * t) + 32
        | otherwise = t + 273.15
    -- Contoh aplikasi
        -- konversiSuhu 25 'R'
        -- 20.0
        -- konversiSuhu 37 'F'
        -- 98.6
        -- konversiSuhu (-30) 'K'
        -- 243.15