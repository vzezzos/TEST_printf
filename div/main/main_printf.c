#include <stdio.h>
#include <limits.h>
#include <inttypes.h>

int			main()
{
    printf("%s", "ALLO\n");
    printf("%s %s", "ALLO\n", "ALLO 2\n");
    printf("\n ------------ %s%s -------------", "Coucou ", "Toto\n");
    printf("[%i abc]\n\n", 42);
    printf("[%c abc]\n\n", '4');
    printf("[%i %i %i %i]\n\n", 40, 41, 42, 43);
    int k =0;
    while(k++<55)
    {
        printf("[%c %c %c %c]\n\n", 'b', 'f', 'd', 'e');
        printf("%s%s%s%s%s\n", "Coucou\n", "coucou\n", "Coucou\n", "Coucou\n", "Coucou\n");
        printf("[%i]\n", k);
    }
    void	*ptr = (void *)0x1234FFUL;
    void	*ptr2 = (void *)0x1234AFUL;
    void	*ptr3 = (void *)-1349789L;
    void	*ptr4 = (void *)12345613421546768798646465346576796788679789UL;
    void	*ptr5 = (void *)-134567891234561349789L;

    printf("%p\n", ptr);
    printf("%p\n", ptr3);
    printf("%p\n", ptr4);
    printf("%p\n", ptr5);
    printf("%p\n", NULL);
    printf("%p%p\n", ptr, ptr2);
    printf("%p %p\n", ptr, ptr2);
    printf("123 %p %p\n", ptr, ptr2);
    printf("%p123  %p\n", ptr, ptr2);
    printf("%p %p123\n", ptr, ptr2);

    printf("%x\n", 0);
    printf("%x\n", 42);
    printf("%x\n", 126);
    printf("%x\n", -456);
    printf("%x %x\n", -45134545646465435216876L, 42);
    printf("%x %x\n", 134565749687984513456876L, 42);

    printf("%d\n", 0);
    printf("%d\n", 42);
    printf("%d\n", 126);
    printf("%d\n", -456);
    printf("%d %d\n", -45134545646465435216876L, 42);
    printf("%d %d\n", 134565749687984513456876L, 42);

    printf("%o\n", 0);
    printf("%o\n", 42);
    printf("%o\n", 126);
    printf("%o\n", -456);
    printf("%o %o\n", -45134545646465435216876L, 42);
    printf("%o %o\n", 134565749687984513456876L, 42);

    printf("%u\n", 0);
    printf("%u\n", 42);
    printf("%u\n", 126);
    printf("%u\n", -456);
    printf("%u %u\n", -45134545646465435216876L, 42);
    printf("%u %u\n", 134565749687984513456876L, 42);

    printf("%%\n", 10);
    printf("%#d\n", 42);
    printf("%#u\n", 412);
    printf("%%#u\n", 42);
    printf("TEST DIESE HEXA %#x\n", 255);
    printf("TEST DIESE OCTAL %#o\n", 255);
    printf("TEST DIESE INT %#i\n", 255);
    printf("TEST DIESE DECIMAL %#d\n", 255);
    printf("TEST DIESE CHAR %#c\n", 255);
    printf("TEST DIESE HEXA %#x FIN DE TEST\n", 255);

    printf("%li\n", 0);
    printf("%li\n", 42);
    printf("%li\n", 126);
    printf("%li\n", -456);
    printf("%li %d\n", -45134545646465435216876L, 42);
    printf("%ld %d\n", 134565749687984513456876L, 42);

    printf("LONG_MIN = %li, LLONG_MIN = %lli\n", LONG_MIN, LLONG_MIN);
    printf("ULONG_MAX = %lu, ULLONG_MAX = %llu\n", ULONG_MAX, ULLONG_MAX);

//
/* 			TEST HLJZ %i			*/
//

    printf("%hi\n", 42);
    printf("%hi\n", 132459678987632416876453142L);
    printf("%hi\n", -42);
    printf("%hi\n", -245213654796874653416354654674867442L);
    printf("%hi\n", 456);

    printf("%hhi\n", 42);
    printf("%hhi\n", 132459678987632416876453142L);
    printf("%hhi\n", -42);
    printf("%hhi\n", -245213654796874653416354654674867442L);
    printf("%hhi\n", 456);
    
    printf("%li\n", 42);
    printf("%li\n", 132459678987632416876453142L);
    printf("%li\n", -42);
    printf("%li\n", -245213654796874653416354654674867442L);
    printf("%li\n", 456);
    
    printf("%lli\n", 42);
    printf("%lli\n", 132459678987632416876453142L);
    printf("%lli\n", -42);
    printf("%lli\n", -245213654796874653416354654674867442L);
    printf("%lli\n", 456);

    printf("%ji\n", 42);
    printf("%ji\n", 132459678987632416876453142L);
    printf("%ji\n", -42);
    printf("%ji\n", -245213654796874653416354654674867442L);
    printf("%ji\n", 456);
    printf(" sizeof int_max t = %i, INT_MAX = %i\n", sizeof(intmax_t), INT_MAX);

    printf("%zi\n", (ssize_t)42);
    printf("%zi\n", (ssize_t)132459678987632416876453142L);
    printf("%zi\n", (ssize_t)-42);
    printf("%zi\n", (ssize_t)-245213654796874653416354654674867442L);
    printf("%zi\n", (ssize_t)456);
    printf("%zi\n", (ssize_t)INT_MAX + 2);

//
/* 				TEST HLJZ %d		*/
//

    printf("%hd\n", 42);
    printf("%hd\n", 132459678987632416876453142L);
    printf("%hd\n", -42);
    printf("%hd\n", -245213654796874653416354654674867442L);
    printf("%hd\n", 456);

    printf("%hhd\n", 42);
    printf("%hhd\n", 132459678987632416876453142L);
    printf("%hhd\n", -42);
    printf("%hhd\n", -245213654796874653416354654674867442L);
    printf("%hhd\n", 456);
    
    printf("%ld\n", 42);
    printf("%ld\n", 132459678987632416876453142L);
    printf("%ld\n", -42);
    printf("%ld\n", -245213654796874653416354654674867442L);
    printf("%ld\n", 456);
    
    printf("%lld\n", 42);
    printf("%lld\n", 132459678987632416876453142L);
    printf("%lld\n", -42);
    printf("%lld\n", -245213654796874653416354654674867442L);
    printf("%lld\n", 456);
  
    printf("%jd\n", (intmax_t)42);
    printf("%jd\n", (intmax_t)132459678987632416876453142L);
    printf("%jd\n", (intmax_t)-42);
    printf("%jd\n", (intmax_t)-245213654796874653416354654674867442L);
    printf("%jd\n", (intmax_t)456);
    printf(" sizeof int_max t = %i, INT_MAX = %d\n", sizeof(intmax_t), INT_MAX);

    printf("%zd\n", (ssize_t)42);
    printf("%zd\n", (ssize_t)132459678987632416876453142L);
    printf("%zd\n", (ssize_t)-42);
    printf("%zd\n", (ssize_t)-245213654796874653416354654674867442L);
    printf("%zd\n", (ssize_t)456);
    printf("%zd\n", (ssize_t)INT_MAX + 2);

//
/* 			TEST HLJZ %u					*/
//

    printf("%hu\n", 42);
    printf("%hu\n", 132459678987632416876453142L);
    printf("%hu\n", -42);
    printf("%hu\n", -245213654796874653416354654674867442L);
    printf("%hu\n", 456);

    printf("%hhu\n", 42);
    printf("%hhu\n", 132459678987632416876453142L);
    printf("%hhu\n", -42);
    printf("%hhu\n", -245213654796874653416354654674867442L);
    printf("%hhu\n", 456);
    
    printf("%lu\n", 42);
    printf("%lu\n", 132459678987632416876453142L);
    printf("%lu\n", -42);
    printf("%lu\n", -245213654796874653416354654674867442L);
    printf("%lu\n", 456);
    
    printf("%llu\n", 42);
    printf("%llu\n", 132459678987632416876453142L);
    printf("%llu\n", -42);
    printf("%llu\n", -245213654796874653416354654674867442L);
    printf("%llu\n", 456);
  
    printf("%ju\n", (uintmax_t)42);
    printf("%ju\n", (uintmax_t)132459678987632416876453142L);
    printf("%ju\n", (uintmax_t)-42);
    printf("%ju\n", (uintmax_t)-245213654796874653416354654674867442L);
    printf("%ju\n", (uintmax_t)456);

    printf("%zu\n", (size_t)42);
    printf("%zu\n", (size_t)132459678987632416876453142L);
    printf("%zu\n", (size_t)-42);
    printf("%zu\n", (size_t)-245213654796874653416354654674867442L);
    printf("%zu\n", (size_t)456);
    printf("%zu\n", (size_t)INT_MAX + 2);

//
/* 			TEST HLJZ %o					*/
//

    printf("%ho\n", 42);
    printf("%ho\n", 132459678987632416876453142L);
    printf("%ho\n", -42);
    printf("%ho\n", -245213654796874653416354654674867442L);
    printf("%ho\n", 456);

    printf("%hho\n", 42);
    printf("%hho\n", 132459678987632416876453142L);
    printf("%hho\n", -42);
    printf("%hho\n", -245213654796874653416354654674867442L);
    printf("%hho\n", 456);
    
    printf("%lo\n", 42);
    printf("%lo\n", 132459678987632416876453142L);
    printf("%lo\n", -42);
    printf("%lo\n", -245213654796874653416354654674867442L);
    printf("%lo\n", 456);
    
    printf("%llo\n", 42);
    printf("%llo\n", 132459678987632416876453142L);
    printf("%llo\n", -42);
    printf("%llo\n", -245213654796874653416354654674867442L);
    printf("%llo\n", 456);
  
    printf("%jo\n", (uintmax_t)42);
    printf("%jo\n", (uintmax_t)132459678987632416876453142L);
    printf("%jo\n", (uintmax_t)-42);
    printf("%jo\n", (uintmax_t)-245213654796874653416354654674867442L);
    printf("%jo\n", (uintmax_t)456);

    printf("%zo\n", (size_t)42);
    printf("%zo\n", (size_t)132459678987632416876453142L);
    printf("%zo\n", (size_t)-42);
    printf("%zo\n", (size_t)-245213654796874653416354654674867442L);
    printf("%zo\n", (size_t)456);
    printf("%zo\n", (size_t)INT_MAX + 2);

//
/* 			TEST HLJZ %x					*/
//

    printf("%hx\n", 42);
    printf("%hx\n", 132459678987632416876453142L);
    printf("%hx\n", -42);
    printf("%hx\n", -245213654796874653416354654674867442L);
    printf("%hx\n", 456);

    printf("%hhx\n", 42);
    printf("%hhx\n", 132459678987632416876453142L);
    printf("%hhx\n", -42);
    printf("%hhx\n", -245213654796874653416354654674867442L);
    printf("%hhx\n", 456);
    
    printf("%lx\n", 42);
    printf("%lx\n", 132459678987632416876453142L);
    printf("%lx\n", -42);
    printf("%lx\n", -245213654796874653416354654674867442L);
    printf("%lx\n", 456);
    
    printf("%llx\n", 42);
    printf("%llx\n", 132459678987632416876453142L);
    printf("%llx\n", -42);
    printf("%llx\n", -245213654796874653416354654674867442L);
    printf("%llx\n", 456);
  
    printf("%jx\n", (uintmax_t)42);
    printf("%jx\n", (uintmax_t)132459678987632416876453142L);
    printf("%jx\n", (uintmax_t)-42);
    printf("%jx\n", (uintmax_t)-245213654796874653416354654674867442L);
    printf("%jx\n", (uintmax_t)456);

    printf("%zx\n", (size_t)42);
    printf("%zx\n", (size_t)132459678987632416876453142L);
    printf("%zx\n", (size_t)-42);
    printf("%zx\n", (size_t)-245213654796874653416354654674867442L);
    printf("%zx\n", (size_t)456);
    printf("%zx\n", (size_t)INT_MAX + 2);

//
/*			TEST HLJZ + #	 		*/
//

    printf("%#ho\n", 42);
    printf("%#ho\n", 132459678987632416876453142L);
    printf("%#ho\n", -42);
    printf("%#ho\n", -245213654796874653416354654674867442L);
    printf("%#ho\n", 456);

    printf("%#hho\n", 42);
    printf("%#hho\n", 132459678987632416876453142L);
    printf("%#hho\n", -42);
    printf("%#hho\n", -245213654796874653416354654674867442L);
    printf("%#hho\n", 456);
    
    printf("%#lo\n", 42);
    printf("%#lo\n", 132459678987632416876453142L);
    printf("%#lo\n", -42);
    printf("%#lo\n", -245213654796874653416354654674867442L);
    printf("%#lo\n", 456);
    
    printf("%#llo\n", 42);
    printf("%#llo\n", 132459678987632416876453142L);
    printf("%#llo\n", -42);
    printf("%#llo\n", -245213654796874653416354654674867442L);
    printf("%#llo\n", 456);
  
    printf("%#jo\n", (uintmax_t)42);
    printf("%#jo\n", (uintmax_t)132459678987632416876453142L);
    printf("%#jo\n", (uintmax_t)-42);
    printf("%#jo\n", (uintmax_t)-245213654796874653416354654674867442L);
    printf("%#jo\n", (uintmax_t)456);

    printf("%#zo\n", (size_t)42);
    printf("%#zo\n", (size_t)132459678987632416876453142L);
    printf("%#zo\n", (size_t)-42);
    printf("%#zo\n", (size_t)-245213654796874653416354654674867442L);
    printf("%#zo\n", (size_t)456);
    printf("%#zo\n", (size_t)INT_MAX + 2);

    printf("%#hx\n", 42);
    printf("%#hx\n", 132459678987632416876453142L);
    printf("%#hx\n", -42);
    printf("%#hx\n", -245213654796874653416354654674867442L);
    printf("%#hx\n", 456);

    printf("%#hhx\n", 42);
    printf("%#hhx\n", 132459678987632416876453142L);
    printf("%#hhx\n", -42);
    printf("%#hhx\n", -245213654796874653416354654674867442L);
    printf("%#hhx\n", 456);
    
    printf("%#lx\n", 42);
    printf("%#lx\n", 132459678987632416876453142L);
    printf("%#lx\n", -42);
    printf("%#lx\n", -245213654796874653416354654674867442L);
    printf("%#lx\n", 456);
    
    printf("%#llx\n", 42);
    printf("%#llx\n", 132459678987632416876453142L);
    printf("%#llx\n", -42);
    printf("%#llx\n", -245213654796874653416354654674867442L);
    printf("%#llx\n", 456);
  
    printf("%#jx\n", (uintmax_t)42);
    printf("%#jx\n", (uintmax_t)132459678987632416876453142L);
    printf("%#jx\n", (uintmax_t)-42);
    printf("%#jx\n", (uintmax_t)-245213654796874653416354654674867442L);
    printf("%#jx\n", (uintmax_t)456);

    printf("%#zx\n", (size_t)42);
    printf("%#zx\n", (size_t)132459678987632416876453142L);
    printf("%#zx\n", (size_t)-42);
    printf("%#zx\n", (size_t)-245213654796874653416354654674867442L);
    printf("%#zx\n", (size_t)456);
    printf("%#zx\n", (size_t)INT_MAX + 2);

//
//
    printf("TEST avec %%.2li %.2li\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.10li %.10li\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.20li %.20li\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.30li %.30li\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.200li %.200li\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.li %.li\n", (intmax_t)INT_MAX + 2);
    
    printf("TEST avec %%.2ld %.2ld\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.10ld %.10ld\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.20ld %.20ld\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.30ld %.30ld\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.200ld %.200ld\n", (intmax_t)INT_MAX + 2);
    printf("TEST avec %%.ld %.ld\n", (intmax_t)INT_MAX + 2);
//    printf("TEST avec %%.123456789123456789 %.1234567891345679ld\n", (intmax_t)INT_MAX + 2);

    return (0);
}
