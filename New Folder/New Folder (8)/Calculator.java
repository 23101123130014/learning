public class Calculator {

    private double operand1;
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