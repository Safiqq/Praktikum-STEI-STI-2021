module HitungIndeks where
    hitungIndeks :: Float -> Float -> Float -> Int 
    hitungIndeks nilaiUTS nilaiUAS nilaiTubes
        | nilaiUTS == 0 || nilaiUAS == 0 || nilaiTubes == 0 = 0
        | nilaiUTS < 40 || nilaiUAS < 40 = 1
        | (40 <= nilaiUTS && nilaiUTS <= 75) && (40 <= nilaiUAS && nilaiUAS <= 75) && (40 <= nilaiTubes && nilaiTubes <= 75) = 2
        | nilaiTubes < 40 && nilaiUTS > 40  && nilaiUAS > 40 = 2
        | nilaiUTS >= 75 && nilaiUAS >= 75 && nilaiTubes >= 75 = 4
        | otherwise = 3