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

/* Umwandlung aller Gross- in Kleinbuchstaben */
int tallToLow(int c){
  int j = c + 32;
  
  if (c >= 65 && c <= 90){
    c += j-c;
  }

return c; 
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
