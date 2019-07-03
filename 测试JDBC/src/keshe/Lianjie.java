/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package keshe;

import java.sql.*;
import java.util.logging.Level;
import java.util.logging.Logger;


/**
 *
 * @author 杨智康
 */
public class Lianjie {
        
        private static String dbURL="jdbc:sqlserver://localhost:1433;DatabaseName=sttaff";  
        private static String userName="sa";   //用户名
        private static String userPwd="123456";  //密码
        private static Connection dbConn = null;
        
        public static  Connection getSQL()
        {
            try{
                Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver");   //加载驱动类

                dbConn=DriverManager.getConnection(dbURL,userName,userPwd); //连接SQL Server数据库
                System.out.println("连接数据库成功！");
            }
            catch(ClassNotFoundException e){
                e.printStackTrace();
            }
            catch(SQLException e){
                System.out.print("SQL Server连接失败！");
            }
              
            return dbConn;
        }
        public static void close(Connection dbConn)
        {
            try {
                dbConn.close();
            } catch (SQLException ex) {
                Logger.getLogger(Lianjie.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
}
