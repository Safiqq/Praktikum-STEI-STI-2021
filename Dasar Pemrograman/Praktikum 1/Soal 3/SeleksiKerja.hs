module SeleksiKerja where
    -- SeleksiKerja - seleksi (m,s,p) 
    -- Definisi dan Spesifikasi 
    seleksi :: Int -> Int -> Char -> Bool 
        -- seleksiKerja(x) mencari pekerjaan yang dapat dilamar oleh seseorang
        -- dengan pengalaman managerial (m), pengalaman software engineer (s),
        -- dan jenis pekerjaan (p)
    -- Realisasi
    seleksi m s p
        | p == 'C' = True
        | s >= 4 = if m >= 2 then True else p == 'B'
        | s < 4 && m >= 2 = p == 'D'
        | otherwise = False
    -- Contoh aplikasi
        -- seleksi 0 1 'A'
        -- False
        -- seleksi 0 0 'C'
        -- True
        -- seleksi 2 5 'B'
        -- True