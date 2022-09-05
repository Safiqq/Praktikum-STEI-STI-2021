module OffsetList where
-- DEFINISI DAN SPESIFIKASI LIST
{- type List of Int: [ ] atau [e o List] atau [List o e]  
   Definisi type List of Int
   Basis: List of Int kosong adalah list of Int 
   Rekurens: 
   List tidak kosong dibuat dengan menambahkan sebuah elemen bertype Int di awal 
   sebuah list atau
   dibuat dengan menambahkan sebuah elemen bertype Int di akhir sebuah list -}

-- DEFINISI DAN SPESIFIKASI KONSTRUKTOR
    konso :: Int -> [Int] -> [Int]
{- konso e li menghasilkan sebuah list of integer dari e (sebuah integer) dan li 
   (list of integer), dengan e sebagai elemen pertama: e o li -> li' -}
-- REALISASI
    konso e li = [e] ++ li

    konsDot :: [Int] -> Int -> [Int]
{- konsDot li e menghasilkan sebuah list of integer dari li (list of integer) dan 
   e (sebuah integer), dengan e sebagai elemen terakhir: li o e -> li' -}
-- REALISASI
    konsDot li e = li ++ [e]

-- DEFINISI DAN SPESIFIKASI SELEKTOR
-- head :: [Int] -> Int
-- head l menghasilkan elemen pertama list l, l tidak kosong

-- tail :: [Int] -> [Int]
-- tail l menghasilkan list tanpa elemen pertama list l, l tidak kosong

-- last :: [Int] -> Int
-- last l menghasilkan elemen terakhir list l, l tidak kosong

-- init :: [Int] -> [Int]
-- init l menghasilkan list tanpa elemen terakhir list l, l tidak kosong

-- DEFINISI DAN SPESIFIKASI PREDIKAT
    isEmpty :: [Int] -> Bool
-- isEmpty l  true jika list of integer l kosong
-- REALISASI
    isEmpty l = null l

    isOneElmt :: [Int] -> Bool
-- isOneElmt l true jika list of integer l hanya mempunyai satu elemen
-- REALISASI
    isOneElmt l = (length l) == 1 

    plus2 :: Int -> Int 
    plus2 a = a + 2
    minus1 :: Int -> Int 
    minus1 a = a - 1
    offKond :: Int -> Int 
    offKond a
        | 0 <= a && a <= 40 = 10
        | a < 0 = 0
        | otherwise = 20
    -- Definisi dan Spesifikasi 
    offsetList :: [Int] -> (Int -> Int) -> [Int]
        -- offsetList(l,offset) menerima masukan sebuah list of integer yang
        -- melakukan “offset” atau perubahan nilai terhadap elemen list sesuai
        -- dengan aturan tertentu (yang ditentukan oleh sebuah fungsi offset) dan
        -- menghasilkan list baru dengan elemen hasil offset
    -- Realisasi
    offsetList l offset
        | null l = []
        | otherwise = offset (head l) : offsetList (tail l) offset