void main(List<String> args) {
  int number = 600851475143;
  int bolen = 2;
  bool x=true;
  while (x) {
    if (number % bolen == 0) {
      number = (number / bolen).toInt();
    } else {
      bolen = bolen + 1;
    }
    if (number == 1) {
      break;
    }
  }
  print("bolen sonucu $bolen");
}
