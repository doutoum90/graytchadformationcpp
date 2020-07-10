# Langage C++ 3

## Les variables simples et les opérations

 ### les variables et ddd
|	|	| |
|---|--------|----|
| type		| taille en octet |Intervalle |
| unsigned char		        |1| [0, 2^8[=[0, 256[	|
|  char/ signed char	    |1| [-2^ 7, 2^7[=[-128, 128[	|
| bool 					    |1|		true(1) ou false(0)	|
| unsigned short		    |2| [0, 2^16[ = [0, 65 536[	|
| short	/ signed short	    |2| [-2^ 15, 2^15[=[-32 768, 32 768[	|
| unsigned int	ou unsigned	|4| 	[0, 2^32[ = [-4 294 967 296, 4 294 967 296[|
| int/ signed int	        |4| [-2^ 31, 2^31[=[-2 147 483 648, 2 147 483 648[	|
| unsigned long	            |8| [0, 2^64[=[0, 1, 844674407E19[	| 
| long/ signed	            |8|	[-2^ 63 , 2^63[= [-9, 223372037E18, 9, 223372037E18[| 
| float                     |4||
| double                    |8||
| long double               |8||

### les operations 

#### I- ({}, (), =)L’affectation

 

``` c++
bool monbooleen(true); 
int nombre{5}; 
char caractere = 'Z'; 

``` 

#### II- arithmétiques

 
1-(+) addition
2- (-)soustraction
3-(*) multiplication
4- (/) division
5-(%) modulo

``` c++
int nombre1{5}, nombre2{2};
int resultadd = nombre1 + nombre2;// 7
int resultsoust = nombre1 - nombre2; // 3
int resultmult = nombre1 * nombre2; // 10
int resultdiv = nombre1 / nombre2; // 2
int resultmodulo= nombre1 % nombre2; // 1
```

#### III- relationnel

1- (>) strictement supérieur 
2- (>=) supérieur ou égal  
3- (<) strictement inférieur 
4- (<=) inférieur ou égal
5- (==) égal  
6- (!=) différent

``` c++
int nombre1{5}, nombre2{2}; 
bool resultsup= nombre1 > nombre2; // vrai
bool resultsupeg = nombre1 >= nombre2; // vrai
bool resultinf = nombre1 < nombre2; // FAUX
bool resultinfeg = nombre1 <= nombre2; // FAUX
bool resultegal= nombre1 === nombre2; // FAUX
bool resultdiff= nombre1 !== nombre2; 

``` 

#### IV -Les opérateurs logiques booléens

1- (&&) et logique  
2- (||) ou logique 
3- (!) négation logique

``` c++
bool monbooleen1(true), monbooleen2(false); 
int resultEt = monbooleen1 && monbooleen2;// faux
int resultOu = monbooleen1 || monbooleen2; // vrai
int resultNon = !monbooleen1; // FAUX
```

#### V- Les opérateurs logiques bit à bit

1-& et
2- ^ ou exclusif
3-<< décalage à gauche
4- | ou inclusif
5- ~ complément à 1
6- >> décalage à droite

#### VI- Les opérateurs d’affectation composée

1- += 
2- -= 
3- *= 
4- /=
5- %= 
6- &= 
7- ^= 
8- |= 
9- <<= 
10- >>=

``` c++
double nombre1{5.0}, nombre2{2.0}; 
 nombre1 += nombre2; // 7
 nombre1 -= nombre2; // 5
 nombre1 *= nombre2; // 10
 nombre1 /= nombre2; // 2

``` 

#### VII - Les opérateurs d’incrémentation et de décrémentation

1- ++
2- --

``` c++
double nombre1{5}; 
 nombre1 ++; // 6
 ++nombre1; // 7
 nombre1 --; // 6
 --nombre1;// 5
```

#### VIII- L’opérateur virgule

``` c++
 int i, j{10}; 
i = (j++, j+100, 999+j);// i = 10+1 = 11/11+100/999+111 = 1000

``` 

#### IX- L’opérateur conditionnel ternaire

``` c++
bool monbooleen(true);
double nombre1 = monbooleen? 5: 4;// 5
monbooleen = false;
nombre1 = monbooleen? 5: 4;// 4
```
