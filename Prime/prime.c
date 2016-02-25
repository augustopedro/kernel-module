#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_DESCRIPTION("A kernel module to print prime numbers up to a given number.");

static int n = 50;
module_param(n, int, 0000);
MODULE_PARM_DESC(n, "Given number.");

static int __init primes_init(void)
{
    int i, j;

    if (n < 2)
        printk(KERN_INFO "No primes lesser than 2 exist.\n");
    else
    {
        printk(KERN_INFO "2\n");

        for (i = 3; i <= n; i += 2)
        {
            int isPrime = 1;
            for (j = 3; j < i; j += 2)
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }

            if (isPrime)
                printk(KERN_INFO "%d\n", i);
        }
    }

    return 0;
}

static void __exit primes_cleanup(void)
{
    printk(KERN_INFO "Prime numbers module removed.\n");
}

module_init(primes_init);
module_exit(primes_cleanup);
