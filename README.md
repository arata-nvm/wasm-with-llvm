# wasm-with-llvm

```bash
clang --target=wasm32 -emit-llvm -c -sS $FILE
llc -march=wasm32 -filetype=obj $FILE
wasm-ld --no-entry --export-all -o $TARGET $FILE
```

```bash
clang --target=wasm32 -nostdlib -Wl,--no-entry -Wl,--export-all -o $TARGET $FILE
```

## link
https://dassur.ma/things/c-to-webassembly/

