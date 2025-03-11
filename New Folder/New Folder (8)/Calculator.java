public class Calculator {

    private double operand1;
    private double operand2;

    public Calculator(double operand1, double operand2) {
        this.operand1 = operand1;
        this.operand2 = operand2;
    }

    public double add() {
        return operand1 + operand2;
    }

    public double subtract() {

        if (operand2 == 0) {

    public double modulo(){
        if (operand2 == 0) {
            System.out.println("Division: " + calculator.divide());
            System.out.println("Power: " + calculator.power());
            System.out.println("Modulo: " + calculator.modulo());

        }catch(ArithmeticException e){
            System.out.println(e.getMessage());
        }

        //Example of a division by zero.
        num2 = 0;
        calculator = new Calculator(num1, num2);
        try{
            System.out.println("Division: " + calculator.divide());
            System.out.println("Modulo: " + calculator.modulo());

        }catch(ArithmeticException e){
            System.out.println(e.getMessage());
        }

    }
}