class PosNegZero10{
    public static void main(String[] args) {
        int arr[10] = {},i = 0,pos = 0,neg = 0,zero = 0;

        for(i=0;i<10;i++){
            arr[i] = Integer.parseInt(args[i]);
            if(arr[i]>0)
            {
                pos++;
            }
            else if(arr[i]<0)
            {
                neg++;
            }
            else {zero++;}
        }

        System.out.println("There are "+pos+" positive numbers,"+neg+" negative numbers and "+zero+" zeroes.");
    }
}