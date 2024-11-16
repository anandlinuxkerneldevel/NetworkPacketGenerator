CFLAGS = -O0 -g
SRCS   := $(wildcard *.c)
TRGT   := $(SRCS:.c=)

all : ${TRGT}

% : %.c
	$(CC) $(CFLAGS) $^ -o $@

clean :
	$(RM) ${TRGT}
