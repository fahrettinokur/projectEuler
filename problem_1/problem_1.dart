void main(List<String> args) {
  var toplam = 0;
  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      toplam += i;
    } else if (i % 5 == 0) {
      toplam += i;
    }
  }
  print("Toplamın sonucu $toplam");
}
