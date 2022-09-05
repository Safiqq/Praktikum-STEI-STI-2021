module ListOfCharacter where
-- DEFINISI DAN SPESIFIKASI LIST
{- type List of Char: [ ] atau [e o List] atau [List o e]
   Definisi type List of Char
   Basis: List of Char kosong adalah list of Char
   Rekurens: 
   List tidak kosong dibuat dengan menambahkan sebuah elemen bertype Char di awal 
   sebuah list atau
   dibuat dengan menambahkan sebuah elemen bertype Char di akhir sebuah list -}

-- DEFINISI DAN SPESIFIKASI KONSTRUKTOR
    konso :: Char -> [Char] -> [Char]
{- konso e lc menghasilkan sebuah list of character dari e (sebuah character)  
   dan lc (list of integer), dengan cc sebagai elemen pertama: e o lc -> lc' -}
-- REALISASI
    konso e lc = [e] ++ lc

    konsDot :: [Char] -> Char -> [Char]
{- konsDot(lc,cc) menghasilkan sebuah list of character dari lc (list of 
   character) dan e (sebuah character), dengan e sebagai elemen terakhir: 
   lc o e -> lc' -}
-- REALISASI
    konsDot lc e = lc ++ [e]

-- DEFINISI DAN SPESIFIKASI SELEKTOR
-- head :: [Char] -> Char
-- head l menghasilkan elemen pertama list l, l tidak kosong

-- tail :: [Char] -> [Char]
-- tail l menghasilkan list tanpa elemen pertama list l, l tidak kosong

-- last :: [Char] -> Char
-- last l  menghasilkan elemen terakhir list l, l tidak kosong

-- init :: [Char] -> [Char]
-- init(l) menghasilkan list tanpa elemen terakhir list l, l tidak kosong

-- DEFINISI DAN SPESIFIKASI PREDIKAT
    isEmpty :: [Char] -> Bool
-- isEmpty l true jika list of character l kosong
-- REALISASI
    isEmpty l = null l

    isOneElmt :: [Char] -> Bool
-- isOneElmt l true jika list of character l hanya mempunyai satu elemen
-- REALISASI
    isOneElmt l = (length l) == 1 

    findElmt :: [Char] -> Char -> Int 
    findElmt l x
        | isEmpty l = 0
        | otherwise = (if head l == x then 1 else 0) + findElmt (tail l) x

    delete :: [Char] -> Char -> [Char]
    delete l x
        | isEmpty l = []
        | otherwise = if head l == x then delete (tail l) x
                      else konso (head l) (delete (tail l) x)

    makeUnique :: [Char] -> [Char]
    makeUnique lc
        | isEmpty lc = []
        | otherwise = if findElmt lc (head lc) > 1 then konso (head lc) (makeUnique (delete lc (head lc)))
                      else konso (head lc) (makeUnique (tail lc))