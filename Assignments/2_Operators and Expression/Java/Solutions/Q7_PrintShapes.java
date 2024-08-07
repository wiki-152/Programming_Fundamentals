public class Q7_PrintShapes {
    public static void main(String[] args) {
        printBox();
        printOval();
        printArrow();
        printDiamond();
    }

    public static void printBox() {
        System.out.println("*****");
        System.out.println("*   *");
        System.out.println("*   *");
        System.out.println("*   *");
        System.out.println("*****");
    }

    public static void printOval() {
        System.out.println(" *** ");
        System.out.println("*   *");
        System.out.println("*   *");
        System.out.println(" *** ");
    }

    public static void printArrow() {
        System.out.println("  *  ");
        System.out.println(" *** ");
        System.out.println("*****");
        System.out.println("  *  ");
        System.out.println("  *  ");
    }

    public static void printDiamond() {
        System.out.println("  *  ");
        System.out.println(" * * ");
        System.out.println("*   *");
        System.out.println(" * * ");
        System.out.println("  *  ");
    }
}
