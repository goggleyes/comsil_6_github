.SURFFIXES : .cpp .o
CXX = g++

CPPFLAGS = -g

HEDRS = Array.h RangeArray.h
SRCS = main.cpp array.cpp rangearray.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = a.out

all : $(TARGET)

$(TARGET) : $(OBJS) $(HDRS)
	$(CXX) -o $@ $(OBJS)

clean :
	rm -rf $(OBJS) $(TARGET)	
