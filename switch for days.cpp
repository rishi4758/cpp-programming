#include<stdio.h>
main()
{
	int a[7],i;
	printf("enter number from 1to 7");
	for(i=0;i<=6;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=6;i++)
	switch(a[i])
	{
	case 1:
	printf("%dst day of week is sunday",a[i]);
	break;    
	case 2:
	printf("%dnd day of week is monday ",a[i]);
		break;    
			case 3:
				printf("%drd day of week is tuesday ",a[i]);
					break;    
				case 4:
					printf("%dth day of week is wednesday",a[i]);
						break;    
					case 5:
						printf("%dth day of week is thursday",a[i]);
							break;    
						case 6:
							printf("%dth day of week is friday",a[i]);
								break;    
							case 7:
								printf("%dth day is saturday",a[i]);
									break;    
								default :
									printf("%th is invalid day",a[i]);
								}
						}
		
	
