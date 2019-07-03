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
import 数据库.Check;

/**
 *
 * @author 杨智康
 */
public class UpdateCheck extends Check{
    private Connection dbConn = Lianjie.getSQL();
    private PreparedStatement ps = null;
    public UpdateCheck(){
        
    }
    public UpdateCheck(String staffid,String chek_ot,String chek_vac,String chek_late){
        super(staffid,chek_ot,chek_vac,chek_late);
    }
    public void setData(){
        try{
            ps = dbConn.prepareStatement("update chek set chek_ot=?,chek_vac=?,chek_late=? WHERE staffid = ?");
            ps.setObject(1,chek_ot);
            ps.setObject(2,chek_vac);
            ps.setObject(3,chek_late);
            ps.setObject(4,staffid);
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

