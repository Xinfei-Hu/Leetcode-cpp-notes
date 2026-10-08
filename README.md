# Leetcode-cpp-nate

> 本仓库用于 LeetCode 刷题记录

[![Gitee](https://img.shields.io/badge/Gitee-仓库-blue?logo=gitee)]()
[![C++](https://img.shields.io/badge/C++-C11-blue)](https://en.wikipedia.org/wiki/C++11)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

## 运行环境
* 编程语言：C++
* 编译器：G++
* 开发工具：VSCode
* 工具链：Git/Gitee版本控制 | Leaks内存检测

## 已完成题目

| 题号 | 题目 |
|------|------|
|  | |


## 构建与运行
```bash
make          # 编译，生成 build/app
make run      # 编译并运行所有测试
make clean    # 清理编译产物
make leaks    # macOS 内存泄漏检测
```

## vscode 环境配置
1. tasks.json
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "make build",
            "type": "shell",
            "command": "make",
            "args": ["all"],
            "options": {
                "cwd": "${workspaceFolder}"
            },
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": "$gcc",
            "presentation": {
                "reveal": "always",
                "panel": "new"
            }
        },
        {
            "label": "make clean",
            "type": "shell",
            "command": "make",
            "args": ["clean"],
            "options": {
                "cwd": "${workspaceFolder}"
            },
            "problemMatcher": "$gcc"
        }
    ]
}
```
2. launch.json
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "LLDB Debug app",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/build/app",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "lldb",
            "preLaunchTask": "make build",
            "setupCommands": [
                {
                    "description": "Enable pretty-print for lldb",
                    "text": "settings set target.inline-breakpoint-strategy always",
                    "ignoreFailures": true
                }
            ]
        }
    ]
}
```