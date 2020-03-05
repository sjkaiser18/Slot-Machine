# Slot-Machine
This program is intended to be practice on finding and manipulating buffer overflows. The program involves a "Slot-Machine" form where the user inputs money into the machine and "spins" for the slot, in which three random values of standard slot machine icons (ie lemons, diamonds, 7) will be output and will tell the user how much money they have either won or lost. 

To Compile:
(Compilation of this program is to be done in a 32-bit Kali Linux machine)

1. Open terminal  

2. Navigate to wherever the file is kept ie if on desktop  
type cd Desktop

3. In order to disable Adress Space Layout Randomization (ASLR)   
type cat /proc/sys/kernel/randomize_va_space  
note the value that follows:  
     if the value is 0 (zero)--> continue on to the next step  
     if the value is 1 or 2--> you still need to disable ASLR  
     type echo 0 | sudo tee /proc/sys/kernel/randomize_va_space  

4. In order to compile the program we will also need to disable data execution protection   
type g++ -g -o slots -fno-stack-protector slots.cpp  

5. To run the program   
type ./slots  

The goal of is to overflow the program, so that, no matter what the results of the wheel be, to be a winning spin.   

Happy hacking! 
