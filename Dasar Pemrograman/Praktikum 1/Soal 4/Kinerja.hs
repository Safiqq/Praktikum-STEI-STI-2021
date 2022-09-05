module Kinerja where
    kinerja :: Int -> Int -> Int -> (Int,Int,Int,Int)
    kinerja j m d = 
        let total_detik_karyawan = j * 60 * 60 + m * 60 + d
            total_detik_selesai = 17 * 60 * 60 + 30 * 60 + 0
        in
            if total_detik_karyawan < total_detik_selesai then (abs(total_detik_karyawan-total_detik_selesai) `div` 3600,abs(total_detik_karyawan-total_detik_selesai) `div` 60 `mod` 60,abs(total_detik_karyawan-total_detik_selesai) `mod` 60,1)
            else 
                if total_detik_karyawan == total_detik_selesai then (abs(total_detik_karyawan-total_detik_selesai) `div` 3600,abs(total_detik_karyawan-total_detik_selesai) `div` 60 `mod` 60,abs(total_detik_karyawan-total_detik_selesai) `mod` 60,0)
                else (abs(total_detik_karyawan-total_detik_selesai) `div` 3600,abs(total_detik_karyawan-total_detik_selesai) `div` 60 `mod` 60,abs(total_detik_karyawan-total_detik_selesai) `mod` 60,-1)
    -- Contoh aplikasi
        -- kinerja 17 0 0
        -- (0,30,0,1)
        -- kinerja 17 30 0
        -- (0,0,0,0)
        -- kinerja 18 30 5
        -- (1,0,5,-1)