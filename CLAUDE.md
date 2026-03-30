# 仓库定位

本仓库是个人算法笔记仓库, 用于统一管理源码、题解、数学推导和复习资料.

目标是让每道题尽量自包含, 同时允许通过仓库根目录中的公共笔记进行补充链接.

## 标准组织方式

- 优先按比赛或专题建立目录.
- 每道题使用一个独立文件夹.
- `Solution.md` 必须作为题目文件夹的主入口.
- `Problem.md` 用于记录题面、输入输出格式、样例和数据范围.
- `Math.md` 用于记录推导、证明或关键观察, 需要时再详细展开.
- 同一题可以保留多个源码版本.

## 标准题目模板

新建题目文件夹时, 先参考 [`./_template_problem/`](./_template_problem/) 中的模板.

推荐结构.

```text
ProblemFolder/
├── Solution.md
├── Problem.md
├── Math.md
├── ProblemName01.cpp
└── ProblemName02.cpp
```

最小结构.

```text
ProblemFolder/
├── Solution.md
├── Problem.md
└── ProblemName01.cpp
```

## 文档规则

- 所有笔记统一使用 Markdown.
- 所有链接统一使用 Markdown 相对路径.
- 所有正文统一使用半角英文标点.
- 所有句号统一使用 `.`.
- 不出现中文符号, 包括 `。` 和 `、`.
- `Solution.md` 负责承载题目文件夹的主导航.
- 新增文档后, 需要在 `Solution.md` 中加入入口链接.
- 避免出现无法从 `Solution.md` 到达的孤立文档.

## Solution.md 规则

每个 `Solution.md` 通常应包含.

- 顶部相关链接.
- 题目链接.
- 题意梳理.
- 核心思路.
- 推荐源码入口.
- 其他源码版本说明.
- 指向 `Problem.md`、`Math.md` 和公共笔记的链接.

应把 `Solution.md` 作为总览页, 不要把主要说明过度分散到多个文件.

## 源码规则

- 源码文件可以保留 `01`、`02`、`03` 等多个版本.
- 需要在 `Solution.md` 中标明推荐复习的最终版本.
- 源码默认保持竞赛/刷题风格, 除非任务明确要求额外结构.
- 新增或修改某一题时, 不要顺手重构无关文件.

## Claude Code 协作规则

当 Claude Code 在本仓库中工作时.

- 优先遵循标准题目模板.
- 默认保持现有命名风格, 除非用户明确要求修改.
- 优先编辑已有文件, 不随意新增无关文件.
- 修改后保持 Markdown 链接有效.
- 如果仓库级组织方式发生变化, 同步更新 `README.md`.
- 不要超出需求范围增加额外抽象或文档.

## 相关文件

- 仓库说明: [`./README.md`](./README.md).
- 标准模板: [`./_template_problem/Solution.md`](./_template_problem/Solution.md).
- 公共笔记: [`./备赛经验和技巧.md`](./备赛经验和技巧.md).
