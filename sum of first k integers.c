int main()
{
    int arr[50],n,k,sum=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<k;i++)
  {
      sum=sum+arr[i];
  }
printf("%d",sum);
    return 0;
}
