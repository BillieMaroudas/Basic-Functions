CC= gcc
CFLAGS= -Wall -ansi -std=c89

all:	identify	longline	squeeze	strip	permute

identify: identify.c
	$(CC) $(CFLAGS)	$^ -o $@

longline: longline.c
	$(CC) $(CFLAGS)	$^ -o $@

squeeze: squeeze.c
	$(CC) $(CFLAGS)	$^ -o $@

strip: strip.c
	$(CC) $(CFLAGS)	$^ -o $@

permute: permute.c
	$(CC) $(CFLAGS)	$^ -o $@

clean:
	rm identify longline squeeze strip permute

test:
	./identify <identifyTest.txt> identifyOutput.txt
	./permute <permuteTest.txt> permuteOutput.txt
	./strip <stripTest.txt> stripOutput.txt
	./squeeze <squeezeTest.txt> squeezeOutput.txt
	./longline <longlineTest.txt> longlineOutput.txt
	

ass1.tar.gz:	ass1.tar
	gzip	ass1.tar

ass1.tar: 	*.c *.h makefile Makefile test
	tar -cf ass1.tar *.c *.h makefile Makefile test 