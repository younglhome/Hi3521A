# Hisilicon Hi3521A sample Makefile

include ../Makefile.param
#ifeq ($(SAMPLE_PARAM_FILE), )
#     SAMPLE_PARAM_FILE:=../Makefile.param
#     include $(SAMPLE_PARAM_FILE)
#endif

PHIDI_LIB := ./lib
PHIDI_INC := -I./include/fdkaac 

CFLAGS += $(PHIDI_INC)
CFLAGS += -std=gnu99

# target source
SRC  := $(wildcard *.c) 
OBJ  := $(SRC:%.c=%.o)

TARGET := $(OBJ:%.o=%)
.PHONY : clean all

all: clean $(TARGET)

MPI_LIBS := $(REL_LIB)/libmpi.a
MPI_LIBS += $(REL_LIB)/libhdmi.a
             
$(TARGET):%:%.o $(COMM_OBJ)
	$(CC) $(CFLAGS) -lpthread -lm -o $@ $^ $(MPI_LIBS) $(AUDIO_LIBA) $(JPEGD_LIBA) -L$(PHIDI_LIB) -lfdk-aac
	cp $(TARGET) $(SDK_PATH)/output
	# cp $(TARGET) /var/lib/tftpboot/

clean:
	@rm -f $(TARGET)
	@rm -f $(OBJ)
	@rm -f $(COMM_OBJ)

cleanstream:
	@rm -f *.h264
	@rm -f *.jpg
	@rm -f *.mjp
	@rm -f *.mp4
