
    #include <stdio.h>
    void main()
    {

        int i, num,esum=0,osum=0;
        printf("Enter the size of an array \n");

        scanf("%d", &num);
        int array[num-1];
        printf("Enter the elements of the array \n");

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }

        for (i = 0; i < num; i++)
        {
            if (i % 2 == 0)
            {
                esum+=array[i];

                }
        }
                printf("Sum of even indexes in the array : %d",esum);


        for (i = 0; i < num; i++)
        {
            if (i % 2 != 0)
            {
                osum+=array[i];
            }
        }
                printf("\nSum of odd indexes in the array : %d",osum);


    }
