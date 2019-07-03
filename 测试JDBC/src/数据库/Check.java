/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package 数据库;

/**
 *
 * @author 杨智康
 */
public class Check {
    public String staffid,chek_ot,chek_vac,chek_late;
    public Check(){
        
    }
    public Check(String staffid,String chek_ot,String chek_vac,String chek_late){
        this.staffid=staffid;
        this.chek_ot=chek_ot;
        this.chek_vac=chek_vac;
        this.chek_late=chek_late;
    }

    public String getStaffid() {
        return staffid;
    }

    public void setStaffid(String staffid) {
        this.staffid = staffid;
    }

    public String getChek_ot() {
        return chek_ot;
    }

    public void setChek_ot(String chek_ot) {
        this.chek_ot = chek_ot;
    }

    public String getChek_vac() {
        return chek_vac;
    }

    public void setChek_vac(String chek_vac) {
        this.chek_vac = chek_vac;
    }

    public String getChek_late() {
        return chek_late;
    }

    public void setChek_late(String chek_late) {
        this.chek_late = chek_late;
    }
    
}
