int reverse(int x)
{
   int rev=0;
   int temp=x;
   if(temp<0)
   {
       temp=-temp;
   }
   while(temp!=0)
   {
       rev=(rev*10) + (temp%10);
       temp=temp/10;
   }
   if(x<0)
   {
       rev=-rev;
   }
    return rev;

}
