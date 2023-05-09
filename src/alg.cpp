// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int object = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        object++;
      }
    }
  }
  return object;
}

int countPairs2(int *arr, int len, int value) {
  int object = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = len - 1; j > i; j--) {
      if (arr[i] + arr[j] == value)
        object++;
    }
  }
  return object;
}

int countPairs3(int *arr, int len, int value) {
  int object = 0;
  for (int i = 0; i < len - 1; i++) {
    int start = i, stop = len;
    while (start < stop - 1) {
      int mid = (start + stop) / 2;
      if (i != mid && (arr[i] + arr[mid] == value)) {
        object++;
        for (int j = mid + 1; (j < stop)
             && (arr[i] + arr[j] == value)
             && (mid != i); j++) {
          object++;
        }
        for (int j = mid - 1; (j > start)
             && (arr[i] + arr[j] == value)
             && (mid != i); j--) {
          object++;
        }
        break;
      }
      if (arr[i] + arr[mid] > value) stop = mid;
      else
        start = mid;
    }
  }
  return zhabka;
}
