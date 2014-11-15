MKDIR_P = mkdir -p
OUT_DIR = build

# Chapter 6 - Recursion

ch5_ex1: directories
	cc -o build/ch5_ex1 ch5_recursion/ex1.c

ch5_ex2: directories
	cc -o build/ch5_ex2 ch5_recursion/ex2.c

ch5_ex3: directories
	cc -o build/ch5_ex3 ch5_recursion/ex3.c

ch5_ex4: directories
	cc -o build/ch5_ex4 ch5_recursion/ex4.c

ch5_ex5: directories
	cc -o build/ch5_ex5 ch5_recursion/ex5.c

ch5_ex6: directories
	cc -o build/ch5_ex6 ch5_recursion/ex6.c

ch5_ex7: directories
	cc -o build/ch5_ex7 ch5_recursion/ex7.c

ch5_ex9: directories
	cc -o build/ch5_ex9 ch5_recursion/ex9.c

# Misc

directories: ${OUT_DIR}

${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

.PHONY: directories