# Tipuri de date structurate
## Date
- Cifre
- Litere
- Șir de caractere
## Tip de date
### Mulțime de valori și o mulțime de operații care pot fi efectuate cu valorile respective

### În cazul în care se fac operații de copiere, mutare, etc, se fac nu doar la nivelul de caracter, dar și la nivel de cuvânt, propoziție, paragraf, ș.a.m.d

### Literele sunt reprezentate sub tip de date char iar cuvintele sunt structurate tipul de date string

### Tipurile de date simple pot fi structurate în tipuri de date structurate

### Deși aceste tabele reprezintă date structurate formate din int/float este prezent tipul de date tablou unidimensional/bidimensional
### În calculator aceste tabele se reprezintă cu un anum tip special de date structurate denumite tablouri.
#### Pentru tabloul unidimensional am folosit un singur indice, pentru bidimensional se folosesc doi indici, ș.a.m.d
#### Datele formate din agregarea a unor date simple se numesc date structurate
### Alte date structurate sunt: Tablou, String, Struct, Set, Fișier, Pointer

## Tablouri unidimensionale 
- Vectori/Arrays
## Rețineți
- Numărarea într-un tablou începe de la 0
- Un tablou este un șir de elemente int/float
- Tabloul poate conține elemente de același tip[]()

### Într-un tablou pot fi păstrate mai multe date cu același nume, și el poate fi parcurs de mai multe ori folosind instrucțiuni ciclice

### Pentru a citi tabloul, a atribui valori elementelor dintr-un tablou, a scrie elementel folosim elemente ciclice
### Tablourile lineare în C/C++. Tablourile reprezintă o succesiune indexată de date, de același tip, indexarea poate fi făcută cu un singur indice, în cazul dat tabloul se va numi vector, cu doi indici se va numi tablou bidimensional (matrice), cu trei indici, tabloul se numește tridimensional

### Dacă am declarat n <= 20, rezultă că trebuie să declarăm cu un element mai mult. 
### Citirea, scrierea, parcurgerea, are loc în felul următor

### Algoritm de parcurgere a tabloului. Fie ca avem un tablou int A[100] cu elementele A[0]...A[n-1]
### Pentru inversarea unui tablou unidimensional
' for(i = 0; i <= (n-1)/2; i++) {swap/mem(A[i],A[n-i-1])}' 

### Sortarea tablourilor
A[i] <= A[i+1], pentru orice i =0, n-2 Ordine crescătoare\
A[i] < A[i+1], pentru orice i =0, n-2 Ordine strict crescătoare\
A[i] >= A[i+1], pentru orice i =0, n-2 Ordine descătoare\
A[i] > A[i+1], pentru orice i =0, n-2 Ordine strict descătoare

### Algoritmi 
#### Pentru verificarea dacă ordinea este crescătoare
i = 0 
while(i = n-2 && A[i] >= A[i+1]) i++
if (i == n-1) 

### Sortare
#### Metode de sortare
- Selection
- Insertion
- The bubble method
- Quick Sort
- Merge Sort
- Heap Sort

#### Selectia
Selectia este o metoda de sortate care parcurge secventa de elemente nesortate, determina elementul minim/maxim si il aduce la inceputul secventei\
`for (i=0; i<= n-2; i++)` \
`   for(j=i+1; j<n-1; j++)` \
`       if(A[j]<A[i] swap(A[i], A[j]))`
##### Selectia V2
`
#include <iostream>
using namespace std;
int main()
{

int arr[100], i,n,k,minn,j;\
cin>>n;\
for(i=0; i <= n; i++)\
{\
cin>>arr[i];\
}\
for(i=0; i<= n-2; i++)\
{\
minn = arr[i];\
k = i;\
        for(j=i+1;j<=n-1; j++)\
                {\
                if(arr[j]<minn)\
                        {\
                                minn=arr[j], k=j;\
                        }\
                }\
if (k!=i)\
        {\
        swap(arr[i],arr[k]);\
        }\
}
for(i=0; i<=n; i++)
{
cout<<arr[i]; `
               
#### Insertia
Insertia opereaza cu elemente deja aranjate si un element din cele nearanjate, compara si gaseste pozitia si il insereza
    for ( i=1;  i<=n-1; i++) \
                                       {   x=A[i];   j=I -1;\
                                           while (j>=0  &&  x<A[j]) {  A\[j+1]= A[j];   j- - }\
                                          A[j+1]=x;\
                                      }


## Tablouri bidimeansionale 
Se declara ca arr[x][y] unde x este nr. de linii si y este nr. de coloane \
Datele sunt de acelasi tip, indexate pe linii si coloane 



# Informatia

## Cantitatea de informatie
Fie ca o sursa emite un mesaj
Cantitatea de informatie ce se contine intr-un mesaj se calcualeaza sub forma `i = loga(n)` unde `a` e o constanta (baza) si `n` este numarul de mesaje. `a` depinde de unitatea etalon aleasa pentru masurarea informatiei. Cantitatea de informatie care se contine intr-un mesaj cu doare 2 mesaje posible se numeste `bit`
 
kb = 2^10 b\
mb = 2^20 b\
gb = 2^30 b\

B = 8*b\
KB = 2^10 B\
MB = 2^20 B\
GB = 2^30 B\
TB = 2^40 B\
PB = 2^50 B\
EB = 2^60 B\

b = bit\
B = byte

Daca `n` = 1 avem 2 mesaje\
Daca `n` = 2 avem 4 mesaje\
nr. mesaj = 2 ^ n


## Imaginea
Rastru  
Discretizarea in spatiu - descompunerea img in microzone \
Cantitatea se calculeaza dupa formula `i = mx * my * log2(n)` (pentru monocrom) sau `i = 3 * mx * my * log2(n)` si ` n = nr. de nuante`

## Filmul
`V = f * I * T` (bits)\
Unde `f` e frecventa cadrelor pe sec. (25 FPS la TV/24 FPS la Cinema)\
`I` - cantitatea de info in bits.\
`T` - timpul in sec.

### Prob 1
`T` = 2,5h\
`f` = 25 FPS\
`I` = 3xy (x = 2048 y = 1024)\
`n` = 512\
`V` - ? 

### Prob 2 
`I` = 3 col (x = 2048, y = 4096)\
`f` = 25 FPS\
`n` = 512\
`T` = 2.5h



# Sisteme de numerare
## Pozitionale
### Sist. zecimal
`0,1,2,3,4,5,6,7,8,9,0`
### Sist. Binar
`0,1`
## Hexazecimal
`0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F`
(Resturile de la n%16)
## Nepozitinale
### Sist. roman
`I, V, X, L, C, M`

## Conversia numerelor
### Nr.zecimale
Pentru a converti un nr. zecimal in alte baze, convertim partea intreaga la baza data si dupa inmultim partea zecimala cu baza, notam numarul intreg, repetam pana cand numarul se apropie de 0.


### Prob 1
381.0625 = 10111101

## Conversia directa din baza 2 in baza 4 8 16 si invers
011/110/011/011/110.011/010/001/111
Base4 = 2313033.122033
Base8 = 36336.3217

# Reprezentarea numerelor cu virgula mobila
Sunt 2 modalitati de reprezentare a numerelor reale cu virg. mobila
1. Reprezentarea exponent-mantisa
2. Reprezentarea caracteristica-mantisa

Cu virgula mobila se reprezinta nr. mai mari ca 1 sau numerele foarte mici

Reprezentarea \
[SM][SE][Ex.2 (in baza 2)][Mantisa] \
Ex: 23 \
[0][0][0101][10111] \
Ex: -23 \ 
[1][0][0101][1011] Cod Direct \
[1][0][0101][0100] Cod Invers \
[1][0][0101][0101] Cod Complementar 


Ex. \ 
-321,6337890625 \
101000001,1010001001 \
0.1010000011010001001 \
[1][0][1001][1010000011010001001] C.D \
[1][0][1001][0101111100101110110] C.I \
[1][0][1001][0101111100101110111] C.C 

Ex. \
(4,9375) -> (100.1111) -> 0.100111 * 2^3

[][][][]

## Operatii cu virgula mobila
### Adunarea si scaderea
1. Se compara cei doi exponenti pentru a il determina pe cel mai mare
2. Se aliniaza mantisa numarului cu exponent mai mic prin deplasarea virgulei cu un numar de pozitii ce corespunde diferentei exponentilor
3. Se aduna (sau scad) mantisele alineate atribuind rezultatului exponentul comun
4. Eventual se normalizeaza mantis rezultatului cu modificarea exponentului

Ex. 
15+1.75 \
1111+1,11 \
1111 -> 0.1111 * 2^4 \
1.11 -> 0.111 * 2^1 

Ex. 
13 - 0.25
1101 - 0.01


### Inmultirea si impartirea
Inmultirea/impartirea consta in: 
1. Inmultirea/impartirea mantiselor
2. Adunarea/Scaderea exponentilor
3. Normalizarea numarului

## Reprezentarea zecimala codificata binar
Cel mai utilizat este codul zecimal codificat binar (Poate fi intalnit ca B.C.D [Binary Coded Decimal]) \
Cifrele de la 0 la 9 sunt reprezentate prin valori binare echivalente pe cate 4 pos. binare \
Reprezentarea numerelor zecimale se realizeaza in 8 grupe de cifre binare in 2 forme 
1. Impachetat (condensata) in care pe 8 pos. binare se pot reprezenta cate 2 cifre zecimale codificate binar
2. Forma despachetata in care pe 8 pos. binare se reprezinta 1 singura cifra codificata binar predcedata de 4 cifre binare numite marca (se noteaza cu M mare) 

Ex:   
9347 -> 9 = [1][0][0][1] 3 = [0][0][1][1] 4 = [0][1][0][0] 7 = [0][1][1][1] --> F.Impachet = [1001 0011][ 0100 0111] --> F = despachet [1001][0011][0100][0111]

 ## Adunarea in zecimal codificat binar
1. Exprimarea fiecarii cifre zecimale printr-o tetrada binara
2. Adunarea adunarii pozitie cu pozitie de la dreapta la stanga 
3. Daca rezultatul adunarii a 2 cifre se obtine un numar binar care nu reprezinta o cifra zecimala sau apare trasport, la rezultatul obtinut se adauga numarul 6 [0][1][1][0]

## Teza
1. Teorie (Tablouri, sist de enumeratie, operatori logici)
2. Calcule la cantitatea de info
3. Conversii numerice 
4. Operatii numerice
5. Reprezentare (nr. real) in virgula fixa/mobila CD,CI,CC
6. Elaborare in C++ algo. de transformare a numarului din baza in baza
7. Scaderea/adunarea in calc. 

# Algebra booleana

## Variabile si expresii logice
Algebra booleana sau algebra logica este un compartiment al matematicii (sau mai mult spus al logicii matematice) care se bazeaza pe legile gandirii - obiectul de studii al logicii clasice. \
Logica matematica studiaza: Valoarea de adevar a propozitiilor, care reprezinta un enunt despre care putem spune daca are o valoare `True` sau `False`. \
Algebra booleana poarta numele matematicianului englez George Boole, care in lucrarea sa "Legile gandirii", Publicata in 1853 a pus bazele acestei algebre.\
Ea a revenit in actualitate odata cu aparitia centralelor telefonice automate si a calculatoarelor numerice. \
Pe baza acestei teorii a fost creat calculatorul\

Algebra booleana contine:\
1. Constantele logice 0 si 1
2. Variabile logice care se noteaza cu litere mici (p,q,x1,x2,x3...xn, etc.) si pot primi valorile 0 sau 1
3. Vom utiliza operatori logici `not` `and` `or` `xor` `=>` `<=>` `and not` `or not`. 
4. Cu ajutorul constantelor, variabilelor, operatorilor logici, vom alcatui expresii logice, care pot avea valorile 0 sau 1.

A evalua o expresie logica, inseamna a gasi valoarea ei pentru orice combinatie de valori a variabilelor, din aceasta expresie.\
Expresia poate avea:\
1. O variabila - sunt posibile 2 valori `0` sau `1` adica `2^1`
2. Cu 2 variabile sunt posibile 4 valori adica `2^2` combinatii de valori `0,0` `0,1` `1,0` `1,1`
3. Cu trei variabile sunt posibile 8 combinatii adica `2^3` combinatii
4. Cu 4 variabile sunt posibile 16 combinatii `2^4` valori

Pentru a evalua o expresie logica alcatuim un tabel de adevar in care:\
1. Precautam toate combinatiile de valori ale variabilor
2. Efectuam intr-o ordine bine stabilita toate operatiile
3. Pentru fiecare combinatie de valori a variabilelor aflam valoarea expresiilor

Prioritatea operatorilor:\
1. `not`
2. `and`
3. `or`

Exemplu:\
Expresia E = p or not p or q

Operatori logici cu ajutoror carora vom alcatui expresii logice compuse din mai multi operanzi sunt:\
1. `not` 
2. `and`
3. `or`
4. =>
5. <=> 
6. `xor` 

Definitia operatorilor logici:\
1. Se numeste conjunctia propozitiilor p si q, asa o propozitie care se noteaza `p and q` sau se noteaza `p & q` sau `p ∧ q` sau `pq` care este `True` cand si p si q sunt adevarate, si falsa in celelalte cazuri.  
2. Se numeste disjunctia propozitiilor p si q, asa o propozitie care se noteaza `p or q` sau `p v q` care este adevarata cand cel una dintre cele 2 propozitii este adevarata si falsa in toate alte cazuri
3. P implica q, se noteaza ca `p => q` care are valoarea false daca p este `adevarata` si q `falsa` in toate alte cazuri ea este adevarata. `ATENTIE` p => q asta este echivalent cu `not p and q`
4. Echivalenta propozitiilor p si q, este o propozitie care se noteaza `p <=> q` care are valoarea `True` daca p si q au `aceleasi` valori si `False` in au valori `diferite`, este egal cu `(not p and q) and (not q and p)` 
5. P xor q este negarea echivalentei

## Postulate si teoreme
### Postulatele si teoremele de baza ale algebrei booleene
Doua expresii logice sunt egale daca valorile lor coincid pentru toate combinatiile posibile ale valorilor variabilelor din expresiile respective\
`Postulata Nr.1` Elementul de identitate in raport cu `and` este `1` si la `or` este `0`\
`x and 1 = x`\
`x or 1 = x`\
`Postulata Nr.2` Operatorii `and` si `or` respecta legea comutativitatii\
`Postulata Nr.3` Operatorii `and` si `or` respecta legea distributivitatii\
`Postulata Nr.4` Pentru negatie se respecta egalitatea `x and not x = 0` si `x or not x = 1`

`Teorema 1` ` x and x = x` si `x or x = x`\
`Teorema 2` `x and 0 = 0` si `x or 1 = 1`\
`Teorema 3` `not(not x) = x`\
`Teorema 4` `(x and y) and z = x and (y and z)` si `x or (y or z) = (x or y) or z`
`Teorema 5` `x and (x or y) = x` si ` x or (x and y) = 0`
`Teorema 6` `not(x and y) =  not x and not y` si `not(x or y) = not x or not y`

## Functii logice
Vom nota prin x1, x2, xn, un grup de variabile boolene unde n = 1,2,3...\
intrucat fiecare variabila booleana poate avea doar o valoare `0 sau 1`, numarul tuturor combinaliitlor posibile este egal cu `2^n`

### Definitii
1. Functia logica de n variabile se noteaza cu `y = f(x1,x2,x3,xn)` este o aplicatie care pune in corespondenta fiecare combinatie de valori ale varibilelor `x1,x2...xn` valoarea `0 sau 1` ale varibilei `y`
2. Variabile `x1,x2,xn` se numesc `variabile independente` sau `argumente`
3. Variabila `y` este `dependeta` sau `functie la agrumentele x1,x2`
4. Domeniul de definite `f(x1,x2,x3,xn)`
5. Tabelul de adevar al functiei logice este un tabel care include toate combinatiile posibile ale `argumentelor` si valorile corespunzatoare ale `variabilei dependente y`

## Forme canonice
### Disjunctiv normal perfecta
Min termen P(i) care corespunde cu echivalentul zecimal i, va include inversia variabilei, daca in combinatia in studiu argumentul respectiv are valoarea logica 0 si insusi variabila in caz contrar\
Ex. 0,0,0,0; Min term P(0), 