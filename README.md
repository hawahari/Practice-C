# Practice-C
Just want to practice C
##### gcc -o asv asv.c
- produces asv output(exe) if windows.
##### gcc asv.c -o asv
- same output as above. -o tells the input after it is the output.
##### make
-eg:</br> 
![Screenshot from 2024-05-22 17-13-48](https://github.com/hawahari/Practice-C/assets/149294262/3348d875-9b80-4fe7-bdb6-cd9a12a44497)

CFLAGS=-Wall -g<br>

clean:<br>
	rm -f ex1<br>
you can run make clean</br>
CFLAGS gives warnings </br>
#### gdb
- debugger
- gdb in terminal.
- run
- quit
- make sure program is compiled.eg: gdb ex2
- step
- break 7.sets a breakpoint at line 7.
- continue
- disassemble main
- info reg
- print variable

  
  ![Screenshot from 2024-05-22 18-35-39](https://github.com/hawahari/Practice-C/assets/149294262/752c5e25-0815-4993-a491-d4dcb600ad15)
![Screenshot from 2024-05-22 18-35-47](https://github.com/hawahari/Practice-C/assets/149294262/323d4491-90e6-4d8b-a6fe-5334f3ebf1a5)
![Screenshot from 2024-05-22 18-35-54](https://github.com/hawahari/Practice-C/assets/149294262/0c88ec81-0a73-41cd-b6d1-ea438863d5a7)
![Screenshot from 2024-05-22 18-36-05](https://github.com/hawahari/Practice-C/assets/149294262/ff538dcb-2369-481a-ac07-4348b82002fa)
![Screenshot from 2024-05-22 18-36-12](https://github.com/hawahari/Practice-C/assets/149294262/94ef85b3-5b11-4258-ab01-91554529ed5b)
![Screenshot from 2024-05-22 18-36-19](https://github.com/hawahari/Practice-C/assets/149294262/59297cae-623d-4b18-bb3f-3f6fb4179c83)


### Libraries
- <stdio.h>
- <string.h>
- <stdlib.h>
- <unistd.h> : provides access to POSIX OS.
- <netinet/in.h> : handling internet protocols, specifically IPv4 and IPv6.

