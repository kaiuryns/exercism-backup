class CalculatorConundrum {
    public String calculate(int operand1, int operand2, String operation) {
        
        if (operation == null) throw new IllegalArgumentException("Operation cannot be null");
        if (operation.isEmpty()) throw new IllegalArgumentException("Operation cannot be empty");
        
        int res = 0;
        switch (operation){
            case "+":
                res = operand1 + operand2;
                break;
            case "-":
                res = operand1 - operand2;
                break;
            case "*":
                res = operand1 * operand2;
                break;
            case "/":
                try {
                    res = operand1 / operand2;
                } catch (ArithmeticException e){
                    throw new IllegalOperationException("Division by zero is not allowed", e);
                }
                break;
            default:
                throw new IllegalOperationException("Operation '" + operation + "' does not exist");
        }
        return operand1 + " " + operation + " " + operand2 + " = " + res;
    }
}
