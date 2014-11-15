MKDIR_P = mkdir -p
OUT_DIR = build

# Chapter 1 - Intro

ch1_ex1: directories
	g++ -o build/ch1_ex1 ch1_intro/ex1.cpp

ch1_ex2: directories
	g++ -o build/ch1_ex2 ch1_intro/ex2.cpp

ch1_ex3: directories
	g++ -o build/ch1_ex3 ch1_intro/ex3.cpp

ch1_ex4: directories
	g++ -o build/ch1_ex4 ch1_intro/ex4.cpp

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

ch5_ex10: directories
	cc -o build/ch5_ex10 ch5_recursion/ex10.c

# Misc

directories: ${OUT_DIR}

${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

.PHONY: directories