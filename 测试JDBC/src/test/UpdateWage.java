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
import 数据库.Wage;

/**
 *
 * @author 杨智康
 */
public class UpdateWage extends Wage{
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    public UpdateWage(){
        
    }
    public UpdateWage(String staffid,String staffname,String leave,String basicwage,String poswage,String otwage,String realwage,String month,String natax,String pltax,String elderins,String medins,
            String way){
        super(staffid,staffname,leave,basicwage,poswage,otwage,realwage,month,natax,pltax,elderins,medins,way);
    }
    public void setData(){
        try{
            ps = dbConn.prepareStatement("update wage set staffname=?,leave=?,basicwage=?,poswage=?,otwage=?,realwage=?,month=?,natax=?,pltax=?,elderins=?,medins=?,way=?  WHERE staffid = ?");
            ps.setObject(1,staffname);
            ps.setObject(2,leave);
            ps.setObject(3,basicwage);
            ps.setObject(4,poswage);
            ps.setObject(5,otwage);
            ps.setObject(6,realwage);
            ps.setObject(7,month);
            ps.setObject(8, natax);
            ps.setObject(9, pltax);
            ps.setObject(10, elderins);
            ps.setObject(11, medins);
            ps.setObject(12, way);
            ps.setObject(13, staffid);
            int row = ps.executeUpdate();
            if(row > 0){
                System.out.println("修改数据成功");
            }
            ps.close();
        }
        catch(SQLException ex){
            ex.printStackTrace();
            System.out.print("修改数据失败!");
            
        }
    }
    public void close(){
        Lianjie.close(dbConn);
    }
}

