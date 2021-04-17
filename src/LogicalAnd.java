public class LogicalAnd {
    static{
        System.loadLibrary("LogicAnd");
    }

    private native int logAnd(int a, int b);

    public static void main(String[] args) {
        LogicalAnd logicAnd = new LogicalAnd();
        System.out.println(logicAnd.logAnd(5,35));
    }
}
