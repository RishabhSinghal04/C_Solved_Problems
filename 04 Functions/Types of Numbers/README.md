# **Types of Numbers**

- [**Types of Numbers**](#types-of-numbers)
  - [1. Abundant Number](#1-abundant-number)
  - [2. Almost Perfect Number](#2-almost-perfect-number)
  - [3. Amicable Numbers](#3-amicable-numbers)
  - [4. Armstrong Number](#4-armstrong-number)
  - [5. Automorphic Number](#5-automorphic-number)
  - [6. Binary Numbers](#6-binary-numbers)
  - [7. Catalan Numbers](#7-catalan-numbers)
  - [8. Circular Prime](#8-circular-prime)
  - [9. Composite Numbers](#9-composite-numbers)
  - [10. Cullen Number](#10-cullen-number)
  - [11. Deficient Numbers](#11-deficient-numbers)
  - [12. Digital Root](#12-digital-root)
    - [<u>Digital Root Addition</u>](#udigital-root-additionu)
  - [13. Disarium Number](#13-disarium-number)
  - [14. Duck Number](#14-duck-number)
  - [15. Factorian](#15-factorian)
  - [16. Fermat Number](#16-fermat-number)
  - [17. Happy Number](#17-happy-number)
  - [18. Harshad Number](#18-harshad-number)
  - [19. Harshad Amicable Pair](#19-harshad-amicable-pair)
  - [20. Hyperfactorial](#20-hyperfactorial)
  - [21. Kaprekar Numbers](#21-kaprekar-numbers)
    - [<u>Kaprekar Numbers Cubic</u>](#ukaprekar-numbers-cubicu)
    - [<u>Kaprekar Numbers Quartic</u>](#ukaprekar-numbers-quarticu)
  - [22. Least Deficient Number](#22-least-deficient-number)
  - [23. Lucas Numbers](#23-lucas-numbers)
  - [24. Lychrel Number](#24-lychrel-number)
  - [25. Mersenne Numbers](#25-mersenne-numbers)
  - [26. Monodigit Numbers](#26-monodigit-numbers)
  - [27. Multiple Harshad Number](#27-multiple-harshad-number)
  - [28. Multiply Perfect Numbers](#28-multiply-perfect-numbers)
  - [29. Oblong or Pronic Number](#29-oblong-or-pronic-number)
  - [30. Palindromic Number](#30-palindromic-number)
  - [31. Perfect Number](#31-perfect-number)
  - [32. Prime Numbers](#32-prime-numbers)
  - [33. Product Perfect](#33-product-perfect)
  - [34. Relatively Prime](#34-relatively-prime)
  - [35. Repuint Number](#35-repuint-number)
  - [36. Smith Number](#36-smith-number)
  - [37. Square Free](#37-square-free)
  - [38. Strong Number](#38-strong-number)
  - [39. Sublime Number](#39-sublime-number)
  - [40. Superabundant Number](#40-superabundant-number)
  - [41. Surd Number](#41-surd-number)
  - [42. Tech Number](#42-tech-number)
  - [43. Tri-Automorphic Number](#43-tri-automorphic-number)
  - [44. Triangular Numbers](#44-triangular-numbers)
  - [45. Trimorphic Number](#45-trimorphic-number)
  - [46. Twin Prime Numbers](#46-twin-prime-numbers)

##  1. Abundant Number
An abundant is a number that is smaller than the sum of its aliquot parts (proper divisors).
Twelve is the smallest abundant number – the sum of its aliquot parts is 1 + 2 + 3 + 4 + 6 = 16 – followed by 18, 20, 24, and 30.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Abundant_Number.c)
<br><br>

## 2. Almost Perfect Number

An almost perfect number is typically applied to the powers of 2.
Since the sum of the aliquot parts is 2 * n - 1 or just 1 short of being a perfect number.
It follows that any power of 2 is a deficient number.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Almost_Perfect.c)
<br><br>

## 3. Amicable Numbers

Amicable numbers are pairs of numbers, also known as friendly numbers, each of whose aliquot parts add to give the other number.
(An aliquot part is any divisor that doesn't include the number itself).

The smallest amicable numbers are 220 and 284.
(Aliquot parts 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110, with a sum of 284)
(Aliquot parts 1, 2, 4, 71, and 142, with a sum of 220).
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Amicable_Numbers.c)
<br><br>

## 4. Armstrong Number

A narcissistic number, also known as an Armstrong number or a plus perfect number, is an n-digit number equal to the sum of its digits raised to the nth power.
For instance, 371 is narcissistic because 3<sup>3</sup> + 7<sup>3</sup> + 1<sup>3</sup> = 371, and 9474 is narcissistic because 9<sup>4</sup> + 4<sup>4</sup> + 7<sup>4</sup> + 4<sup>4</sup> = 9474.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Armstrong_Number.c)
<br><br>

## 5. Automorphic Number
An automorphic number, also known as an automorph, is a number 'n' whose square ends in 'n'.
For instance 5 is automorphic, because 5<sup>2</sup> = 25, which ends in 5.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Automorphic_Number.c)
<br><br>

## 6. Binary Numbers
Binary numbers are the numbers written in base 2.
Expressed by 0 and 1.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Binary_Number.c)
<br><br>

## 7. Catalan Numbers
The specific Catalan numbers are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796 and so on deriving from:-
C(n) = (2n)! / (n + 1)(n!)<sup>2</sup>.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Catalan_Number.c)
<br><br>

## 8. Circular Prime
A circular prime number is one that remains a prime number after repeatedly relocating the first digit of the number to the end of the number.
For example, 197, 971 and 719 are all prime numbers.
Similarly, 1193, 1931, 9311 and 3119 are all prime numbers.
Other numbers that satisfy the definition are 11, 13, 37, 79, 113, 199 and 337.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Circular_Prime.c)
<br><br>

## 9. Composite Numbers
The numbers that have more than two factors (which are not prime).
4, 6, 8, 9, 10, 100, 250 etc.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Composite_Number.c)
<br><br>

## 10. Cullen Number
A Cullen number is a number of the form (n × 2<sup>n</sup>) + 1.
Currently, the only known Cullen primes are those with n = 1, 141, 4713, 5795, 6611, 18496, 32292, 32469, 59656, 90825, 262419, 361275, and 481899.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Cullen_Number.c)
<br><br>

## 11. Deficient Numbers
Deficient numbers, dN, are numbers where the sum of its aliquot parts (proper divisors), sa(N), is less than the number itself sa(N) < N.
16 = 1 + 2 + 4 + 8 = 14 which is less than 16.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Deficient_Number.c)
<br><br>

## 12. Digital Root
The digital root of a number is the single digit that results from the continuous summation of the digits of the number and the numbers resulting from each summation.

For example, consider the number 7935.<br>
* The summation of its digits is 24.<br>
* The summation of 2 and  4 is 6, the digital root of 7935.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Digital_Root.c)
<br><br>

### <u>Digital Root Addition</u>
Digital roots are used to check addition and multiplication by means of a method called casting out nines.

For example, check the summation of 378 and 942.
~ The DR of 378 is 9, 3 + 7 + 8 = 18, 1 + 8 = 9.
~ The DR of 942 is 6, 9 + 4 + 2 = 15, 1 + 5 = 6.
~ Adding 9 and 6 produces 15, the DR of 15 is 6, 1 + 5 = 6.
~ The summation of 378 and 942 is 1320 and the DR of 1320 is 6.
~ With the two final DR's are equal, the addition is correct.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Digital_Root_Addition.c)
<br><br>

## 13. Disarium Number
A disarium number is a number in which the sum of the digits to the power of their respective position is equal to the number itself.
(Position is counted from left to rigth starting from 1).
135 : 1<sup>1</sup> + 3<sup>2</sup> + 5<sup>3</sup> = 135.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Disarium_Number.c)
<br><br>

## 14. Duck Number
A number that has atleast one digit 0 (zero) is called a Duck Number.
102, 1002, 20504, 40004 are few Duck Numbers.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Duck_number.c)
<br><br>

## 15. Factorian
A factorion is a natural number that equals of the sums of the factorials of its digits in a given base.
The only known decimal factorions are 1 = 1!, 2 = 2!, 145 = 1! + 4! + 5!, and 40585 = 4! + 0! + 5! + 8! + 5!.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Factorion.c)
<br><br>

## 16. Fermat Number
A Fermat number is a number defined by the formula Fn = 22<sup>n</sup> + 1 and named after Pierre Fermat who conjectured, wrongly, that all such numbers would be prime.
The first five Fermat numbers, F0 = 3, F1 = 5, F2 = 17, F3 = 257, and F4 = 65,537, are prime.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Fermat_Number.c)
<br><br>

## 17. Happy Number
On iterating the process of summing the squares of the decimal digits of a number and if this process terminates in 1, then the original number is called a happy number.
For example 7 → (7<sup>2</sup>) = 49 → (4<sup>2</sup> + 9<sup>2</sup>) = 97 → (9<sup>2</sup> + 7<sup>2</sup>) = 130 → (1<sup>2</sup> + 3<sup>2</sup> + 0<sup>2</sup>) = 10 → (1<sup>2</sup> + 0<sup>2</sup>) = 1.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Happy_Number.c)
<br><br>

## 18. Harshad Number
A Harshad number is a number that is divisible by the sum of its own digits.
For example, 1729 is a Harshad number because 1 + 7 + 2 + 9 = 19 and 1729 = 19 × 91.
Harshad numbers are also known as Niven numbers.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Harshad_Number.c)
<br><br>

## 19. Harshad Amicable Pair
A Harshad amicable pair is an amicable pair (m, n) such that both m and n are Harshad numbers. 
For example, 2620 and 2924 are a Harshad amicable pair because 2620 is divisible by 2 + 6 + 2 + 0 = 10 and 2924 is divisible by 2 + 9 + 2 + 4 = 17 (2924/17 = 172). 
There are 192 Harshad amicable pairs in first 5,000 amicable pairs.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Harshad_Amicable_Pair.c)
<br><br>

## 20. Hyperfactorial
A hyperfactorial is a number such as 108, which is equal to 3<sup>3</sup> × 2<sup>2</sup> × 1<sup>1</sup>.
In general, the n-th hyperfactorial H(n) is given by

H(n) = n<sup>n</sup> x (n-1)<sup>(n-1)</sup> ... 3<sup>3</sup> X 2<sup>2</sup> X 1<sup>1</sup>

The first eight hyperfactorials are 1, 4, 108, 27648, 86400000, 4031078400000, 3319766398771200000, and 55696437941726556979200000.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Hyperfactorial.c)
<br><br>

## 21. Kaprekar Numbers
Take a positive whole number n that has d number of digits.
Take the square n and separate the result into two pieces: a right-hand piece that has d digits and a left-hand piece that has either d or d-1 digits.
Add these two pieces together.
If the result is n, then n is a Kaprekar number.

Examples are 9 (9<sup>2</sup> = 81, 8 + 1 = 9), 45 (45<sup>2</sup> = 2025, 20 + 25 = 45), and 297 (297<sup>2</sup> = 88209, 88 + 209 = 297).
The first 20 Kaprekar numbers according to this definition are 1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4950, 5050, 7272, 7777, 9999, 17344, 22222, 77778, 82656, 95121, and 99999.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Kaprekar_Number.c)
<br><br>

### <u>Kaprekar Numbers Cubic</u>
Kaprekar numbers can also be defined by higher powers.
For example, 45<sup>3</sup> = 91125, and 9 + 11 + 25 = 45.
The first ten numbers with this property are: 1, 8, 10, 45, 297, 2322, 2728, 4445, 4544, and 4949.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Kaprekar_Number_Cubic.c)
<br><br>

### <u>Kaprekar Numbers Quartic</u>
For fourth powers, the sequence begins 1, 7, 45, 55, 67, (100), 433, 4950, 5050, 38212, 65068.
Notice that 45 is a Kaprekar number for second, third, and fourth powers (45<sup>4</sup> = 4100625, and 4 + 10 + 06 + 25 = 45). 
The only number in all three Kaprekar sequences, up to at least 400000.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Kaprekar_Number_Quartic.c)
<br><br>

## 22. Least Deficient Number
A least deficient number N has been defined as one where the sum of all of its factors/divisors is equal to one less than twice the number or s(N) = 2N - 1.
All the powers of 2 are least deficient numbers.
Example : 16 -> 1 + 2 + 4 + 8 + 16 = 31 which is one less than 2 X 16.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Least_Deficient_Number.c)
<br><br>

## 23. Lucas Numbers
The Lucas numbers, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123, 199,.......n, each succeeding term being the sum of the previous two terms as expressed by Ln = L(n-1) + L(n-2).
The initial terms are L1 = 1 and L2 = 3.
1 + 3 = 4 -> 3 + 4 = 7 -> 4 + 7 = 11 and so on.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Lucas_Number.c)
<br><br>

## 24. Lychrel Number
Lychrel number is a natural number that cannot form a palindrome through the iterative process of repeatedly reversing its digits and adding the resulting numbers.
Examples : 196 -> reverse of 196 is 691 and 196 + 691 = 887(not palindrome) and so on.
56 -> 56 + 65 = 121(palindrome).
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Lychrel_Number.c)
<br><br>

## 25. Mersenne Numbers
Mersenne numbers are numbers of the form Mn = (2<sup>n</sup> - 1) where 'n' is a natural number.
When n is a prime number, p, (2<sup>p</sup> - 1) often produces a prime number referred to as a Mersenne Prime.
n = 2, 3, 5, 7, 13, 17, 19, 31, ....
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Mersenne_Number.c)
<br><br>

## 26. Monodigit Numbers
Numbers consisting of a single repeating digit are often referred to as monodigits.
Examples are 22, 333333, 7777777777, 99999999999999999999 etc.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Monodigit_Number.c)
<br><br>

## 27. Multiple Harshad Number
A Multiple Harshad number is a Harshad number that, when divided by the sum of its digits, produces another Harshad number.
6804 -> 6 + 8 + 0 + 4 = 18 -> 6804 / 18 = 378<br>
    378 -> 3 + 7 + 8 = 18 -> 378 / 18 = 21<br>
       21 -> 2 + 1 = 3 -> 21 / 3 = 7.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Multiple_Harshad_Number.c)
<br><br>

## 28. Multiply Perfect Numbers
They are numbers where the sum, sa(N), of its aliquot parts (proper divisors) is a multiple of the number itself or sa(N) = kN.

For example, the prime factorization of 120 is 2<sup>3</sup> x 3<sup>1</sup> x 5<sup>1</sup> which leads to 120 having 16 factors/divisors, namely, 1, 2, 3, 4, 5, 6, 8, 10, 12, 15, 20, 24, 30, 40, 60, and 120, the sum of which is 360 or 3 times 120.

Another is 672, the prime factorization of which is 2<sup>5</sup> x (3<sup>1</sup>) x 7<sup>1</sup> which leads to 672 having 24 factors/divisors, namely 1, 2, 3, 4, 6, 7, 8, 12, 14, 16, 21, 24, 28, 32, 42, 48, 56, 84, 96, 168, 224, 336 and 672, the sum of which is 2016 or 3 times 672.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Multiply_Perfect_Number.c)
<br><br>

## 29. Oblong or Pronic Number
An oblong number is any number that is the product of two consecutive integers.
Oblong numbers are also known as pronic numbers.
The first few of them are: 0, 2, 6, 12, 20, and 30.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Oblong_OR_Pronic_Number.c)
<br><br>

## 30. Palindromic Number
A palindrome is a number that reads the same backwards as forwards, such as 121, 363, 3883, 37973, to mention a few.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Palindromic_Number.c)
<br><br>

## 31. Perfect Number
A perfect number is a whole number that is equal to the sum of all its factors except itself.
For example, 6 is a perfect number because its factors, 1, 2, and 3 add to give 6.
The next smallest is 28 (the sum of 1 + 2 + 4 + 7 + 14).
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Perfect_Number.c)
<br><br>

## 32. Prime Numbers
Numbers that have only two factors, 1 and the number itself.<br>
2 : 1, 2<br>
29 : 1, 29.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Prime_Number.c)
<br><br>

## 33. Product Perfect
We call a number a product perfect number if the product of all its divisors, other than itself, is equal to the number.
For example, 10 and 21 are product perfect numbers since 1 x 2 x 5 = 10 and 1 x 3 x 7 = 21, whereas 25 is not, since the product of its divisors, 1 x 5 = 5 is too small.
All the product perfect numbers between 2-60, which are: 6, 8, 10, 14, 15, 21, 22, 26, 27, 28, 33, 34, 35,38, 39, 44, 45, 46, 51, 52, 55, 57, 58.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Product_Perfect.c)
<br><br>

## 34. Relatively Prime
Relatively prime numbers are pairs of numbers that have no common factor other than one, or unity.
The numbers 2 and 7, 3 and 8, 11 and 27, etc., are all relatively prime.
Pairs of numbers satisfying this criteria are also referred to as co-prime numbers.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Relatively_Prime.c)
<br><br>

## 35. Repuint Number
A repunit number is one consisting of a continuous string of "n" ones in a specific base.
11,111 and 111,111,111,111 are simple examples.
Repunits in base 10 with n = 2, 19, 23, 317, and 1031 are prime numbers
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Repunit_Number.c)
<br><br>

## 36. Smith Number
A Smith number is a composite number, the sum of whose digits equals the sum of the digits of its prime factors.

4937775 = 3 × 5 × 5 × 65837
666 = 2 x 3 x 3 x 37, sum of digits of 666 is 18 and sum of prime factor digits is 18. Hence Smith Number.

Trivially, all prime numbers have this property, so they are excluded.
The Smith numbers less than 1000 are:-
4, 22, 27, 58, 85, 94, 121, 166, 202, 265, 274, 319, 346, 355, 378, 382, 391, 438, 454, 483, 517, 526, 535, 562, 576, 588, 627, 634, 636, 645, 648, 654, 663, 666, 690, 706, 728, 729, 762, 778, 825, 852, 861, 895, 913, 915, 922, 958, and 985
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Smith_Number.c)
<br><br>

## 37. Square Free
A positive integer 'n' is a square free integer if it is product of different primes.
42 -> 1, 2, 3, 6, 7, 21, 42 and none are perfect square except 1.
45 -> 1, 3, 5, 9, nine is a perfect square which divides 45. Hence 45 is not a square free number.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Square_Free.c)
<br><br>

## 38. Strong Number
A number is called a Strong Number if the sum of factorial of it's digits is equal to that number.
145 -> 1! + 4! + 5! = 1 + 24 + 120 = 145 which is a Strong Number.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Strong_Number.c)
<br><br>

## 39. Sublime Number
A sublime number is a number such that both the sum of its divisors and the number of its divisors are perfect numbers.
The smallest sublime number is 12. There are 6 divisors of 12 – 1, 2, 3, 4, 6, and 12 – the sum of which is 28. Both 6 and 28 are perfect.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Sublime_Number.c)
<br><br>

## 40. Superabundant Number
A number is a Superabundant Number if sigma(n)/n > sigma(m)/m for all m < n, where sigma is the sum of divisors of n.

N = 4 -> sum of divisors of 4 is 7 and 7/4 is 1.75
3 which is less than 4 has a sum of divisors 1.3333 < 1.75
Similarly for 2 -> sum of divisors is 1.5 < 1.75

Since 1, 2 and 3 are less than 4 and their sum of divisors is also less than 1.75 therefore 4 is a Superabundant Number.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Superabundant_Number.c)
<br><br>

## 41. Surd Number
A number is said to be Surd if its square root, cube root, etc are not integers. 
For example, 9 is not a Surd Number as square root of 9 is 3, but 5 is Surd as square root of 5 is not an integer. 
Similarly 8 is not a Surd Number as cube root of 8 is 2, but 7 is.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Surd_Number.c)
<br><br>

## 42. Tech Number
A number is called a Tech Number if the given number has an even number of digits and the number can be divided exactly into two parts from the middle.
After equally dividing the number, sum up the numbers and find the square of the sum.
If the number is equal to the square of the sum, the given number is a Tech Number.

N = 2025 -> 20 + 25 = 45 -> (45)<sup>2</sup> = 2025. Hence 2025 is a Tech Number.
N = 81 -> 8 + 1 = 9 -> 9<sup>2</sup> = 81 which is a tech number.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Tech_Number.c)
<br><br>

## 43. Tri-Automorphic Number
A number n is called tri-automorphic if 3n2 ends in n.
For example 667 is tri-automorphic because 3 × 667<sup>2</sup> = 1334667, ends in 667.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Tri-Automorphic_Number.c)
<br><br>

## 44. Triangular Numbers
1, 3, 6, 10, ... are triangular numbers.
10 -> 1 + 2 + 3 + 4 = 10.

The nth triangular number is n(n + 1)/2.
Every integer is the sum of at most three triangular numbers.
Every even triangular number is a perfect number.

If T is a triangular number, 8T + 1 is a perfect square and 9T + 1 is another triangular number.
Certain triangular numbers are also squares, but no triangular number can be a third, fourth or fifth power, nor can one end in 2, 4, 7, or 9.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Triangular_Number.c)
<br><br>

## 45. Trimorphic Number
A number 'n' is called trimorphic if n<sup>3</sup> ends in 'n'. For example 49<sup>3</sup>, = 117649, is trimorphic.
Not all trimorphic numbers are automorphic.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Trimorphic_Number.c)
<br><br>

## 46. Twin Prime Numbers
Two prime numbers differing by 2 are called twin primes.
Examples are 3 - 5, 5 - 7, 11 - 13, 17 - 19, 659 - 661, 2687 - 2689, and 1000000009649 - 1000000009651, etc.
<br>[view code](https://github.com/RishabhSinghal04/C_Solved_Problems/blob/master/04%20Functions/Types%20of%20Numbers/Twin_Prime_Numbers.c)
<br><br>