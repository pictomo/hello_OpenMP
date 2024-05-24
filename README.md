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

## 参考資料
* [OpenMP](https://www.openmp.org)
* [東京大学情報基盤センター - 言語によるOpenMP入門](https://www.cc.u-tokyo.ac.jp/events/lectures/03/kosyu-openmp_c.pdf)
* [九州大学情報基盤研究開発センター - 並列プログラミング超入門講習会 OpenMPコース](https://www.cc.kyushu-u.ac.jp/scp/doc/users/lecture/2018/openmp-nov2018.pdf)