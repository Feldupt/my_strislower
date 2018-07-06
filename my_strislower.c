int	lowchar(char c)
{
  if(c >= 97 && c <= 122)
    return(0);
  else
    return(-1);
}



int	my_strislower(char *str)
{
  int i;
  
  i = 0;
  while(str[i])
    {
      if(lowchar(str[i]) == 0)
	i++;
      else
	return(-1);
    }
}


int	main()
{
  char *str;
  
  str = "HeLlo";
  printf("%d",  my_strislower(str));

  return(0);
}
