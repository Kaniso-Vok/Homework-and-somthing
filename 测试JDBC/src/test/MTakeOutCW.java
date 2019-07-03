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
import 数据库.Check;

/**
 *
 * @author 杨智康
 */
public class MTakeOutCW {
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    private ResultSet re = null;
    private ArrayList<Check> list5 =new ArrayList<>();
    public MTakeOutCW(){
        
    }
    public ArrayList<Check> getData()
    {
         try {
             ps = dbConn.prepareStatement("SELECT * FROM chek");
             re = ps.executeQuery();
             while(re.next())
             {
                 Check ti = new Check(re.getString(1),re.getString(2),re.getString(3),re.getString(4));
                 list5.add(ti);
             }
             return list5;
             
         } catch (SQLException ex) {
             Logger.getLogger(TakeOutStaff.class.getName()).log(Level.SEVERE, null, ex);
             return null;
         }
    }
    public void close(){
        Lianjie.close(dbConn);
    }
}

