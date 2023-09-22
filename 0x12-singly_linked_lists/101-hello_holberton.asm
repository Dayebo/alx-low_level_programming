global 		main
		extern 		printf
main:
		move edi, format
		xor eax, eax
		call printf
		mov eax, 0
		ret
format: db 'hello, holberton\n',0
