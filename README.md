# Affine-Cipher-Block-Chaining
<img src="https://github.com/apeplins/Affine-Cipher-Block-Chaining/blob/main/AES-CBC-256-smaller.png?raw=true" width="400" height="200">

## About
Encryption example for introduction to Cryptography and Data Security. This program will encrypt data using the Affine Cipher and cipher block chaining(CBC).
This is a symmetric-key cryptosystem example with the goal of hiding the meaning of a message.
x is called plaintext or cleartext, 
y is called ciphertext,
iv is called the initialization variable,
m is the modular arithmatic,
a,b is called the key.

The security of the Affine Cipher:
key space = (#values for a) × (#values for b) 
                  = 12 × 26 = 312 
The Affine Cipher
Let x, y, a, b ∈ Z26.
Encryption:  ek(x) = y ≡ a·x + b mod 26
Decryption:  dk(y) = x ≡ a−1 ·(y−b) mod 26
with the key: k = (a, b), 
which has the restriction: gcd(a, 26) = 1. 
a ∈ {1,3,5,7,9,11,15,17,19,21,23,25} (1.2) 

The function to calculate the inverse of a is: Powermod(a,  -1, mod_value) on www.WolfRamAlpha.com

All generated reports are printed to the STD OUT

## Build
You can build it with the following command:
g++ Source.cpp -o Affine-Cipher.exe

or using Visual Studio 2019
then run it with the following command:
./Affine-Cipher.exe 15 3 26 18 13 14 22 0

## Usage
Source.exe a b m data#1 data#2 data#3 data#4 iv

## Example
Source.exe 15 3 26 18 13 14 22 0

