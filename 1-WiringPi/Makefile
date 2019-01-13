TARGET = motor

CFLAGS = -Wall # FIXME: add wiringPi include path
LDFLAGS = -lwiringPi

$(TARGET): motor.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)
all: $(TARGET)

clean:
	$(RM) $(TARGET)
