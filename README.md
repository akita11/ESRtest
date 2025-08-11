# ESRtest

<img src="https://github.com/akita11/ESRtest/blob/main/system.jpg" width="240px">

## 使い方

- M5Stack Core2のPortA（赤コネクタ）に接続
- 市販の低周波治療器用パッド（２個）をケーブル先のスナップに接続
- Core2の電源をON（電源ボタンを長押し or USB接続）すると、電極（パッド）間の抵抗に応じた電圧が表示される。皮膚抵抗の大小に応じて電圧が増減する。

## 感度の設定

皮膚の状態や電極と皮膚との接触状態によって、皮膚抵抗値が変化するので、あまり変化がなさそうな場合は、感度を調整する。

<img src="https://github.com/akita11/ESRtest/blob/main/setting.jpg" width="240px">

この図の"A"についている黒いコネクタを、隣の"B"や"C"に差し替えると感度が変わるので、適切なところを選ぶ。

## テスト用プログラムと改造

- このプログラムのソースコード一式を手元にダウンロードする（Code→zipでダウンロード→展開、またはGitHubアプリで開く）。
- Visual Studio Code （またはCursor）の「ファイル」→「フォルダを開く」から、展開したソースコード一式が入っているフォルダを開く。
- 画面の下の方にある"Build"でコンパイル、"Upload"で書き込み。
- src/main.cppがプログラム本体で、最初は画面に読み取った電圧を表示する、だけ。必要に応じてグラフ化などの改良を加える。なお生成AIを使う場合は、"M5Unifiedを使う"ことを指示に加えるとよい。

## Author

Junichi Akita (@akita11, akita@ifdl.jp)


