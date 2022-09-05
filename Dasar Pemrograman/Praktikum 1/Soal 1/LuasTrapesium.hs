module LuasTrapesium where
    -- LuasTrapesium - luasTrapesium(t,s1,s2) 
    -- Definisi dan Spesifikasi 
    luasTrapesium :: Float -> Float -> Float -> Float
        -- luasTrapesium(t,s1,s2) menghasilkan luas trapesium berdasarkan rumus: luas = ½ * t * (s1 + s2)
    -- Realisasi
    luasTrapesium t s1 s2 = (t * (s1+s2)) / 2
    -- Contoh aplikasi
    -- luasTrapesium 2 4 3
    -- 7.0