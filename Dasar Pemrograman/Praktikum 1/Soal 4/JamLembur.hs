module JamLembur where
    -- JamLembur - jamLembur(j,m,d) 
    -- Definisi dan Spesifikasi 
    jamLembur :: Int -> Int -> Int -> (Bool,Int,Int,Int) 
        -- jamLembur(j,m,d)
    -- Realisasi
    jamLembur j m d = 
        let total_detik_kerja = 16 * 60 * 60 + 30 * 60 + 0
            total_detik_pulang = j * 60 * 60 + m * 60 + d
        in
            if total_detik_kerja < total_detik_pulang then (True,abs(total_detik_kerja-total_detik_pulang) `div` 3600,abs(total_detik_kerja-total_detik_pulang) `div` 60 `mod` 60,abs(total_detik_kerja-total_detik_pulang) `mod` 60)
            else (False,abs(total_detik_kerja-total_detik_pulang) `div` 3600,abs(total_detik_kerja-total_detik_pulang) `div` 60 `mod` 60,abs(total_detik_kerja-total_detik_pulang) `mod` 60)
    -- Contoh aplikasi
    -- jamLembur 17 15 00
    -- (True,0,45,0)
    -- jamLembur 1 5 20
    -- (False,15,24,40)
    -- jamLembur 0 0 0
    -- (False,16,30,0)