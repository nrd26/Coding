class RectAreaCirc{
    
    public static void main(String[] args) {
        int length, breadth,area,perimeter;

        length = Integer.parseInt(args[0]);
        breadth = Integer.parseInt(args[1]);

        area = length*breadth;
        perimeter = 2*(length+breadth);

        System.out.println(area);
        System.out.println(perimeter);

    }
}