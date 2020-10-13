--main = putStrLn "Hello world"

val :: Int
val = 25

mult2 :: Int -> Int
mult2 x = 2*x

summation :: Int -> Int -> Int
summation x y = x + y

fact :: Int -> Int
fact 0 = 1
fact x = x * fact(x-1)

fibonacci :: Int -> Int
fibonacci 1 = 1
fibonacci 2 = 1
fibonacci x = fibonacci(x-1) + fibonacci(x-2)


main = do
    print $ val
    print $ mult2 (x)
    print $ summation x y
    print $ fact x
    print $ fibonacci z
    where (x,y,z) = (3,4,7)