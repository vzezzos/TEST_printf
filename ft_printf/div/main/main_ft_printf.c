#include "ft_printf.h"
#include <limits.h>

int			main()
{
    ft_printf("%s", "ALLO\n");
    ft_printf("%s %s", "ALLO\n", "ALLO 2\n");
    ft_printf("\n ------------ %s%s -------------", "Coucou ", "Toto\n");
    ft_printf("[%i abc]\n\n", 42);
    ft_printf("[%c abc]\n\n", '4');
    ft_printf("[%i %i %i %i]\n\n", 40, 41, 42, 43);
    int k =0;
    while(k++<55)
    {
        ft_printf("[%c %c %c %c]\n\n", 'b', 'f', 'd', 'e');
        ft_printf("%s%s%s%s%s\n", "Coucou\n", "coucou\n", "Coucou\n", "Coucou\n", "Coucou\n");
        ft_printf("[%i]\n", k);
    }
    void	*ptr = (void *)0x1234FFUL;
    void	*ptr2 = (void *)0x1234AFUL;
    void	*ptr3 = (void *)-1349789L;
    void	*ptr4 = (void *)12345613421546768798646465346576796788679789UL;
    void	*ptr5 = (void *)-134567891234561349789L;

    ft_printf("%p\n", ptr);
    ft_printf("%p\n", ptr3);
    ft_printf("%p\n", ptr4);
    ft_printf("%p\n", ptr5);
    ft_printf("%p\n", NULL);
    ft_printf("%p%p\n", ptr, ptr2);
    ft_printf("%p %p\n", ptr, ptr2);
    ft_printf("123 %p %p\n", ptr, ptr2);
    ft_printf("%p123  %p\n", ptr, ptr2);
    ft_printf("%p %p123\n", ptr, ptr2);

    ft_printf("%x\n", 0);
    ft_printf("%x\n", 42);
    ft_printf("%x\n", 126);
    ft_printf("%x\n", -456);
    ft_printf("%x %x\n", -45134545646465435216876L, 42);
    ft_printf("%x %x\n", 134565749687984513456876L, 42);

    ft_printf("%d\n", 0);
    ft_printf("%d\n", 42);
    ft_printf("%d\n", 126);
    ft_printf("%d\n", -456);
    ft_printf("%d %d\n", -45134545646465435216876L, 42);
    ft_printf("%d %d\n", 134565749687984513456876L, 42);

    ft_printf("%o\n", 0);
    ft_printf("%o\n", 42);
    ft_printf("%o\n", 126);
    ft_printf("%o\n", -456);
    ft_printf("%o %o\n", -45134545646465435216876L, 42);
    ft_printf("%o %o\n", 134565749687984513456876L, 42);
    
    ft_printf("%u\n", 0);
    ft_printf("%u\n", 42);
    ft_printf("%u\n", 126);
    ft_printf("%u\n", -456);
    ft_printf("%u %u\n", -45134545646465435216876L, 42);
    ft_printf("%u %u\n", 134565749687984513456876L, 42);

    ft_printf("%%\n", 10);
    ft_printf("%#d\n", 42);
    ft_printf("%#u\n", 412);
    ft_printf("%%#u\n", 42);
    ft_printf("TEST DIESE HEXA %#x\n", 255);
    ft_printf("TEST DIESE OCTAL %#o\n", 255);
    ft_printf("TEST DIESE INT %#i\n", 255);
    ft_printf("TEST DIESE DECIMAL %#d\n", 255);
    ft_printf("TEST DIESE CHAR %#c\n", 255);
    ft_printf("TEST DIESE HEXA %#x FIN DE TEST\n", 255);

    ft_printf("%li\n", 0);
    ft_printf("%li\n", 42);
    ft_printf("%li\n", 126);
    ft_printf("%li\n", -456);
    ft_printf("%li %d\n", -45134545646465435216876L, 42);
    ft_printf("%ld %d\n", 134565749687984513456876L, 42);

    ft_printf("LONG_MIN = %li, LLONG_MIN = %lli\n", LONG_MIN, LLONG_MIN);
    ft_printf("ULONG_MAX = %lu, ULLONG_MAX = %llu\n", ULONG_MAX, ULLONG_MAX);

//
/* 			TEST HLJZ %i			*/
//

    ft_printf("%hi\n", 42);
    ft_printf("%hi\n", 132459678987632416876453142L);
    ft_printf("%hi\n", -42);
    ft_printf("%hi\n", -245213654796874653416354654674867442L);
    ft_printf("%hi\n", 456);

    ft_printf("%hhi\n", 42);
    ft_printf("%hhi\n", 132459678987632416876453142L);
    ft_printf("%hhi\n", -42);
    ft_printf("%hhi\n", -245213654796874653416354654674867442L);
    ft_printf("%hhi\n", 456);
    
    ft_printf("%li\n", 42);
    ft_printf("%li\n", 132459678987632416876453142L);
    ft_printf("%li\n", -42);
    ft_printf("%li\n", -245213654796874653416354654674867442L);
    ft_printf("%li\n", 456);
    
    ft_printf("%lli\n", 42);
    ft_printf("%lli\n", 132459678987632416876453142L);
    ft_printf("%lli\n", -42);
    ft_printf("%lli\n", -245213654796874653416354654674867442L);
    ft_printf("%lli\n", 456);
  
    ft_printf("%ji\n", 42);
    ft_printf("%ji\n", 132459678987632416876453142L);
    ft_printf("%ji\n", -42);
    ft_printf("%ji\n", -245213654796874653416354654674867442L);
    ft_printf("%ji\n", 456);
    ft_printf(" sizeof int_max t = %i, INT_MAX = %i\n", sizeof(intmax_t), INT_MAX);

    ft_printf("%zi\n", (ssize_t)42);
    ft_printf("%zi\n", (ssize_t)132459678987632416876453142L);
    ft_printf("%zi\n", (ssize_t)-42);
    ft_printf("%zi\n", (ssize_t)-245213654796874653416354654674867442L);
    ft_printf("%zi\n", (ssize_t)456);
    ft_printf("%zi\n", (ssize_t)INT_MAX + 2);

//
/* 				TEST HLJZ %d		*/
//

    ft_printf("%hd\n", 42);
    ft_printf("%hd\n", 132459678987632416876453142L);
    ft_printf("%hd\n", -42);
    ft_printf("%hd\n", -245213654796874653416354654674867442L);
    ft_printf("%hd\n", 456);

    ft_printf("%hhd\n", 42);
    ft_printf("%hhd\n", 132459678987632416876453142L);
    ft_printf("%hhd\n", -42);
    ft_printf("%hhd\n", -245213654796874653416354654674867442L);
    ft_printf("%hhd\n", 456);
    
    ft_printf("%ld\n", 42);
    ft_printf("%ld\n", 132459678987632416876453142L);
    ft_printf("%ld\n", -42);
    ft_printf("%ld\n", -245213654796874653416354654674867442L);
    ft_printf("%ld\n", 456);
    
    ft_printf("%lld\n", 42);
    ft_printf("%lld\n", 132459678987632416876453142L);
    ft_printf("%lld\n", -42);
    ft_printf("%lld\n", -245213654796874653416354654674867442L);
    ft_printf("%lld\n", 456);
  
    ft_printf("%jd\n", (intmax_t)42);
    ft_printf("%jd\n", (intmax_t)132459678987632416876453142L);
    ft_printf("%jd\n", (intmax_t)-42);
    ft_printf("%jd\n", (intmax_t)-245213654796874653416354654674867442L);
    ft_printf("%jd\n", (intmax_t)456);
    ft_printf(" sizeof int_max t = %i, INT_MAX = %d\n", sizeof(intmax_t), INT_MAX);

    ft_printf("%zd\n", (ssize_t)42);
    ft_printf("%zd\n", (ssize_t)132459678987632416876453142L);
    ft_printf("%zd\n", (ssize_t)-42);
    ft_printf("%zd\n", (ssize_t)-245213654796874653416354654674867442L);
    ft_printf("%zd\n", (ssize_t)456);
    ft_printf("%zd\n", (ssize_t)INT_MAX + 2);

//
/* 			TEST HLJZ %u					*/
//

    ft_printf("%hu\n", 42);
    ft_printf("%hu\n", 132459678987632416876453142L);
    ft_printf("%hu\n", -42);
    ft_printf("%hu\n", -245213654796874653416354654674867442L);
    ft_printf("%hu\n", 456);

    ft_printf("%hhu\n", 42);
    ft_printf("%hhu\n", 132459678987632416876453142L);
    ft_printf("%hhu\n", -42);
    ft_printf("%hhu\n", -245213654796874653416354654674867442L);
    ft_printf("%hhu\n", 456);
    
    ft_printf("%lu\n", 42);
    ft_printf("%lu\n", 132459678987632416876453142L);
    ft_printf("%lu\n", -42);
    ft_printf("%lu\n", -245213654796874653416354654674867442L);
    ft_printf("%lu\n", 456);
    
    ft_printf("%llu\n", 42);
    ft_printf("%llu\n", 132459678987632416876453142L);
    ft_printf("%llu\n", -42);
    ft_printf("%llu\n", -245213654796874653416354654674867442L);
    ft_printf("%llu\n", 456);
  
    ft_printf("%ju\n", (uintmax_t)42);
    ft_printf("%ju\n", (uintmax_t)132459678987632416876453142L);
    ft_printf("%ju\n", (uintmax_t)-42);
    ft_printf("%ju\n", (uintmax_t)-245213654796874653416354654674867442L);
    ft_printf("%ju\n", (uintmax_t)456);

    ft_printf("%zu\n", (size_t)42);
    ft_printf("%zu\n", (size_t)132459678987632416876453142L);
    ft_printf("%zu\n", (size_t)-42);
    ft_printf("%zu\n", (size_t)-245213654796874653416354654674867442L);
    ft_printf("%zu\n", (size_t)456);
    ft_printf("%zu\n", (size_t)INT_MAX + 2);

//
/* 			TEST HLJZ %o					*/
//

    ft_printf("%ho\n", 42);
    ft_printf("%ho\n", 132459678987632416876453142L);
    ft_printf("%ho\n", -42);
    ft_printf("%ho\n", -245213654796874653416354654674867442L);
    ft_printf("%ho\n", 456);

    ft_printf("%hho\n", 42);
    ft_printf("%hho\n", 132459678987632416876453142L);
    ft_printf("%hho\n", -42);
    ft_printf("%hho\n", -245213654796874653416354654674867442L);
    ft_printf("%hho\n", 456);
    
    ft_printf("%lo\n", 42);
    ft_printf("%lo\n", 132459678987632416876453142L);
    ft_printf("%lo\n", -42);
    ft_printf("%lo\n", -245213654796874653416354654674867442L);
    ft_printf("%lo\n", 456);
    
    ft_printf("%llo\n", 42);
    ft_printf("%llo\n", 132459678987632416876453142L);
    ft_printf("%llo\n", -42);
    ft_printf("%llo\n", -245213654796874653416354654674867442L);
    ft_printf("%llo\n", 456);
  
    ft_printf("%jo\n", (uintmax_t)42);
    ft_printf("%jo\n", (uintmax_t)132459678987632416876453142L);
    ft_printf("%jo\n", (uintmax_t)-42);
    ft_printf("%jo\n", (uintmax_t)-245213654796874653416354654674867442L);
    ft_printf("%jo\n", (uintmax_t)456);

    ft_printf("%zo\n", (size_t)42);
    ft_printf("%zo\n", (size_t)132459678987632416876453142L);
    ft_printf("%zo\n", (size_t)-42);
    ft_printf("%zo\n", (size_t)-245213654796874653416354654674867442L);
    ft_printf("%zo\n", (size_t)456);
    ft_printf("%zo\n", (size_t)INT_MAX + 2);
//
/* 			TEST HLJZ %x					*/
//

    ft_printf("%hx\n", 42);
    ft_printf("%hx\n", 132459678987632416876453142L);
    ft_printf("%hx\n", -42);
    ft_printf("%hx\n", -245213654796874653416354654674867442L);
    ft_printf("%hx\n", 456);

    ft_printf("%hhx\n", 42);
    ft_printf("%hhx\n", 132459678987632416876453142L);
    ft_printf("%hhx\n", -42);
    ft_printf("%hhx\n", -245213654796874653416354654674867442L);
    ft_printf("%hhx\n", 456);
    
    ft_printf("%lx\n", 42);
    ft_printf("%lx\n", 132459678987632416876453142L);
    ft_printf("%lx\n", -42);
    ft_printf("%lx\n", -245213654796874653416354654674867442L);
    ft_printf("%lx\n", 456);
    
    ft_printf("%llx\n", 42);
    ft_printf("%llx\n", 132459678987632416876453142L);
    ft_printf("%llx\n", -42);
    ft_printf("%llx\n", -245213654796874653416354654674867442L);
    ft_printf("%llx\n", 456);
  
    ft_printf("%jx\n", (uintmax_t)42);
    ft_printf("%jx\n", (uintmax_t)132459678987632416876453142L);
    ft_printf("%jx\n", (uintmax_t)-42);
    ft_printf("%jx\n", (uintmax_t)-245213654796874653416354654674867442L);
    ft_printf("%jx\n", (uintmax_t)456);

    ft_printf("%zx\n", (size_t)42);
    ft_printf("%zx\n", (size_t)132459678987632416876453142L);
    ft_printf("%zx\n", (size_t)-42);
    ft_printf("%zx\n", (size_t)-245213654796874653416354654674867442L);
    ft_printf("%zx\n", (size_t)456);
    ft_printf("%zx\n", (size_t)INT_MAX + 2);

//
/*			TEST HLJZ + #	 		*/
//

    ft_printf("%#ho\n", 42);
    ft_printf("%#ho\n", 132459678987632416876453142L);
    ft_printf("%#ho\n", -42);
    ft_printf("%#ho\n", -245213654796874653416354654674867442L);
    ft_printf("%#ho\n", 456);

    ft_printf("%#hho\n", 42);
    ft_printf("%#hho\n", 132459678987632416876453142L);
    ft_printf("%#hho\n", -42);
    ft_printf("%#hho\n", -245213654796874653416354654674867442L);
    ft_printf("%#hho\n", 456);
    
    ft_printf("%#lo\n", 42);
    ft_printf("%#lo\n", 132459678987632416876453142L);
    ft_printf("%#lo\n", -42);
    ft_printf("%#lo\n", -245213654796874653416354654674867442L);
    ft_printf("%#lo\n", 456);
    
    ft_printf("%#llo\n", 42);
    ft_printf("%#llo\n", 132459678987632416876453142L);
    ft_printf("%#llo\n", -42);
    ft_printf("%#llo\n", -245213654796874653416354654674867442L);
    ft_printf("%#llo\n", 456);
  
    ft_printf("%#jo\n", (uintmax_t)42);
    ft_printf("%#jo\n", (uintmax_t)132459678987632416876453142L);
    ft_printf("%#jo\n", (uintmax_t)-42);
    ft_printf("%#jo\n", (uintmax_t)-245213654796874653416354654674867442L);
    ft_printf("%#jo\n", (uintmax_t)456);

    ft_printf("%#zo\n", (size_t)42);
    ft_printf("%#zo\n", (size_t)132459678987632416876453142L);
    ft_printf("%#zo\n", (size_t)-42);
    ft_printf("%#zo\n", (size_t)-245213654796874653416354654674867442L);
    ft_printf("%#zo\n", (size_t)456);
    ft_printf("%#zo\n", (size_t)INT_MAX + 2);

    ft_printf("%#hx\n", 42);
    ft_printf("%#hx\n", 132459678987632416876453142L);
    ft_printf("%#hx\n", -42);
    ft_printf("%#hx\n", -245213654796874653416354654674867442L);
    ft_printf("%#hx\n", 456);

    ft_printf("%#hhx\n", 42);
    ft_printf("%#hhx\n", 132459678987632416876453142L);
    ft_printf("%#hhx\n", -42);
    ft_printf("%#hhx\n", -245213654796874653416354654674867442L);
    ft_printf("%#hhx\n", 456);
    
    ft_printf("%#lx\n", 42);
    ft_printf("%#lx\n", 132459678987632416876453142L);
    ft_printf("%#lx\n", -42);
    ft_printf("%#lx\n", -245213654796874653416354654674867442L);
    ft_printf("%#lx\n", 456);
    
    ft_printf("%#llx\n", 42);
    ft_printf("%#llx\n", 132459678987632416876453142L);
    ft_printf("%#llx\n", -42);
    ft_printf("%#llx\n", -245213654796874653416354654674867442L);
    ft_printf("%#llx\n", 456);
  
    ft_printf("%#jx\n", (uintmax_t)42);
    ft_printf("%#jx\n", (uintmax_t)132459678987632416876453142L);
    ft_printf("%#jx\n", (uintmax_t)-42);
    ft_printf("%#jx\n", (uintmax_t)-245213654796874653416354654674867442L);
    ft_printf("%#jx\n", (uintmax_t)456);

    ft_printf("%#zx\n", (size_t)42);
    ft_printf("%#zx\n", (size_t)132459678987632416876453142L);
    ft_printf("%#zx\n", (size_t)-42);
    ft_printf("%#zx\n", (size_t)-245213654796874653416354654674867442L);
    ft_printf("%#zx\n", (size_t)456);
    ft_printf("%#zx\n", (size_t)INT_MAX + 2);

//
    ft_printf("TEST avec %%.2li %.2li\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.10li %.10li\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.20li %.20li\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.30li %.30li\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.200li %.200li\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.li %.li\n", (intmax_t)INT_MAX + 2);

    ft_printf("TEST avec %%.2ld %.2ld\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.10ld %.10ld\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.20ld %.20ld\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.30ld %.30ld\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.200ld %.200ld\n", (intmax_t)INT_MAX + 2);
    ft_printf("TEST avec %%.ld %.ld\n", (intmax_t)INT_MAX + 2);
//    ft_printf("TEST avec %%.123456789123456789 %.1234567891345679ld\n", (intmax_t)INT_MAX + 2);

    return (0);
}
