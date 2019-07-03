
package test;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import keshe.Lianjie; 

/**
 *
 * @author 杨智康
 */

public class JudgeStaffAP{
    Connection conn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    private ResultSet re = null;
    private String account, password;

    public JudgeStaffAP() {
    }

    public JudgeStaffAP(String account, String password){
        this.account = account;
        this.password = password;
    }
     
     
     
     public boolean getTest_account()
     {
         boolean boo = false;
         try {
             ps = conn.prepareStatement("SELECT staffid FROM staff WHERE staffid = ?");
             ps.setString(1, account);
             re = ps.executeQuery();
             boo = re.next();
             
             
         } catch (SQLException ex) {
             ex.printStackTrace();
             System.out.println("SQL语句错误");
         }
//         System.out.println(boo);
         return boo;
     }
     public boolean getTest_password()
     {
         boolean boo = false;
         if(getTest_account())
         {
             try {
                 ps = conn.prepareStatement("SELECT staffpwd FROM staff WHERE staffid = ? AND staffpwd = ?");
                 ps.setString(1, account);
                 ps.setString(2, password);
                 re = ps.executeQuery();
                 boo = re.next();
                 
             } catch (SQLException ex) {
                ex.printStackTrace();
                System.out.println("SQL语句错误");     
            }
           return boo;
        }
         else
             return false;
     }
     public void close()
     {
         Lianjie.close(conn);
     }
}
