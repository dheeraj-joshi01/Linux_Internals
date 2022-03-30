$(CC) = gcc

appln:	main.o calc_mean.o calc_sub.o
	$(CC) main.o calc_mean.o calc_sub.o -o appln

main.o:	main.c calculate.h
	$(CC) -c main.c

calc_mean.o:	calc_mean.c calculate.h
	$(CC) -c calc_mean.c

calc_sub.o:	calc_sub.c calculate.h
	$(CC) -c calc_sub.c

clean:
	rm -f *.o


