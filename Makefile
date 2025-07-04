CC=gcc
CFLAGS=-Wall -Wextra -std=c99
TARGET=procmon
SOURCES=main.c process_list.c system_info.c utils.c

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)