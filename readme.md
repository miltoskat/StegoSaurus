<h2>Steganography Project</h2>

This is going to be a *steganography* program built on **C** later on if i make it I'm going to add a **Java GUI** for Android devices.




<h3>A Little bit of theory</h3>
C doesn't have a way to print binary numbers that's why i'm going to work on hex.
Each 8bit colour is portrayed by 2 hexadecimal digits, from which we only care about the latter because that one contains the **LSB** which we need in order to hide our file without being noticed.

In order to make a number **1** from **0** we only need to append the second hex number by 1

`Example: if our second hex is an e we just make it an f.`

In order to make a number **0** from **1** we only need to subtract 1 from the second hex number.

`Example: if our second hex is an f we just make it an e.`
In order to know what is the **LSB** of our hex we just have to use an integer division and see if the modulus of our division is 0. If the modulus is 0 then the number is an *even* and the **LSB** is a 0, else if the number is *odd* then the **LSB** is a 1.

| Bin  |Hex|
|------|---|
| 0000 | 0 |
| 0001 | 1 |
| 0010 | 2 |
| 0011 | 3 |
| 0100 | 4 |
| 0101 | 5 |
| 0110 | 6 |
| 0111 | 7 |
| 1000 | 8 |
| 1001 | 9 |
| 1010 | a |
| 1011 | b |
| 1100 | c |
| 1101 | d |
| 1110 | e |
| 1111 | f |
