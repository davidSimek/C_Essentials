# GNU/Linux:
# release: `make B=R`
# debug:   `make B=D`
# test:    `make B=T`
#
# or
#
# release: `make B=R P=L`
# debug:   `make B=D P=L`
# test:    `make B=T P=L`
#
# Windows:
# release: `make B=R P=W`
# debug:   `make B=D P=W`
# test:    `make B=T P=W`

# B -> build
# 	R -> release
# 	D -> debug
# 	T -> test
# P -> platform
# 	L -> GNU/Linux
# 	W -> Windows

P ?= L
B ?= R

ifeq ($(P),W)
	CC         = x86_64-w64-mingw32-gcc
	CFLAGS     = -DPLATFORM_WINDOWS
	LDFLAGS    = # add Windows-specific links here
	TARGET_EXT = .exe
else ifeq ($(P),L)
	CC         = gcc
	CFLAGS     = -DPLATFORM_LINUX
	LDFLAGS    = # add GNU/Linux-specific links here
	TARGET_EXT =
endif

# Set these up for your project
SRC_DIR       = src
PROGRAM_NAME  = program
LDFLAGS	     += # for example -lm
RELEASE_FLAGS = -O3 -pipe
DEBUG_FLAGS   = -g
TEST_FLAGS    =

ifeq      ($(B),R) # release build
	EXCLUDE_FILE = $(SRC_DIR)/test.c
	CFLAGS      += $(RELEASE_FLAGS)
	TARGET       = $(PROGRAM_NAME)$(TARGET_EXT)
else ifeq ($(B),D) # debug build
	EXCLUDE_FILE = $(SRC_DIR)/test.c
	CFLAGS      += $(DEBUG_FLAGS)
	TARGET       = $(PROGRAM_NAME)$(TARGET_EXT)
else ifeq ($(B),T) # test build
	EXCLUDE_FILE = $(SRC_DIR)/main.c
	CFLAGS      += $(TEST_FLAGS)
	TARGET       = test$(TARGET_EXT)
endif

SOURCES = $(filter-out $(EXCLUDE_FILE), $(wildcard $(SRC_DIR)/*.c))

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

