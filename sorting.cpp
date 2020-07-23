  #include<stdio.h>
  main()
  {
  	int j,i,a[]={1,6,7,2,9};
  	for(j=0;j<5;j++)
  	{
  		for(i=0;i<=4;i++)
  		{
		  if(a[i]>a[i+1])
  		{ 
  		int c;
  		c=a[i];
  		a[i]=a[i+1];
  		a[i+1]=c;
	}
		  printf("\n%d\n",a[i]);
	  
  }}}
