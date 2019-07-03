/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;
import keshe.Lianjie;
import 数据库.Department;

/**
 *
 * @author 杨智康
 */
public class MTakeOutDep {
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    private ResultSet re = null;
    private ArrayList<Department> list4 =new ArrayList<>();
    public MTakeOutDep(){
        
    }
    public ArrayList<Department> getData()
    {
         try {
             ps = dbConn.prepareStatement("SELECT * FROM department");
             re = ps.executeQuery();
             while(re.next())
             {
                 Department ti = new Department(re.getString(1),re.getString(2),re.getString(3),re.getString(4));
                 list4.add(ti);
             }
             return list4;
             
         } catch (SQLException ex) {
             Logger.getLogger(TakeOutStaff.class.getName()).log(Level.SEVERE, null, ex);
             return null;
         }
    }
    public void close(){
        Lianjie.close(dbConn);
    }
}

