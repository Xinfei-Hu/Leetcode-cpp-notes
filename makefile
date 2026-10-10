CXX = g++

# 编译参数
CXXFLAGS = -Wall -I. -g

# 编译文件输出目录
TARGET_DIR = build

# 项目目标
TARGET = $(TARGET_DIR)/app

all: app

SRCS = src/main.cpp \
	src/0009-isPalindrome/isPalindrome.cpp \
	src/0001-twoSum/twoSum.cpp \
	tests/test_0009.cpp \
	tests/test_0001.cpp

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


