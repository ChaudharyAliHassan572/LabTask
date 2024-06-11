import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Student {
    private String name;
    private int rollNo;
    private int age;

    public Student(String name, int rollNo, int age) {
        this.name = name;
        this.rollNo = rollNo;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getRollNo() {
        return rollNo;
    }

    public int getAge() {
        return age;
    }
}

public class StudentRecord {
    private List<Student> studentRecords;

    public StudentRecord() {
        this.studentRecords = new ArrayList<>();
    }

    public void addStudentRecord(Student student) {
        studentRecords.add(student);
    }

    public void displayStudentRecords() {
        for (Student student : studentRecords) {
            System.out.println("Name: " + student.getName());
            System.out.println("Roll No: " + student.getRollNo());
            System.out.println("Age: " + student.getAge());
            System.out.println();
        }
    }

    public static void main(String[] args) {
        StudentRecord studentRecord = new StudentRecord();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("1. Add Student Record");
            System.out.println("2. Display Student Records");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter student name: ");
                    String name = scanner.next();
                    System.out.print("Enter student roll no: ");
                    int rollNo = scanner.nextInt();
                    System.out.print("Enter student age: ");
                    int age = scanner.nextInt();
                    Student student = new Student(name, rollNo, age);
                    studentRecord.addStudentRecord(student);
                    break;
                case 2:
                    studentRecord.displayStudentRecords();
                    break;
                case 3:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}