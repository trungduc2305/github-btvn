
import java.util.ArrayList;
import java.util.Scanner;


class User {
    private String username;
    private int age;

    public User(String username, int age) {
        this.username = username;
        this.age = age;
    }

    public String getUsername() {
        return username;
    }

    public int getAge() {
        return age;
    }

    @Override
    public String toString() {
        return "Ten: " + username + ", Tuoi: " + age;
    }
}

public class UserManager {
    private static ArrayList<User> users = new ArrayList<>();
    private static Scanner sc = new Scanner(System.in);

    
    public static void addUser() {
        System.out.print("Nhap ten: ");
        String name = sc.nextLine();
        System.out.print("Nhap tuoi: ");
        int age = Integer.parseInt(sc.nextLine());
        users.add(new User(name, age));
        System.out.println(" Da them");
    }

    public static void showUsers() {
        if (users.isEmpty()) {
            System.out.println("Trong");
        } else {
            System.out.println("danh sach :");
            for (User u : users) {
                System.out.println(u);
            }
        }
    }


    public static void deleteUser() {
        System.out.print("Ten xoa");
        String name = sc.nextLine();
        boolean removed = users.removeIf(u -> u.getUsername().equalsIgnoreCase(name));
        if (removed) {
            System.out.println("da xoa");
        } else {
            System.out.println("ko tim thay");
        }
    }


    public static void searchUser() {
        System.out.print("nhap ten can tim ");
        String name = sc.nextLine();
        for (User u : users) {
            if (u.getUsername().equalsIgnoreCase(name)) {
                System.out.println("tim thay" + u);
                return;
            }
        }
        System.out.println("ko tim thay");
    }

    public static void main(String[] args) {
        while (true) {
            System.out.println("1.Nham ten ");
            System.out.println("2. Hien thi");
            System.out.println("3. xoá");
            System.out.println("4. Tìm");
            System.out.println("0. Thoat");
            System.out.print("chon : ");
            String choice = sc.nextLine();

            switch (choice) {
                case "1": addUser(); break;
                case "2": showUsers(); break;
                case "3": deleteUser(); break;
                case "4": searchUser(); break;
                case "0": System.exit(0);
                default: System.out.println("ko hop le");
            }
        }
    }
}

