CXX = g++

# 编译参数
CXXFLAGS = -Wall -Iinclude -g

# 编译文件输出目录
TARGET_DIR = build

# 项目目标
TARGET = $(TARGET_DIR)/app

all: app

SRCS = src/main.cpp \
	src/utils/add.cpp\
	src/utils/sub.cpp\
	tests/test_add.cpp

OBJS = $(patsubst %.cpp, $(TARGET_DIR)/%.o, $(SRCS))


app: $(OBJS)
	mkdir -p $(TARGET_DIR)
	$(CXX) $(OBJS) $(CXXFLAGS) -o $(TARGET)

## 模式规则: 所有的cpp都走这一条规则
$(TARGET_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) -c $< $(CXXFLAGS) -o $@

leaks: app
	leaks --atExit -- $(TARGET)

run: app
	$(TARGET) 

clean:
	rm -rf $(TARGET_DIR)

.PHONY: all run clean


