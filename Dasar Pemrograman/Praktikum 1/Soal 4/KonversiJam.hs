module KonversiJam where
    -- KonversiJam - konversiJam(j,m,d) 
    -- Definisi dan Spesifikasi 
    konversiJam :: Int -> Int -> Int -> (Bool,Int,Int,Int)
        -- konversiJam(j,m,d)
    -- Realisasi
    konversiJam j m d = 
        let total_detik_john = j * 60 * 60 + m * 60 + d
            total_detik_kekasih = total_detik_john - (7 * 60 * 60)
        in
            if total_detik_kekasih < 0 then (True,total_detik_kekasih `div` 3600 `mod` 24,total_detik_kekasih `div` 60 `mod` 60,total_detik_kekasih `mod` 60)
            else (False,total_detik_kekasih `div` 3600,total_detik_kekasih `div` 60 `mod` 60,total_detik_kekasih `mod` 60)
    -- Contoh aplikasi
    -- konversiJam 06 00 00
    -- (True,23,0,0)