cc = gcc
includes = -I ./includes 
flags =  -Wall -Wextra -Werror ${includes} 
src  = 	src/main.c  src/display.c src/append.c src/insert.c src/delete.c src/search.c src/sort.c src/get.c src/set.c src/max.c src/min.c src/sum.c src/avg.c src/reverse.c src/left_shift.c src/right_shift.c src/left_rotate.c src/right_rotate.c
obj = ${src:.c=.o}
name = libft.a
libc = ar rc
libr = ranlib
biniary = bin

all : ${name}


${name}: ${obj}
	${libc} ${name} ${obj}
	${libr} ${name}

%.o :%.c
	${cc}  ${flags} -c -o $@ $^

clean : 
	rm -rf ${obj}  a.out 

run : 
	${cc} ${flags} src/main.c ${name} 

git : 
	git commit -am "$m"
	git push 