/* Program to Find Roots of a Quadratic Equation */

void main()
{
    double a,b,c,d,r1,r2;
    printf("Enter a , b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = b*b -(4*a*c);
    if(d>0){
        d = sqrt(d);
        r1 = (-b+ d)/(2*a);
        r2 = (-b - d)/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }
    else if(d == 0)
    {
        r1 = r2 = -b /(2*a);
        printf("root1 = %.2lf and root2 = %.2lf", r1, r2);
    }
    else
    {
        double realp, imagp;
        d = sqrt(d);
        realp = -b / (2*a);
        imagp = d/(2*a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf - %.2lfi",realp,imagp,realp,imagp);
    }
}
