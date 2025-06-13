a)int *number;
printf("%d\n", *number);  -> não precisa tranformar o numero -> number em ponteiro -> *number

b) float *realPtr;
long *integerPtr;
integerPtr = realPtr; -> long* é para c++ então se torna um codigo incompitivel

c) int *x, y;
x = y;  -> fazendo um ponteiro = inteiro sem endereço. O correto é x = &y;

d) char s[] = "um array de caracteres";
int count;  -> redundante/nunca usado
for (; *s != '\0'; s++) -> como s é uma string deve se usar um ponteiro intermediario (char *ptr = s;) no for (; *ptr != '\0'; ptr++)
printf("%c ", *s);      -> printf("%c ", *prt);

e) short *numPtr, result;   
void *genericPtr = numPtr;
result = *genericPtr + 7; -> deve usar result *(short*)genericPtr + 7; para endereçar o void para short

f) float x = 19.34;
float xPtr = &x;    ->   para usar  &x. Deve definir xPtr como ponteiro de inteiro -> floar *xPtr
printf("%f\n", xPtr);  ->   e deve usar xPtr com indicação de ponteiro *xPtr

g) char *s;
printf("%s\n", s); o certo seria printf("%c\n",&s)
