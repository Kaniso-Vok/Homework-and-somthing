/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.sql.*;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;
import keshe.Lianjie;
import 数据库.Staff;

/**
 *
 * @author 杨智康
 */
public class TakeOutStaff {
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
     private ResultSet re = null;
     private ArrayList<Staff> list =new ArrayList<>();
    String staffid;
    public TakeOutStaff() {
    }

    public TakeOutStaff(String staffid) {
        this.staffid=staffid;
    }
    
    public ArrayList<Staff> getData()
    {
         try {
             ps = dbConn.prepareStatement("SELECT staffname,staffsex,hiredate,position,tel,birth,department,staffpwd FROM staff WHERE staffid = ? ");
             ps.setObject(1, staffid);
             re = ps.executeQuery();
             while(re.next())
             {
                 Staff ti = new Staff(re.getString(1),re.getString(2),re.getString(3),re.getString(4),re.getString(5),re.getString(6),re.getString(7),re.getString(8));
                 list.add(ti);
             }
             return list;
             
         } catch (SQLException ex) {
             Logger.getLogger(TakeOutStaff.class.getName()).log(Level.SEVERE, null, ex);
             return null;
         }
    }
    public void close(){
        Lianjie.close(dbConn);
    }

}
