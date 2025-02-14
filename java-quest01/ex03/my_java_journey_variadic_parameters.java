class my_java_jorney_variadic_parameters {

  public static void print(boolean b) {
    System.out.print(b);
  }

  public static void print(int i) {
    System.out.print(i);
  }

  public static void print(float f) {
    System.out.print(f);
  }

  public static void print(char c) {
    System.out.print(c);
  }

  public static void main(String[] args) {
    int four = 4;
    char sup    = '>';
    float pi_value = 3.14f;
    boolean var_true = true;
    char new_line = '\n';

    System.out.print("if (Pi == ");
    print(pi_value);
    System.out.print(") then ");
    print(four);
    System.out.print(' ');
    print(sup);
    System.out.print(" Pi is ");
    print(var_true);
    System.out.print('.');
    print(new_line);
  }
}

 