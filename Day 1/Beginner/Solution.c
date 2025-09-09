// User function Template for C
int countDigits(int n) {
    // code here
    int count=0,temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    return count;
}
