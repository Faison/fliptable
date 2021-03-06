PREFIX?=/usr/local
CFLAGS=-g -Wall -std=c99

all: fliptable

fliptable:

install: all
	install -d $(DESTDIR)/$(PREFIX)/bin/
	install fliptable $(DESTDIR)/$(PREFIX)/bin/

uninstall:
	rm -f $(DESTDIR)/$(PREFIX)/bin/fliptable

clean:
	rm -f fliptable
	rm -rf *.dSYM