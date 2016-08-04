# SIC-XE
A program written using lex and yacc to generate object code for the assembler SIC-XE.
Lex is the lexical analyser and yacc is the syntactic analyser.
SIC-XE stands for Simplified Instructional Computer-Extra Equipment.
It is a simple assemble with 4 different formats in its source code. The task is to read the source code and finally generate the object code for it.
This happens in 2 passes.
In pass1, we read the source code, do general syntax checking, and generate the symbol table which is stored in symbol.txt and generate an intermediate code stored in INTERMEDIATE.txt.
In pass2 we read the in the intermediate code and refer to symbolic addresses from the symbol table and generate the object code for the corresponding format.
Pass1 is written in p1.l and p1.y which corresponds to lex and yacc respectively.
Pass2 is written in p2.l and p2.y which corresponds to lex and yacc respectively.
To run:
	$ sh pass1.sh
	$ sh pass1.sh
	$ ./pass1
	$ ./pass2
The result will be object code conversion for each instruction followed by the object code for the whole program with start,text and end records.