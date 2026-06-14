# Contributing to QtwmFM

Thank you for your interest in contributing to _QtwmFM_! All contributions are welcome.

### Table Of Contents:
<!-- TOC:collapse=true&collapseText="Click to expand" -->
<details>
<summary><sub><sup>Click to expand</sup></sub></summary>
	
- [How Can I Contribute?](#how-can-i-contribute)
	- [Contributing Code](#contributing-code)
- [Build Dependencies](#build-dependencies)
- [Coding Guidelines](#coding-guidelines)

</details>

## How Can I Contribute?

### Contributing Code
To Contribute Code follow the following steps:

1. Make sure your environment has the [Build Dependencies](#build-dependencies)
2. [Fork](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/working-with-forks/) the repo
3. Create a feature [Branch](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/about-branches) in your Fork
4. [Commit](https://github.com/git-guides/git-commit) your changes To the branch
5. [Push](https://github.com/git-guides/git-push) to the branch
6. Open a [Pull Request](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request-from-a-fork)
7. Wait For [Review](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/reviewing-changes-in-pull-requests/about-pull-request-reviews) usually __72__ hours.

> [!IMPORTANT]  
> While Writing Code Follow the [Coding Guidelines](#coding-guidelines) of this Project.


## Build Dependencies
- C++26(C++2c) supported std lib(GCC 14+, libc++ 17+) and c/c++ compiler(GCC 14+, Clang 13+).
- Clangd (Clangd 13+)
- Qt6
- CMake 3.30+
- Make

## Coding Guidelines
- Follow ISO C++26 and Bug Guardrails Enforced by [CMakeLists.txt](CMakeLists.txt)
- Follow the Variable/Class/Function naming style alteady used in code present in the Project, keep it Consistent.
- Follow and use the Code Style described in [.clang-format](.clang-format)
- Always run _Clangd lsp_ and  _Clangd Tidy_ on the project.
