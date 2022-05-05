cc = gcc
includes = -I ./includes 
flags =  -Wall -Wextra -Werror ${includes} 
src  = src/main.c  src/display.c src/append.c src/insert.c src/delete.c src/search.c src/sort.c src/get.c src/set.c src/max.c
obj = ${src:.c=.o}
biniary = bin

all : ${biniary}

${biniary} : ${obj}
	${cc} -o $@ $^

%.o :%.c
	${cc}  ${flags} -c -o $@ $^
clean : 
	rm -rf ${obj}
git : 
	git commit -am "$m"
	git push 