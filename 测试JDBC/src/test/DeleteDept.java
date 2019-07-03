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

public class DeleteDept extends Department {
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    public DeleteDept(){
        
    }
    public DeleteDept(String dno){
        super(dno);
    }
    public boolean DeleteData(){
        try{
            ps = dbConn.prepareStatement("DELETE FROM department WHERE dno = ?");
            ps.setString(1, dno);
            int row = ps.executeUpdate();
            if(row > 0){
                System.out.println("删除数据成功");
            }
            ps.close();
        }
        catch(SQLException ex){
            ex.printStackTrace();
        }
        return false;
    }
    public void close(){
        Lianjie.close(dbConn);
    }
}
