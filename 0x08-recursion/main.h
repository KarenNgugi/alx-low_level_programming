#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

int _putchar(int c);

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);


#define TOL (0.001)     /* Error tolerance bound */
#define FABS(a)   ((a)>0.0?(a):-(a))
double sq_root(double x);
/**
 * sq_root - calculate squareroot
 * @x: number to calculate squareroot
 * Return: double
 */
double sq_root(double x)
{
        double rt = 1, ort = 0, diff = 0;

        while (FABS(ort - rt) > TOL)
        {
                ort = rt;
                rt = ((x / rt) + rt) / 2;
                diff = ort - rt;
        }
        return (rt);
}

#endif /* MAIN_H */
