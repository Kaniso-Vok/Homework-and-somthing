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
public class Login extends Staff {
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    public Login(){
        
    }
    public Login(String staffid,String staffname,String staffsex,String hiredate,String position,String tel,String birth,String department,String staffpwd){
        super(staffid,staffname,staffsex,hiredate,position,tel,birth,department,staffpwd);
    }
    public boolean Login() {
        try{
            ps = dbConn.prepareStatement("Insert into staff values(?,?,?,?,?,?,?,?,?)");
            ps.setObject(1,super.getStaffid());
            ps.setObject(2,super.getStaffname());
            ps.setObject(3,super.getStaffsex());
            ps.setObject(4,super.getHiredate());
            ps.setObject(5,super.getPosition());
            ps.setObject(6,super.getTel());
            ps.setObject(7,super.getBirth());
            ps.setObject(8,super.getDepartment());
            ps.setObject(9,super.getStaffpwd());
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
