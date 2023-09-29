
        int i;
        printf("My gardes are:\n");

        for ( i = 0; i < size; i++)
        {
            printf("%d",grades[i]);
            printf("\n\n");
        }
        
        for ( i = 0; i < size; i++)
        {
            sum+=grades[i];
            printf("My average is %d",sum/size);
            printf("\n\n");
        }

        printf("sum is at adress %p, or %lu and is %lf\n",ptrsum,ptrsum,*ptrsum);
        printf("grades are at adress %p, tu %lu\n",grades,grades+5);

        return 0;