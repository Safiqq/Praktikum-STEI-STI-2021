/**
 * StudentSorter.java
 * StudentSorter adalah sebuah kelas yang mengelola informasi mengenai siswa dan
 * nilai-nilai mereka dalam beberapa mata pelajaran, menghitung nilai rata-rata
 * (GPA) dari setiap siswa, dan mengurutkan mereka berdasarkan GPA
 * 
 * @author 18221048 Syafiq Ziyadul Arifin
 */

import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class StudentSorter {
    public static class Student {
        String name;
        Map<String, Integer> courseGrades;

        public Student(String name) {
            // Please provide your solution in the space below
            this.name = name;
            courseGrades = new HashMap<String, Integer>();
        }

        public void addCourseGrade(String course, int grade) {
            // Please provide your solution in the space below
            courseGrades.put(course, grade);
        }

        public double getGPA() {
            // Please provide your solution in the space below
            double gpa = 0.0;
            for (Integer value : courseGrades.values()) {
                gpa += value;
            }
            gpa /= courseGrades.size();
            return gpa;
        }

        public String getName() {
            // Please provide your solution in the space below
            return name;
        }
    }

    public static class StudentComparator implements Comparator<Student> {
        @Override
        public int compare(Student s1, Student s2) {
            // Please provide your solution in the space below
            return Double.compare(s1.getGPA(), s2.getGPA());
        }
    }

    public static List<Student> sortStudentsByGPA(List<Student> students) {
        // Please provide your solution in the space below
        StudentComparator studentComparator = new StudentComparator();
        for (int i = 0; i < students.size(); i++) {
            for (int j = i+1; j < students.size(); j++) {
                if (studentComparator.compare(students.get(i), students.get(j)) == 1) {
                    Student temp = students.get(i);
                    students.set(i, students.get(j));
                    students.set(j, temp);
                }
            }
        }
        return students;
    }
}
