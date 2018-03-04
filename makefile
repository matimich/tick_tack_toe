CC= gcc
CFLAGS = -I.
INCLUDE = tick_tack_toa.h
OBJECTS = main.o check_2.o check_winner.o computer_move.o player_move.o start.o sum_of_digits.o tick_tack_toe.o

%.o: %.c $(INCLUDE) 
	$(CC) -c -o $@ $< $(CFLAGS)

TTT: $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(CFLAGS)
