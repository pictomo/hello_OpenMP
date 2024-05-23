# OpenMP実行例

## 環境

* スレッド数の指定 `export OMP_NUM_THREADS=8`

### Apple Cilicon Clang
1. openmpライブラリのインストール c.f.[Apple ClangでOpenMPを使う](https://qiita.com/ktgw0316/items/23235dd2533f488be7da)
1. brewの指示通りパスを通す
1. `source zprofile`
* コンパイル `clang -Xpreprocessor -fopenmp -lomp $LDFLAGS $CPPFLAGS {file_name}.c -o bin/{file_name}_omp.out`
* コンパイル(OpenMPなし) `clang {file_name}.c -o bin/{file_name}.out`

### GCC
* コンパイル `gcc -fopenmp {file_name}.c -o bin/{file_name}_omp.out`
* コンパイル(OpenMPなし) `gcc {file_name}.c -o bin/{file_name}.out`