void main(List<String> args) {
  int x = 1;
  var y = 2;
  int toplam = 0;
  int xy = 0;

  while (y < 4000000) {
    if (y % 2 == 0) {
      toplam += y;
    }
    xy = y;
    y = y + x;
    x = xy;
  }
  print("Toplam sayinin değeri : $toplam");
}
