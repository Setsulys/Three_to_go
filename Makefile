CC = gcc
CFLAGS = -Wall -ansi
LDFLAGS = -lMLV
OBJFILES = fct_ascii.o fct_mlv.o main.o
TARGET = threetogo

all : $(TARGET)

$(TARGET): $(OBJFILES)
		$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
