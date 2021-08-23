Raspberry Pi PicoをWSL1+VSCodeで開発する環境のサンプル\
WSL2での動作はサポートされていません。\
Picoへの書き込みとデバッグはWindows側のJ-Linkを操作することで行っています。\
Pico-SDKへのパスは環境変数で設定しています。\
.vscode/launch.jsonのserverpathとtasks.json内のJLink.exeのパスはそれぞれの環境に合わせて変更してください。\
pico-download.jlinkのloadfileの引数は書き込むファイル名である必要があり、\*.mot、\*.srec、\*.s19、\*.s、\*.hex、\*.binが利用可能です。\
デバッグにはgdb-multiarchを使用しているため
````sh
sudo apt install gdb-multiarch
````
であらかじめインストールする必要があります。\
タスクはコンパイルのみのbuildとコンパイルとPicoへの書き込みを行うdownload、buildディレクトリ内を消去するclearがあります。\
~~デバッグは実行前にコンパイルを済ませておく必要があります。~~
