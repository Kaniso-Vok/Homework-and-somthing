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
import 数据库.Staff;

/**
 *
 * @author 杨智康
 */
public class UpdateStaff extends Staff{
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    public UpdateStaff(){
        
    }
    
    public UpdateStaff(String staffid,String staffname,String staffsex,String hiredate,String position,String tel,String birth,String department,String staffpwd){
        super(staffid,staffname,staffsex,hiredate,position,tel,birth,department,staffpwd);
    }
    public void setData(){
        try{
            ps = dbConn.prepareStatement("update staff set staffname=?,staffsex=?,hiredate=?,position=?,department=?,tel=? WHERE staffid = ?");
            ps.setObject(1,staffname);
            ps.setObject(2,staffsex);
            ps.setObject(3,hiredate);
            ps.setObject(4,position);
            ps.setObject(5,department);
            ps.setObject(6,tel);
            ps.setObject(7,staffid);
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
        try {
            dbConn.close();
        } catch (SQLException ex) {
            ex.printStackTrace();
        }
    }
}

