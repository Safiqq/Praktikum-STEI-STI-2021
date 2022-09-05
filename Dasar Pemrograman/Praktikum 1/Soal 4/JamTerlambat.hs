module JamTerlambat where
    jamTerlambat :: Int -> Int -> Int -> (Int,Int,Int,Bool,Int)
    jamTerlambat j m d = 
        let total_detik_yukirin = j * 60 * 60 + m * 60 + d
            total_detik_acara = 8 * 60 * 60 + 30 * 60 + 0
        in
            if total_detik_yukirin < total_detik_acara then (abs(total_detik_yukirin-total_detik_acara) `div` 3600,abs(total_detik_yukirin-total_detik_acara) `div` 60 `mod` 60,abs(total_detik_yukirin-total_detik_acara) `mod` 60,False,0)
            else (abs(total_detik_yukirin-total_detik_acara) `div` 3600,abs(total_detik_yukirin-total_detik_acara) `div` 60 `mod` 60,abs(total_detik_yukirin-total_detik_acara) `mod` 60,True,abs(total_detik_yukirin-total_detik_acara) * 10)
    -- Contoh aplikasi
        -- jamTerlambat 7 55 0
        -- (0,35,0,False,0)
        -- jamTerlambat 8 45 20
        -- (0,15,20,True,9200)
        -- jamTerlambat 10 0 01
        -- (1,30,1,True,54010)