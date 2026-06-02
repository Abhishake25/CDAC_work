package com.day1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;
public class App {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		//Step 1: Establish a connection with mySql database
		
		String url = "jdbc:mysql://localhost:3306/user";
		String username = "xxxxx";
		String password = "xxxxxxxxx";
		
		try(Connection connection = DriverManager.getConnection(url,username,password)){
			System.out.println("Connection successful");
		
		
		//Step 2: create a menu for user registration
		while(true) {
			
			System.out.println("-----Menu-------");
			System.out.println("1. Register Users");
			System.out.println("2. List Users by city");
			System.out.println("3. Update password");
			System.out.println("4. Display user");
			System.out.println("5. exit");
			
			System.out.println("Enter the choice");
			int choice = sc.nextInt();
			sc.nextLine();
			
			switch(choice) {
			case 1:
				 //Register User
			{
				System.out.println("Enter username:");
				String uname = sc.nextLine();
				
				System.out.println("Enter password:");
				String pass = sc.nextLine();
				
				System.out.println("Enter name:");
				String name = sc.nextLine();
				
				System.out.println("Enter email:");
				String email = sc.nextLine();
				
				System.out.println("Enter city:");
				String city = sc.nextLine();
				
				PreparedStatement ps = connection.prepareStatement("insert into user_table values(?,?,?,?,?)");
				
				ps.setString(1, uname);
				ps.setString(2, pass);
				ps.setString(3, name);
				ps.setString(4, email);
				ps.setString(5, city);
				
				int rows = ps.executeUpdate();
				if(rows>0) {
					System.out.println("Record successfully added");
				}
				
				break;
			}	
			case 2:
				//List Users by city
			{
				String sql = "Select * from user_table where city=?";
				System.out.println("Enter the name of city");
				String city = sc.nextLine();
				
				PreparedStatement ps = connection.prepareStatement(sql);
				ps.setString(1,city);
				
				ResultSet rs = ps.executeQuery(); //it returns only rows affected
				
				while(rs.next()) {
					System.out.println(rs.getString("username"));
					System.out.println(rs.getString("password"));
					System.out.println(rs.getString("name"));
					System.out.println(rs.getString("email"));
					System.out.println(rs.getString("city"));
				}
				
				break;
			}
			case 3:
				//Update Password
			{
				
				System.out.println("Enter the username");
				String uname = sc.nextLine();
				System.out.println("Enter the password");
				String pass = sc.nextLine();
				
				String sql = "Update user_table set password=? where username=?";
				
				PreparedStatement ps = connection.prepareStatement(sql);
				ps.setString(2,uname);
				ps.setString(1, pass);
				
				int rows = ps.executeUpdate();
				if(rows>0) {
					System.out.println("Record successfully updated");
				}
			}
				break;
				
			case 4:
				//Display users
			{
				System.out.println("Enter the user name whose detail you want to find");
				String name = sc.nextLine();
				
				String sql = "Select * from user_table where name=?";
				
				PreparedStatement ps = connection.prepareStatement(sql);
				ps.setString(1, name);
				
				ResultSet rs = ps.executeQuery();
				
				while(rs.next()) {
					System.out.println(rs.getString("username"));
					System.out.println(rs.getString("password"));
					System.out.println(rs.getString("name"));
					System.out.println(rs.getString("email"));
					System.out.println(rs.getString("city"));
				}
				break;
			}	
			default:
				System.out.println("Invalid choice");
			}
		}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}
	
	

}
