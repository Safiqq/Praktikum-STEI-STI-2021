module JamBangun where
    -- JamBangun - jamBangun(j,m,d) 
    -- Definisi dan Spesifikasi 
    jamBangun :: Int -> Int -> Int -> (Bool,Int,Int,Int)
        -- jamBangun(a,b,c,x) menghasilkan output tuple berupa bool (True untuk bangun melewati jam, False sebaliknya) dan
        -- selisih waktu antara waktu bangun dan waktu yang telah ditentukan
    -- Realisasi
    jamBangun j m d = 
        let total_detik_dosen = j * 60 * 60 + m * 60 + d
            total_detik_bangun = 7 * 60 * 60 + 45 * 60 + 0
        in
            if total_detik_dosen < total_detik_bangun then (True,abs(total_detik_dosen-total_detik_bangun) `div` 3600,abs(total_detik_dosen-total_detik_bangun) `div` 60 `mod` 60,abs(total_detik_dosen-total_detik_bangun) `mod` 60)
            else (False,abs(total_detik_dosen-total_detik_bangun) `div` 3600,abs(total_detik_dosen-total_detik_bangun) `div` 60 `mod` 60,abs(total_detik_dosen-total_detik_bangun) `mod` 60)
    -- Contoh aplikasi
        -- jamBangun 07 15 00
        -- (True,0,30,0)