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
import 数据库.Department;

/**
 *
 * @author 杨智康
 */
public class UpdateDep extends Department{
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    public UpdateDep(){
        
    }
    public UpdateDep(String department,String dno,String manager,String dnumber){
        super(department,dno,manager,dnumber);
    }
    public void setData(){
        try{
            ps = dbConn.prepareStatement("update department set departments=?,manager=?,dnumber=? WHERE dno = ?");
            ps.setObject(1,departments);
            ps.setObject(2,manager);
            ps.setObject(3,dnumber);
            ps.setObject(4,dno);
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

