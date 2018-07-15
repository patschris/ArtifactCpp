CC		= g++
CFLAGS	= -g -Wall
EXEC 	= artifact
OBJS 	= artifact.o artifactHolder.o main.o masterpiece.o painting.o prints.o sculpture.o validation.o
SRCS 	= artifact.cpp artifactHolder.cpp main.cpp masterpiece.cpp painting.cpp prints.cpp sculpture.cpp validation.cpp
HDS		= artifact.hpp artifactHolder.hpp enumerations.hpp masterpiece.hpp painting.hpp prints.hpp sculpture.hpp validation.hpp

.PHONY : all
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

artifact.o: artifact.cpp
	$(CC) $(CFLAGS) -c artifact.cpp

artifactHolder.o: artifactHolder.cpp
	$(CC) $(CFLAGS) -c artifactHolder.cpp

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

masterpiece.o: masterpiece.cpp
	$(CC) $(CFLAGS) -c masterpiece.cpp

painting.o: painting.cpp
	$(CC) $(CFLAGS) -c painting.cpp

prints.o: prints.cpp
	$(CC) $(CFLAGS) -c prints.cpp

sculpture.o: sculpture.cpp
	$(CC) $(CFLAGS) -c sculpture.cpp	

validation.o: validation.cpp
	$(CC) $(CFLAGS) -c validation.cpp

.PHONY: clean
clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: check
check:
	valgrind --leak-check=full ./$(EXEC) 5 1 1