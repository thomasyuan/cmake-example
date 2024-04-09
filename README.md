# cmake-example

This a cmake project example. It supports

- Check code format with clang-format
- On GitHub with Actions (cpp-format.yml)
- Or locally, lazy way `find . -path ./build -prune -o -type f -name "*.cpp" -or -name "*.hpp" | xargs clang-format --dry-run --sort-includes -i`
- Static analysis with CppCheck (clang-tidy)
