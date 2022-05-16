#define PERIOD 10
#define PRINCIPAL 5000.00

main()
{
    int year;
    float value,amount,inrate;

    amount = PRINCIPAL;
    year = 0;
    inrate = 0.11;

    while (year <= PERIOD)
    {
        printf ("%2d  %8.2f\n",year,amount);
        value = amount + inrate*amount;
        year = year + 1;
        amount = value;


    }

}
