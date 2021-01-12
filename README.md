# ASCII Gradient Generator in a Bunch of Languages
https://www.reddit.com/r/dailyprogrammer/comments/3104wu/20150401_challenge_208_intermediate_ascii/

Look at the `ascii-gradient.c` file for more or less proper documentation.

## Python
```sh
$ cd ascii-gradient
$ cat samples/sample.txt | python python/ascii-gradient.py 
@ @ @ @ @ @ @ @ @ @ @ & & & & & X X X X X X X X X & & & & & @ @ @ @ @ @ @ @ @ @ 
@ @ @ @ @ @ @ @ @ @ & & & & X X X X X X X X X X X X X & & & & @ @ @ @ @ @ @ @ @ 
@ @ @ @ @ @ @ @ & & & & X X X X X X x x x x x X X X X X X & & & & @ @ @ @ @ @ @ 
@ @ @ @ @ @ @ & & & & X X X X x x x x x x x x x x x X X X X & & & & @ @ @ @ @ @ 
@ @ @ @ @ @ @ & & & X X X x x x x x x ; ; ; x x x x x x X X X & & & @ @ @ @ @ @ 
@ @ @ @ @ @ & & & X X X x x x x ; ; ; ; ; ; ; ; ; x x x x X X X & & & @ @ @ @ @ 
@ @ @ @ @ & & & X X X x x x ; ; ; ; ; ; ; ; ; ; ; ; ; x x x X X X & & & @ @ @ @ 
@ @ @ @ @ & & X X X x x x ; ; ; ; : : : : : : : ; ; ; ; x x x X X X & & @ @ @ @ 
@ @ @ @ & & & X X x x x ; ; ; : : : : : : : : : : : ; ; ; x x x X X & & & @ @ @ 
@ @ @ @ & & X X X x x ; ; ; : : : : , , , , , : : : : ; ; ; x x X X X & & @ @ @ 
@ @ @ & & & X X x x x ; ; : : : , , , , , , , , , : : : ; ; x x x X X & & & @ @ 
@ @ @ & & X X X x x ; ; ; : : , , , , . . . , , , , : : ; ; ; x x X X X & & @ @ 
@ @ @ & & X X X x x ; ; : : : , , . . . . . . . , , : : : ; ; x x X X X & & @ @ 
@ @ @ & & X X x x x ; ; : : , , , . . .   . . . , , , : : ; ; x x x X X & & @ @ 
@ @ @ & & X X x x ; ; ; : : , , . . .       . . . , , : : ; ; ; x x X X & & @ @ 
@ @ @ & & X X x x ; ; ; : : , , . .           . . , , : : ; ; ; x x X X & & @ @ 
@ @ @ & & X X x x ; ; ; : : , , . . .       . . . , , : : ; ; ; x x X X & & @ @ 
@ @ @ & & X X x x x ; ; : : , , , . . .   . . . , , , : : ; ; x x x X X & & @ @ 
@ @ @ & & X X X x x ; ; : : : , , . . . . . . . , , : : : ; ; x x X X X & & @ @ 
@ @ @ & & X X X x x ; ; ; : : , , , , . . . , , , , : : ; ; ; x x X X X & & @ @ 
@ @ @ & & & X X x x x ; ; : : : , , , , , , , , , : : : ; ; x x x X X & & & @ @ 
@ @ @ @ & & X X X x x ; ; ; : : : : , , , , , : : : : ; ; ; x x X X X & & @ @ @ 
@ @ @ @ & & & X X x x x ; ; ; : : : : : : : : : : : ; ; ; x x x X X & & & @ @ @ 
@ @ @ @ @ & & X X X x x x ; ; ; ; : : : : : : : ; ; ; ; x x x X X X & & @ @ @ @ 
@ @ @ @ @ & & & X X X x x x ; ; ; ; ; ; ; ; ; ; ; ; ; x x x X X X & & & @ @ @ @ 
@ @ @ @ @ @ & & & X X X x x x x ; ; ; ; ; ; ; ; ; x x x x X X X & & & @ @ @ @ @ 
@ @ @ @ @ @ @ & & & X X X x x x x x x ; ; ; x x x x x x X X X & & & @ @ @ @ @ @ 
@ @ @ @ @ @ @ & & & & X X X X x x x x x x x x x x x X X X X & & & & @ @ @ @ @ @ 
@ @ @ @ @ @ @ @ & & & & X X X X X X x x x x x X X X X X X & & & & @ @ @ @ @ @ @ 
@ @ @ @ @ @ @ @ @ @ & & & & X X X X X X X X X X X X X & & & & @ @ @ @ @ @ @ @ @ 
```

## C
```sh
$ cd ascii-gradient
$ gcc c/ascii-gradient.c 
$ cat samples/sample2.txt | ./a.out 
$$$$$$$$$$$+++++++++^^^^^^^^^^^"""""""""''''''''''          
$$$$$$$$$$++++++++++^^^^^^^^^^"""""""""'''''''''''          
$$$$$$$$$++++++++++^^^^^^^^^^""""""""""'''''''''            
$$$$$$$$+++++++++^^^^^^^^^^^"""""""""'''''''''''            
$$$$$$$+++++++++^^^^^^^^^^^"""""""""''''''''''              
$$$$$$+++++++++^^^^^^^^^^^"""""""""''''''''''               
$$$$$+++++++++^^^^^^^^^^^"""""""""''''''''''                
$$$$+++++++++^^^^^^^^^^^""""""""""'''''''''                 
$$$+++++++++^^^^^^^^^^^""""""""""''''''''''                 
$$+++++++++^^^^^^^^^^^""""""""""''''''''''                  
$++++++++++^^^^^^^^^^"""""""""'''''''''''                   
+++++++++^^^^^^^^^^^"""""""""'''''''''''                    
++++++++^^^^^^^^^^^""""""""""'''''''''                      
+++++++^^^^^^^^^^^"""""""""''''''''''                       
++++++^^^^^^^^^^^"""""""""''''''''''                        
+++++^^^^^^^^^^^"""""""""''''''''''                         
++++^^^^^^^^^^^""""""""""''''''''''                         
+++^^^^^^^^^^^""""""""""''''''''''                          
+++^^^^^^^^^^""""""""""''''''''''                           
++^^^^^^^^^^""""""""""''''''''''                            
^^^^^^^^^^^"""""""""'''''''''''                             
^^^^^^^^^^""""""""""'''''''''                               
^^^^^^^^^""""""""""'''''''''                                
^^^^^^^^""""""""""''''''''''                                
^^^^^^^""""""""""''''''''''                                 
^^^^^^"""""""""'''''''''''                                  
^^^^^"""""""""'''''''''''                                   
^^^^"""""""""'''''''''''                                    
^^^""""""""""'''''''''                                      
^^"""""""""''''''''''     
```

## Java
```sh
$ cd ascii-gradient/java
$ javac AsciiGradient.java
$ cat ../samples/sample3.txt | java AsciiGradient
ccccccccccdddddeeeeeeeeeeeeeeeffffgggggg
cccccccccccdddddeeeeeeeeeeeeeefffffggggg
ccccccccccccdddddeeeeeeeeeeeeeeffffggggg
cccccccccccccdddddeeeeeeeeeeeeeffffggggg
cccccccccccccdddddeeeeeeeeeeeeefffffgggg
ccccccccccccccdddddeeeeeeeeeeeeeffffgggg
cccccccccccccccddddeeeeeeeeeeeeeffffgggg
cccccccccccccccdddddeeeeeeeeeeeeeffffggg
bcccccccccccccccddddeeeeeeeeeeeeeffffggg
bbccccccccccccccdddddeeeeeeeeeeeeffffggg
bbbccccccccccccccddddeeeeeeeeeeeeffffggg
bbbbcccccccccccccddddeeeeeeeeeeeeeffffgg
bbbbcccccccccccccddddeeeeeeeeeeeeeffffgg
bbbbbcccccccccccccddddeeeeeeeeeeeeffffgg
abbbbcccccccccccccddddeeeeeeeeeeeeffffgg
abbbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
aabbbbccccccccccccddddeeeeeeeeeeeeffffgg
abbbbbccccccccccccddddeeeeeeeeeeeeffffgg
abbbbcccccccccccccddddeeeeeeeeeeeeffffgg
bbbbbcccccccccccccddddeeeeeeeeeeeeffffgg
bbbbcccccccccccccddddeeeeeeeeeeeeeffffgg
bbbbcccccccccccccddddeeeeeeeeeeeeeffffgg
bbbccccccccccccccddddeeeeeeeeeeeeffffggg
bbccccccccccccccdddddeeeeeeeeeeeeffffggg
bcccccccccccccccddddeeeeeeeeeeeeeffffggg
cccccccccccccccdddddeeeeeeeeeeeeeffffggg
cccccccccccccccddddeeeeeeeeeeeeeffffgggg
ccccccccccccccdddddeeeeeeeeeeeeeffffgggg
cccccccccccccdddddeeeeeeeeeeeeefffffgggg
cccccccccccccdddddeeeeeeeeeeeeeffffggggg
ccccccccccccdddddeeeeeeeeeeeeeeffffggggg
cccccccccccdddddeeeeeeeeeeeeeefffffggggg
```

## PHP
```sh
$ cd ascii-gradient
$ cat samples/sample4.txt | php php/ascii-gradient.php 
ooooooooooooooooooOOOOOOOOOOOOOOOOOOOOOOOOOOO888888888888888
oooooooooooooooooooooOOOOOOOOOOOOOOOOOOOOOOOOOO8888888888888
ooooooooooooooooooooooooOOOOOOOOOOOOOOOOOOOOOOOO888888888888
ooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOOOOOOO88888888888
ooooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOOOOOO8888888888
ooooooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOOOOO888888888
ooooooooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOOOOO8888888
ooooooooooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOOOO888888
oooooooooooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOOOO88888
oooooooooooooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOO88888
ooooooooooooooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOO8888
;;;;;;;;;;oooooooooooooooooooooooooooooOOOOOOOOOOOOOOOOOO888
;;;;;;;;;;;;;;oooooooooooooooooooooooooooOOOOOOOOOOOOOOOOO88
;;;;;;;;;;;;;;;;;;ooooooooooooooooooooooooOOOOOOOOOOOOOOOOO8
;;;;;;;;;;;;;;;;;;;;oooooooooooooooooooooooOOOOOOOOOOOOOOOOO
;;;;;;;;;;;;;;;;;;;;;;ooooooooooooooooooooooOOOOOOOOOOOOOOOO
;;;;;;;;;;;;;;;;;;;;;;;;oooooooooooooooooooooOOOOOOOOOOOOOOO
;;;;;;;;;;;;;;;;;;;;;;;;;;ooooooooooooooooooooOOOOOOOOOOOOOO
;;;;;;;;;;;;;;;;;;;;;;;;;;;;oooooooooooooooooooOOOOOOOOOOOOO
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;oooooooooooooooooooOOOOOOOOOOOO
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;oooooooooooooooooooOOOOOOOOOOO
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;oooooooooooooooooOOOOOOOOOOO
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;oooooooooooooooooOOOOOOOOOO
:::::::;;;;;;;;;;;;;;;;;;;;;;;;;;;oooooooooooooooooOOOOOOOOO
:::::::::::;;;;;;;;;;;;;;;;;;;;;;;;oooooooooooooooooOOOOOOOO
::::::::::::::;;;;;;;;;;;;;;;;;;;;;;ooooooooooooooooOOOOOOOO
::::::::::::::::;;;;;;;;;;;;;;;;;;;;;ooooooooooooooooOOOOOOO
::::::::::::::::::;;;;;;;;;;;;;;;;;;;;ooooooooooooooooOOOOOO
::::::::::::::::::::;;;;;;;;;;;;;;;;;;;oooooooooooooooOOOOOO
::::::::::::::::::::::;;;;;;;;;;;;;;;;;;oooooooooooooooOOOOO
:::::::::::::::::::::::;;;;;;;;;;;;;;;;;oooooooooooooooOOOOO
::::::::::::::::::::::::;;;;;;;;;;;;;;;;;oooooooooooooooOOOO
:::::::::::::::::::::::::;;;;;;;;;;;;;;;;;ooooooooooooooOOOO
:::::::::::::::::::::::::::;;;;;;;;;;;;;;;;ooooooooooooooOOO
::::::::::::::::::::::::::::;;;;;;;;;;;;;;;ooooooooooooooOOO
::::::::::::::::::::::::::::;;;;;;;;;;;;;;;;ooooooooooooooOO
,,,,,,,::::::::::::::::::::::;;;;;;;;;;;;;;;ooooooooooooooOO
,,,,,,,,,,::::::::::::::::::::;;;;;;;;;;;;;;;ooooooooooooooO
,,,,,,,,,,,,:::::::::::::::::::;;;;;;;;;;;;;;ooooooooooooooO
,,,,,,,,,,,,,,::::::::::::::::::;;;;;;;;;;;;;;oooooooooooooO
,,,,,,,,,,,,,,,:::::::::::::::::;;;;;;;;;;;;;;oooooooooooooo
,,,,,,,,,,,,,,,,,::::::::::::::::;;;;;;;;;;;;;;ooooooooooooo
,,,,,,,,,,,,,,,,,,:::::::::::::::;;;;;;;;;;;;;;ooooooooooooo
,,,,,,,,,,,,,,,,,,,:::::::::::::::;;;;;;;;;;;;;;oooooooooooo
,,,,,,,,,,,,,,,,,,,,::::::::::::::;;;;;;;;;;;;;;oooooooooooo
,,,,,,,,,,,,,,,,,,,,:::::::::::::::;;;;;;;;;;;;;oooooooooooo
,,,,,,,,,,,,,,,,,,,,,::::::::::::::;;;;;;;;;;;;;oooooooooooo
,,,,,,,,,,,,,,,,,,,,,,::::::::::::::;;;;;;;;;;;;;ooooooooooo
....,,,,,,,,,,,,,,,,,,::::::::::::::;;;;;;;;;;;;;ooooooooooo
......,,,,,,,,,,,,,,,,,:::::::::::::;;;;;;;;;;;;;ooooooooooo
```

## C++
I have no shame in just copying and pasting the C code
```sh
$ cd ascii-gradient
$ g++ c++/ascii-gradient.cpp
$ cat samples/sample5.txt | ./a.out 
.............,,,,,,,,,,,,:::::::::::::;;;;;;;;;;;;oooooooooo
..........,,,,,,,,,,,,:::::::::::::;;;;;;;;;;;;ooooooooooooo
.......,,,,,,,,,,,,:::::::::::::;;;;;;;;;;;;oooooooooooooOOO
....,,,,,,,,,,,,:::::::::::::;;;;;;;;;;;;oooooooooooooOOOOOO
.,,,,,,,,,,,,:::::::::::::;;;;;;;;;;;;oooooooooooooOOOOOOOOO
,,,,,,,,,,:::::::::::::;;;;;;;;;;;;oooooooooooooOOOOOOOOOOOO
,,,,,,,:::::::::::::;;;;;;;;;;;;oooooooooooooOOOOOOOOOOOO888
,,,,:::::::::::::;;;;;;;;;;;;;ooooooooooooOOOOOOOOOOOO888888
,:::::::::::::;;;;;;;;;;;;;ooooooooooooOOOOOOOOOOOO888888888
:::::::::::;;;;;;;;;;;;oooooooooooooOOOOOOOOOOOO888888888888
::::::::;;;;;;;;;;;;oooooooooooooOOOOOOOOOOOO8888888888888$$
:::::;;;;;;;;;;;;oooooooooooooOOOOOOOOOOOO8888888888888$$$$$
::;;;;;;;;;;;;oooooooooooooOOOOOOOOOOOO8888888888888$$$$$$$$
;;;;;;;;;;;oooooooooooooOOOOOOOOOOOO8888888888888$$$$$$$$$$$
;;;;;;;;oooooooooooooOOOOOOOOOOOO8888888888888$$$$$$$$$$$$$$
;;;;;oooooooooooooOOOOOOOOOOOO8888888888888$$$$$$$$$$$$$$$$$
;;oooooooooooooOOOOOOOOOOOO8888888888888$$$$$$$$$$$$$$$$$$$$
ooooooooooooOOOOOOOOOOOO8888888888888$$$$$$$$$$$$$$$$$$$$$$$
oooooooooOOOOOOOOOOOO8888888888888$$$$$$$$$$$$$$$$$$$$$$$$$$
ooooooOOOOOOOOOOOO8888888888888$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
```

## Javascript
Just open [index.html](/javascript/index.html) in a browser
