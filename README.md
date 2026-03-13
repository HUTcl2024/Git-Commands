# Git Commands Exercises

![Language](https://img.shields.io/badge/language-C-blue)
![Platform](https://img.shields.io/badge/platform-Windows%20%7C%20Linux-green)
![Tool](https://img.shields.io/badge/tool-Git-orange)
![Status](https://img.shields.io/badge/status-Learning%20Project-yellow)

## 项目简介

**Git Commands Exercises** 是一个使用 **C 语言** 实现的 Git 命令练习项目。

该项目通过调用 **Git CLI（命令行工具）** 并解析其输出，实现了对 Git 提交信息的格式化处理。

本项目主要用于学习：

* Git 命令行工具
* C 语言字符串处理
* 进程调用（`popen()`）
* Git 数据结构（Commit Hash）

程序会提取 **Git Hash 的前 7 个字符和后 7 个字符**，并输出如下格式：

```
3935e5d...e32f321
```

---

# 项目结构

```
Git-Commands
│
├── Exercise 3 Git Log Custom Command
│   ├── file.txt
│   ├── git_hash_format.c
│   └── git_hash_format.exe
│
├── Exercise 4 Git Blame Command
│   ├── file.txt
│   ├── git_blame_format.c
│   └── git_blame_format.exe
│
├── Exercise 5 Git Diff Command
│   ├── file.txt
│   ├── git_diff_format.c
│   └── git_diff_format.exe
│
└── README.md
```

---

# 项目功能

## Exercise 3 – Git Log Custom Command

该程序调用：

```
git log --pretty=format:%H
```

获取完整的 **commit hash**，然后输出：

```
前7位...后7位
```

### 示例输出

```
Exercise 3: Git Log Custom Command

3935e5d...e32f321
a16d9ff...b12a891
c032115...5aa9321
```

---

# Exercise 4 – Git Blame Command

该程序调用：

```
git blame -l file.txt
```

分析每一行代码对应的 commit hash，并输出：

```
前7位...后7位
```

### 示例输出

```
Exercise 4: Git Blame Command

3935e5d...e32f321
3935e5d...e32f321
a16d9ff...b12a891
```

---

# Exercise 5 – Git Diff Command

该程序调用：

```
git diff
```

解析 diff 输出中的：

```
index oldhash..newhash
```

并输出：

```
oldhash...newhash
```

### 示例输出

```
Exercise 5: Git Diff Command

a39150a...baec56f
```

---

# Git 工作流程示意

```
Git Repository
      │
      │
      ▼
+-------------+
|  Git Log    |
+-------------+
      │
      ▼
解析 Commit Hash
      │
      ▼
输出前7位...后7位
```

```
Git Repository
      │
      │
      ▼
+-------------+
|  Git Blame  |
+-------------+
      │
      ▼
分析每一行代码来源
      │
      ▼
格式化输出 Hash
```

```
Git Repository
      │
      │
      ▼
+-------------+
|   Git Diff  |
+-------------+
      │
      ▼
检测文件变化
      │
      ▼
解析 oldhash 和 newhash
```

---

# 编译方法

使用 **GCC 编译器**：

```
gcc git_hash_format.c -o git_hash_format
gcc git_blame_format.c -o git_blame_format
gcc git_diff_format.c -o git_diff_format
```

---

# 运行方法

在对应目录运行：

```
.\git_hash_format.exe
.\git_blame_format.exe
.\git_diff_format.exe
```

Linux / macOS：

```
./git_hash_format
./git_blame_format
./git_diff_format
```

---

# 注意事项

程序必须在 **Git 仓库目录中运行**。

如果在普通目录运行，会出现错误：

```
fatal: not a git repository
```

---

# 运行环境

| 项目   | 说明                      |
| ---- | ----------------------- |
| 操作系统 | Windows / Linux / macOS |
| 编程语言 | C                       |
| 编译器  | GCC                     |
| 依赖工具 | Git                     |

---

# 项目目的

该项目主要用于学习：

* Git CLI 的基本命令
* C 语言解析命令行输出
* Commit Hash 结构
* Git 仓库信息提取

---

# 作者

GitHub 用户：

**HUTcl2024**

GitHub 项目地址：

https://github.com/HUTcl2024/Git-Commands

---

# License

This project is for **learning and educational purposes**.
