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
import 数据库.Wage;

/**
 *
 * @author 杨智康
 */
public class TakeOutWage {
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    private ResultSet re = null;
    private ArrayList<Wage> list2 =new ArrayList<>();
    String staffid;
    public TakeOutWage(){
        
    }
    public TakeOutWage(String staffid){
        this.staffid=staffid;
    }
    public ArrayList<Wage> getData()
    {
         try {
             ps = dbConn.prepareStatement("SELECT staffname,leave,basicwage,poswage,otwage,realwage,month,natax,pltax,elderins,medins,way  FROM wage WHERE staffid = ? ");
             ps.setObject(1, staffid);
             re = ps.executeQuery();
             while(re.next())
             {
                 Wage ti = new Wage(re.getString(1),re.getString(2),re.getString(3),re.getString(4),re.getString(5),re.getString(6),re.getString(7),re.getString(8),re.getString(9),re.getString(10),re.getString(11),re.getString(12));
                 list2.add(ti);
             }
             return list2;
             
         } catch (SQLException ex) {
             Logger.getLogger(TakeOutStaff.class.getName()).log(Level.SEVERE, null, ex);
             return null;
         }
    }
    public void close(){
        Lianjie.close(dbConn);
    }
}

