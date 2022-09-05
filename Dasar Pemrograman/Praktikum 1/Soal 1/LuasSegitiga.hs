module LuasSegitiga where
    -- LuasSegitiga - luasSegitiga(t,s1,s2) 
    -- Definisi dan Spesifikasi 
    luasSegitiga :: Float -> Float -> Float
        -- luasSegitiga(a,t) menghasilkan luas segitiga berdasarkan rumus: luas = ½ * a * t
    -- Realisasi
    luasSegitiga a t = (a * t) / 2
    -- Contoh aplikasi
    -- luasSegitiga 3 4
    -- 6.0