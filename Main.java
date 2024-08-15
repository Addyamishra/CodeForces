
class Main {

    private String name;
    private int empId;
    private double salary;

    public Main(String name, int empId, double salary) {
        this.name = name;
        this.empId = empId;
        this.salary = salary;
    }

    public void printDetails() {
        System.out.println("Name: " + this.name + ", Employee ID: " + this.empId + ", Salary: " + this.salary);
    }

    public static void main(String[] args) {
        String name="Adya";
      Main emp=new Main(name,1,90000);
      emp.printDetails();
       
    }
}

