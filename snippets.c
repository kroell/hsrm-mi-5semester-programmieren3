/* scanf */
int main(void){
  double x;
  scanf ("%lg\n", &x);
}

/* Parameter einlesen */
int main (int argc, char *argv[]){
  double x;
  if (argc >1)
    sscanf (argv[1], "%lf", &x);
  else
    scanf ("%lg\n", &x);
}

/* pow - potenzieren*/
double _pow(double basis, double exp){
  double ret = 1;
  int i;
  if (exp == 0) return 1;
  for (i=0; i<exp; i++){
    ret *= basis;
  }
  return ret;
}

/* Betrag */
double _abs(double value){
  if (value < 0)
    return value *= -1;
  
  return value;
}

/* Laenge Array mit Enum */
enum length {length = 10};

/* Laenge eines Strings */
size_t _strlen(const char *s){
  int i;
  int size = 0;
  
  for (i = 0; *(s+i) != '\0'; i++){
    size++;
  }
  return size;
}

/* String kopieren */
char *_strcpy(char *dest, const char *src){
  int i = 0;
  
  for (i = 0; *(src+i) != '\0'; i++){
    *(dest+i) = *(src+i);
  }
  /* '\0' ans Ende setzen */
  *(dest+i)  = *(src+i);
  return dest;
}

/* Groß- zu Kleinbuchstaben*/
int tallToLow(int c){
  int j = c+32;
  if (c >= 'A' && c <= 'Z')
    c += j-c;

  return c;
}

/* Klein- zu Großbuchstaben */
int lowToTall(int c){
  int j = c-32;
  if (c >= 'a' && c <= 'z')
    c += j-c;

  return c;
}
