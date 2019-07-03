/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import keshe.Lianjie;
import 数据库.newWage;



/**
 *
 * @author 杨智康
 */
public class AddWage extends newWage{
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    public AddWage(){
        
    }
    public AddWage(String staffid,String staffname,String basicwage,String poswage,String natax,String pltax,String elderins,String medins,
            String way){
        super(staffid,staffname,basicwage,poswage,natax,pltax,elderins,medins,way);
    }
    public boolean addData(){
        try{
            ps = dbConn.prepareStatement("Insert into wage values(?,?,?,?,?,?,?,?,?,?,?,?,?)"); 
            ps.setObject(1, staffid);
            ps.setObject(2,staffname);
            ps.setObject(3, 0);
            ps.setObject(4,basicwage);
            ps.setObject(5,poswage);
            ps.setObject(6, 0);
            ps.setObject(7, 0);
            ps.setObject(8, 0);
            ps.setObject(9, natax);
            ps.setObject(10, pltax);
            ps.setObject(11, elderins);
            ps.setObject(12, medins);
            ps.setObject(13, way);
           
            int count = ps.executeUpdate();
            if(count == 1){
                return true;
            }
            else
                return false;
        }
        catch(SQLException ex){
            ex.printStackTrace();
            System.out.print("插入失败!");
            
        }
        return false;
    }
    public void close(){
        Lianjie.close(dbConn);
    }
}
