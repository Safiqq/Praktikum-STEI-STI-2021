module LamaTidur where
    -- LamaTidur - lamaTidur(j,m,d) 
    -- Definisi dan Spesifikasi 
    lamaTidur :: Int -> Int -> Int -> (Bool,Int,Int,Int)
        -- lamaTidur(a,b,c,x) menghasilkan output tuple berupa bool (True untuk bangun melewati jam, False sebaliknya) dan
        -- selisih waktu antara waktu bangun dan waktu yang telah ditentukan
    -- Realisasi
    lamaTidur j m d = 
        let total_detik_tidur = j * 60 * 60 + m * 60 + d
            total_detik_acara = 5 * 60 * 60 + 0 * 60 + 0
        in
            if total_detik_tidur < total_detik_acara then (True,abs(total_detik_tidur-total_detik_acara) `div` 3600,abs(total_detik_tidur-total_detik_acara) `div` 60 `mod` 60,abs(total_detik_tidur-total_detik_acara) `mod` 60)
            else (False,abs(total_detik_tidur-total_detik_acara) `div` 3600,abs(total_detik_tidur-total_detik_acara) `div` 60 `mod` 60,abs(total_detik_tidur-total_detik_acara) `mod` 60)
    -- Contoh aplikasi
        -- lamaTidur 07 15 00
        -- (True,0,30,0)